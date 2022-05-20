

#include <stdio.h>

#include <conio.h>

#include <stdlib.h>

main()
{
float n1, n2, resultado;
system("cls");
printf("\n\n Introduce el primer numero: ");
scanf("%f",&n1);
printf("\n Introduce el segundo numero: ");

scanf("%f",&n2);


resultado=n1+n2;

printf("%3.1f +%3.1f = %3.1f\n", n1,n2,resultado);

resultado-n1-n2;

printf("%3.1f-%3.1f=%3.1f\n",n1,n2,resultado); resultado=n1*n2;

printf("%3.1f* %3.1f = %3.1f\n",n1,n2, resultado);

resultado=n1/n2;

printf("%3.1f/%3.1f=%3.1f", n1,n2, resultado);

getch();
}
