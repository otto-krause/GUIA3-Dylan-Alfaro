#include <stdio.h>
int main() {
 float peso, altura, imc;
 printf("Ingrese peso en kg: ");
 scanf("%f", &peso);
 printf("Ingrese altura: ");
 scanf("%f", &altura);
 imc = peso / (altura * altura);
 printf("IMC: %.2f\n", imc);
 if (imc < 20) {
 printf("Bajo de peso\n");
 } else if (imc >= 20 && imc <= 25) {
 printf("Peso ideal\n");
 } else {
 printf("Excedido de peso\n");
 }
 return 0;
}