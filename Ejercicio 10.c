#include <stdio.h>
int main()
{
 float sueldobasico, sueldofinal , hijos , adicionalhijos,
adicionalcategoria;
 int categoria ;
 printf("ingrese sueldo basico: ");
 scanf("%f", &sueldobasico );
 printf("ingrese su categoria: ");
 scanf("%d", &categoria);
 printf("ingrese cantidad de hijos : ");
 scanf("%f", &hijos );
 adicionalhijos=hijos*300;
 if (hijos>4)
 {
 adicionalhijos=hijos*200;
 }
 switch (categoria)
 {
 case '1':
 adicionalcategoria=sueldobasico*0.18;
 break;
 case'2':
 adicionalcategoria=sueldobasico*0.20;
 break;
 default:
 printf("NADAAAA");
 break;
 }
 sueldofinal=sueldobasico+adicionalhijos+adicionalcategoria;
 printf("sueldo final : %.2f\n" , sueldofinal);
 return 0 ;
}