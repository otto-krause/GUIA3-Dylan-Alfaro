#include <stdio.h>
int main() {
 int num1, num2, per, area;
 printf("Ingresar lados a y b: ");
 scanf("%d %d", &num1, &num2);
 per = 2 * num1 + 2 * num2;
 area = num1 * num2;
 printf("Perimetro: %d\n", per);
 printf("Area: %d\n", area);
 return 0;
}