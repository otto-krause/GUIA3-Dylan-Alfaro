#include <stdio.h>
int main() {
 float a, b, c;
 printf("Ingrese tres valores:\n");
 printf("Ingrese primer valor: ");
 scanf("%f", &a);
 printf("Ingrese segundo valor: ");
 scanf("%f", &b);
 printf("Ingrese tercer valor: ");
 scanf("%f", &c);
 if (a == b && b == c) {
 printf("Son todos iguales\n");
 } else if (a != b && a != c && b != c) {
 printf("Son todos distintos\n");
 } else {
 printf("Hay dos iguales y un distinguido\n");
 }
 return 0;
}