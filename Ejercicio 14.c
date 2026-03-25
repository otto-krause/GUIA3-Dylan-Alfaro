#include <stdio.h>
int main() {
 float horas, minutos, segundos, unidadfinal, totalsegundos,
resultado;
 printf("Ingrese las horas: ");
 scanf("%f", &horas);
 printf("Ingrese los minutos: ");
 scanf("%f", &minutos);
 printf("Ingrese los segundos: ");
 scanf("%f", &segundos);
 printf("Ingrese unidad final (1=segundos, 2=minutos,
3=horas): ");
 scanf("%f", &unidadfinal);
 totalsegundos = horas * 3600 + minutos * 60 + segundos;
 if (unidadfinal == 1) {
 resultado = totalsegundos;
 printf("El tiempo total en segundos es: %.2f\n",
resultado);
 } else if (unidadfinal == 2) {
 resultado = totalsegundos / 60.0;
 printf("El tiempo total en minutos es: %.2f\n",
resultado);
 } else if (unidadfinal == 3) {
 resultado = totalsegundos / 3600.0;
 printf("El tiempo total en horas es: %.2f\n",
resultado);
 } else {
 printf("Unidad final invalida\n");
 }
 return 0;
}