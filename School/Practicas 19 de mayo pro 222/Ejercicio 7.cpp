#include <stdio.h>

#include <conio.h>

#include <stdlib.h>

 main ()

{
int num;
system("cls");
printf("\n\nIntroduce un numero: ");
scanf("%d",&num);

if ((num>=25)&&(num<=50))

{

printf("El numero introducido esta comprendido entre 25 y 50");

}

else

{

printf("El numero no esta entre los valores 25 y 50"); }

getch();


}
