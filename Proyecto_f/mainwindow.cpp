#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <string>
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <cstdlib>

#define FP 60
#define VP 1800
#define TP 40
#define VOLP 120
#define FT 3
#define VT 15
#define TT 5
#define VOLT 3
#define M 50
using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_Button_clicked()
{
    string n_c, d_vel, d_fre, d_tem, d_vol ,d_ca ,d_es1, d_es2 , d_tpo , estado1, estado2 ;

    float   velocidad, frecuencia, temperatura, voltaje;
    estado1 = "Aceptable";
    estado2 = "Critico";


    n_c=ui->N_carnet->text().toStdString();

    ofstream outfile ("/home/alse/Downloads/Proyecto_f/carnet.txt ");

    outfile << n_c;
    outfile.close();

    system("/home/alse/Downloads/Proyecto_f/./Strcat1.bin"); //ejecución de l proceso hijo


    ifstream infile ("../received.txt");

    infile>> d_es1 >> d_es2 >> d_ca >> d_vel >> d_fre >> d_tem >> d_vol >> d_tpo ;

    infile.close();
    
    ui->f_dato->setText(QString::fromStdString(d_fre));
    ui->v_dato->setText(QString::fromStdString(d_vel));
    ui->t_dato->setText(QString::fromStdString(d_tem));
    ui->volt_dato->setText(QString::fromStdString(d_vol));
    ui->tpo_dato->setText(QString::fromStdString(d_tpo));
    ui->e_dato->setText(QString::fromStdString(d_es2));

    frecuencia  =   std::stof(d_fre);
    velocidad   =   std::stof(d_vel);
    voltaje     =   std::stof(d_vol);
    temperatura =   std::stof(d_tem);

    if(FP-FT< frecuencia and frecuencia < FP+FT){
        ui->t_f->setText(QString::fromStdString(estado1));
    }else{ui->t_f->setText(QString::fromStdString(estado2));}

    if(VP-VT< velocidad and velocidad < VP+VT){
        ui->t_v->setText(QString::fromStdString(estado1));
    }else{ui->t_v->setText(QString::fromStdString(estado2));}


    if(VOLP-VOLT< voltaje and voltaje < VOLP+VOLT){
    ui->t_vol->setText(QString::fromStdString(estado1));
    }else{ui->t_vol->setText(QString::fromStdString(estado2));}

    if(TP-VOLT<temperatura and temperatura < TP+TT){
    ui->t_t->setText(QString::fromStdString(estado1));
    }else{ui->t_t->setText(QString::fromStdString(estado2));}

}
void MainWindow::on_Bdatos_clicked()
{

}

void MainWindow::on_actualizar_clicked()
{
    system("/home/alse/Downloads/Proyecto_f/./Strcat1.bin"); //ejecución de l proceso hijo

    string n_c, d_vel, d_fre, d_tem, d_vol ,d_ca ,d_es1, d_es2 , d_tpo , estado1, estado2 ;

    float   velocidad, frecuencia, temperatura, voltaje;
    estado1 = "Aceptable";
    estado2 = "Critico";

    ifstream infile ("/home/alse/Downloads/Proyecto_f/received.txt");

    infile>> d_es1 >> d_es2 >> d_ca >> d_vel >> d_fre >> d_tem >> d_vol >> d_tpo ;

    infile.close();

    ui->f_dato->setText(QString::fromStdString(d_fre));
    ui->v_dato->setText(QString::fromStdString(d_vel));
    ui->t_dato->setText(QString::fromStdString(d_tem));
    ui->volt_dato->setText(QString::fromStdString(d_vol));
    ui->tpo_dato->setText(QString::fromStdString(d_tpo));
    ui->e_dato->setText(QString::fromStdString(d_es2));


    frecuencia  =   std::stof(d_fre);
    velocidad   =   std::stof(d_vel);
    voltaje     =   std::stof(d_vol);
    temperatura =   std::stof(d_tem);

    if(FP-FT< frecuencia and frecuencia < FP+FT){
        ui->t_f->setText(QString::fromStdString(estado1));
    }else{ui->t_f->setText(QString::fromStdString(estado2));}

    if(VP-VT< velocidad and velocidad < VP+VT){
        ui->t_v->setText(QString::fromStdString(estado1));
    }else{ui->t_v->setText(QString::fromStdString(estado2));}


    if(VOLP-VOLT< voltaje and voltaje < VOLP+VOLT){
    ui->t_vol->setText(QString::fromStdString(estado1));
    }else{ui->t_vol->setText(QString::fromStdString(estado2));}

    if(TP-VOLT<temperatura and temperatura < TP+TT){
    ui->t_t->setText(QString::fromStdString(estado1));
    }else{ui->t_t->setText(QString::fromStdString(estado2));}


}
