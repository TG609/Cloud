

#include <stdio.h>

#include <conio.h>

#include <string.h>

#include <stdlib.h>

 main(void)

{

int nace, actual;

char nombre[35];
system("cls");

printf("\n\n Introduce tu nombre: ");

scanf("%s",&nombre);

printf(" Introduce tu año de nacimiento: ");

scanf("%d",&nace);

printf(" Introduce el año actual: "); scanf("%d",&actual);

printf("\n %s, Tienes %d años", strupr(nombre),(actual-nace)); getch();


}
