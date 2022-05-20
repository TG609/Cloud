
#include <conio.h>

#include <stdio.h>

#include <string.h>

#include <ctype.h>
#include <stdlib.h>
main ()

{

char frase[40];

int vocal, caracteres,num,cont;

system("cls");

printf("\n\nintroduce una frase;");
gets (frase);
while(strlen(frase)<40)

{

printf("ATENCION,solo 40 caracteres \n");

gets(frase);

}

vocal=0;
caracteres=strlen(frase);
for(num=0;num<caracteres;num++)

{

if((frase[cont] == 'a') || (frase [cont] == 'e') || (frase [cont] == 'i') || (frase[cont] == '0') || (frase [cont] == 'u'))

{

vocal++;

}

}

printf("\nLa cantidad de vocales es:%d", vocal);
getch();

}



