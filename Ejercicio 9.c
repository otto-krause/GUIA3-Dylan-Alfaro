#include <stdio.h>
int main(){
 float horas , valorhora , sueldo ;
 char categoria ;
 printf("ingresa su categoria : ");
 scanf("%c", &categoria);
 printf("ingrese cantidad de horas : ");
 scanf("%f", &horas);
 switch(categoria)
 {
 case'a':
 case'A':
 valorhora=200;
 break;
 case'b':
 case'B':
 valorhora=180;
 break;
 case'c':
 case'C':
 valorhora=150;
 break;
 default:
 printf("OPCION NOOO VALIDA");
 }
 sueldo=horas*valorhora;
 printf("sueldo ganado : %.2f\n ", sueldo );
 return 0;
}