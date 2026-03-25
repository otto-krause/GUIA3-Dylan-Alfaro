#include <stdio.h>
int main() {
 float sup1, sup2, sup3, pob1, pob2, pob3;
 float dens1, dens2, dens3;
 printf("Pais 1 ingrese superficie: ");
 scanf("%f", &sup1);
 printf("Pais 1 ingrese poblacion: ");
 scanf("%f", &pob1);
 printf("Pais 2 ingrese superficie: ");
 scanf("%f", &sup2);
 printf("Pais 2 ingrese poblacion: ");
 scanf("%f", &pob2);
 printf("Pais 3 ingrese superficie: ");
 scanf("%f", &sup3);
 printf("Pais 3 ingrese poblacion: ");
 scanf("%f", &pob3);
 dens1 = pob1 / sup1;
 dens2 = pob2 / sup2;
 dens3 = pob3 / sup3;
 if (dens1 > dens2 && dens1 > dens3) {
 printf("El pais mas densamente poblado es el pais 1\n");
 } else if (dens2 > dens1 && dens2 > dens3) {
 printf("El pais mas densamente poblado es el pais 2\n");
 } else {
 printf("El pais mas densamente poblado es el pais 3\n");
 }
 return 0;
}