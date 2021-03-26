#include "iostream"
#include "stdio.h"
#include <time.h> 
using namespace std;
class fecha //CLASE: atributos de la clase:
{
private:       
  int hora;
  int minutos;
  int sg;
public:   //CONSTRUCTOR: fecha (mismo nombre que clase)
fecha(); 
          //funciones o METODOS:
    void meter();  
    void decir();
    void obtener();
    void universal();
};
            // inicializar a cero: ------------------------------
fecha::fecha()
{  
    hora=8;
    minutos=30;
    sg=0;
    universal=0;
}

void fecha::meter() //funcion 1------------------------------------------
{
    printf("\n Mete la Hora: "); //meter en la variable hora, declarada arriba
    scanf("%s" ,&hora);          //poner & para recojer contenido de int (o float tb)
     printf("\n Mete Minutos: ");
    scanf("%s" , &minutos);
     printf("\n Mete Segundos: "); 
    scanf("%s" , &sg); 
}
  
void fecha::decir() //funcion 2------------------------------------------
{
    printf("\n Son las %s:%s:%s  \n ---------------------\n" ,&hora, &minutos, &sg); 
    //sacar de la variable nombre
}

void fecha::obtener() //funcion 3------------------------------------------
{
  time_t rawtime;
  time (&rawtime);
  printf ("Hora y Fecha Mundiales: %s \n", ctime(&rawtime));
}

void universal::universal() //funcion 4------------------------------------------
{
     scanf("%s" , &universal); 
}

int main()
{
fecha f;
f.meter();
f.universal();
f.decir();
f.obtener();
return 0;
}
