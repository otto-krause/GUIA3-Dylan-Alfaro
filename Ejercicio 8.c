#include <stdio.h>
int main (){
 float edad , horas , preciohora , subtotal , descuento ;
 float impuesto ,neto , total ;
 printf("ingrese su edad : \n ");
 scanf("%f", &edad);
 printf("ingresa la cantidad de horas :\n ");
 scanf("%f", &horas );
 printf("precio por hora : \n");
 scanf("%f", &preciohora);
 if( horas<20 )
 {
 printf("el minimo es 20 horas ");
 }
 subtotal=horas*preciohora;
 if(edad>70)
 {
 descuento=subtotal*0.50;
 } else if(edad>60){
 descuento=subtotal*0.30;
 } else if (edad>50){
 descuento=subtotal*0.20;
 }
 neto=subtotal-descuento ;
 impuesto=neto*0.33;
 total=neto+impuesto;
 printf("importe con impuesto : %.2f\n " , total);
 printf("importe sin impúesto: %.2f\n ", neto );
}