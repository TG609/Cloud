
#include <conio.h>

#include <stdio.h>
#include <stdlib.h>

int main()
{
	

char producto[30];

float valor=0,porcen=0;

printf("\n\nIntroduce el nombre del producto: ");

gets(producto);

printf("\n");

printf("Introduce una valor numerico ");

scanf("%f", &valor);

printf("Introduce un tanto por ciento ");

scanf("%f",&porcen);

printf("\n");

printf("%s, tiene un descuento de %.Of ", producto, ((valor* porcen)/100));
printf("\n");

getch();

}
