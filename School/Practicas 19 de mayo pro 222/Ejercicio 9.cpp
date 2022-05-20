

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

main ()
{
	


int cuantos, numero, positivos,negativos, cero,cont,ntotal;



positivos=0;

negativos=0;

cero=0;

system("cls");

printf("\n\nCuantos numeros vas a INTRODUCIR? ");
scanf("%d",&cuantos);
printf("Empieza a introducir los numeros?:\n");
for (cont=0;cont<cuantos;cont++)

{
scanf("%d",&numero);

if (numero>0)

{

positivos++;

} if (numero<0)

{

negativos++;

}

if (numero ==0)

{

cero++;

}
}

printf("Hay %d numeros positivos\n", positivos);
printf("Hay %d numeros negativos\n", negativos);
printf("Hay %d ceros", cero);
getch();
}
