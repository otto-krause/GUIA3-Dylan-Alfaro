#include <stdio.h>
int main(){
 int num1 , num2 ;
 printf("ingresar los numeros: " );
 scanf("%d " , &num1 );
 printf("ingresar los numeros: " );
 scanf("%d " , &num2 );
 if (num1<num2)
 {
 printf("el numero mayor es : %d" , num2 );
 }
 else{ if ( num1=num2 ){
 printf("los numeros son iguales");
 }else {
 printf("el numero : %d\n",num1);
 }
 }
 return 0 ;
}