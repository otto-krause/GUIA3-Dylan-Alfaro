#include <stdio.h>
int main() {
 float num1, num2, num3;
 printf("Ingrese primer numero: ");
 scanf("%f", &num1);
 printf("Ingrese segundo numero: ");
 scanf("%f", &num2);
 printf("Ingrese tercer numero: ");
 scanf("%f", &num3);
 if (num1 < num2 && num2 < num3) {
 printf("Los numeros fueron ingresados en forma
ascendente\n");
 } else {
 printf("Los numeros no fueron ingresados en forma
ascendente\n");
 }
 return 0;
}