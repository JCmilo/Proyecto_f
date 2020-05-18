#include <stdio.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>



#define EM 2000


void diewitherror(char *errormessage);
void conectar ( char[EM],char[EM],char[EM],char[EM] );//Conecta el programa con la ip y recibe los datos del motor
void cambio (char[EM] , char[EM] );//selecciona los valores del motor y los separa
void read_write(FILE*, char[EM]);//Lee un archivo .txt y copia su contenido en una variable local.
void write_read(FILE*, char[EM]);//Guarda el contenido de una variable local en un archivo .txt.



void main(int argc, char *argv[]){

    FILE *fcarne,*fpuerto, * fdir_ip,*recv_info;
    char ip [EM], carnet  [EM], ptr [EM], echobuf[EM], echobuf1[EM];

    fcarne       = fopen ("/home/alse/Downloads/Proyecto_f/carnet.txt","r+");//Abrir archivos, ubicación.
    fpuerto      = fopen ("/home/alse/Downloads/Proyecto_f/puerto.txt","r+");//Abrir archivos, ubicación.
    fdir_ip      = fopen ("/home/alse/Downloads/Proyecto_f/ip_dir.txt","r+");//Abrir archivos, ubicación.
    recv_info    = fopen("/home/alse/Downloads/Proyecto_f/received.txt", "wt");//Abrir archivos, ubicación.


    read_write(fpuerto, ptr);
    read_write(fcarne, carnet);
    read_write(fdir_ip, ip);



    conectar(ip,carnet,ptr,echobuf);
    cambio (echobuf, echobuf1);
    write_read(recv_info, echobuf1);




    printf(" \n c %s " , echobuf1);
}

//----------------------------------------------------
void cambio (char ins [EM] , char outs [EM])
{

    int lo, cont1=0, cont2=0,  n , m;
    lo = strnlen(ins , EM );

    for(cont1=0; cont1< lo ; cont1++){

          if(ins[cont1]==':'){
              m=1;
              cont1++;
            }
          if(ins[cont1]==','){
              m=0;
              outs[cont2]=' ';
              cont2++;}

          if(ins[cont1]=='}'){
              m=0;
             outs [cont1]='\0';
            }
          if(m==1){
              outs[cont2]=ins[cont1];
              cont2++; }

         }
    }

//-----------------------------------------------
void conectar (char ip[EM] , char carne [EM], char puerto[EM] ,char echobuffer[EM]){
    int sock;
    struct sockaddr_in echoservaddr;
    struct sockaddr_in fromaddr;
    unsigned short echoservport;
    unsigned int fromsize;
    char *servip;
    char *echostring;
    //char echobuffer[EM+1];
    int echostringlen;
    int respstringlen;


    /*if ((argc <3) || (argc >4)){
        fprintf(stderr,"usage %s <server ip> <echo word> [<echo port>]\n", argv[0]);
        exit(1);
    }
*/
    servip = ip;
    echostring = carne;

    if ((echostringlen = strlen(echostring)) > EM)
        diewitherror("echo word too long");

    if (atoi(puerto) >0 )
        echoservport = atoi(puerto);
    else
        echoservport = 65000;

    if ((sock = socket(PF_INET,SOCK_DGRAM,IPPROTO_UDP))<0)
        diewitherror("socket() failed");

    memset(&echoservaddr,0,sizeof(echoservaddr));
    echoservaddr.sin_family = AF_INET;
    echoservaddr.sin_addr.s_addr = inet_addr(servip);
    echoservaddr.sin_port = htons(echoservport);

    if(sendto(sock,echostring,echostringlen,0,(struct sockaddr *)&echoservaddr,sizeof(echoservaddr)) != echostringlen)
        diewitherror("sendto() sent a different number o bytes than expected");

    fromsize = sizeof(fromaddr);
    if ((respstringlen = recvfrom(sock,echobuffer,EM,0,(struct sockaddr *) &fromaddr, &fromsize)) > EM)
        diewitherror("recvfrom() failed");

    if (echoservaddr.sin_addr.s_addr != fromaddr.sin_addr.s_addr){
        fprintf(stderr,"error: recived a packet from unknow source.\n");
        exit(1);
    }


    echobuffer[respstringlen]='\0';

       close(sock);

}
//----------------------------------------------------
void read_write(FILE* arch, char txt[])
{
  long size;

  if(arch == NULL)
      printf("\n\n Error1 ().");
  else
  {
    fseek(arch, 0, SEEK_END);
    size = ftell(arch);
    rewind(arch);
    if(fread(txt, 1, size, arch) != size)
        printf("\n\n Error2");
    else
        fclose(arch);
  }
}

//-----------------------------------------------------------
void write_read(FILE* arch, char info[])
{
  long size;

    size = strlen(info);
    fwrite(info, 1, size, arch);
    fclose(arch);
}
//--------------------------------------------------
void diewitherror(char *errormessage){
    perror(errormessage);
    exit(1);
}
