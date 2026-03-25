#include <stdio.h>
int main(){
 float presion, fuerza, area ;
 printf("ingresa la fuerza : ");
 scanf("%f", &fuerza ) ;
 printf("ingresa el area : ");
 scanf("%f", &area );
 presion=fuerza/area ;
 printf("la presion es : %.2f\n" , presion);
 return 0 ;
}