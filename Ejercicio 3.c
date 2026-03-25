#include <stdio.h>
int main(){
 float mujeres, hombres, total;
 float porhombres, pormujeres ;
 printf("ingresa mujeres: ");
 scanf("%f", &mujeres );
 printf("ongresa hombres: ");
 scanf("%f", &hombres );
 total=hombres + mujeres;
 porhombres= hombres/total*100;
 pormujeres= mujeres/total*100;
 printf("porcentaje de mujeres : %.2f\n", pormujeres);
 printf("porcentaje de hombres: %.2f\n",porhombres );
 return 0 ;
}