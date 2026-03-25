#include <stdio.h>
int main(){
 float res1, res2, res3, res4, res5, total ;
 printf("ingresa la resistencia: ");
 scanf(" %f %f %f %f %f ", &res1, &res2, &res3, &res4 ,
&res5 );
 total= res1+res2+res3 +res4 +res5 ;
 printf("el total es : %.2f\n ", total );
 printf( "resistencias: \n ");
 printf("%.2f\n", res1);
 printf("%.2f\n", res2);
 printf("%.2f\n", res3);
 printf("%.2f\n", res4);
 printf("%.2f\n", res5);
 return 0;
}