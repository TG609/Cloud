/* PRactica 5 */
/* Gabriel Pro 222 */
#include <stdio.h>
/* Para utilizar: printf(), getchar() */
main ()
{
	int numero1, numero2;
	int suma,resta;
	printf("\n Escriba el numero 1:");
	scanf("%d", numero1);
	printf("\n Escriba el numero 2:");
	scanf("%d", numero2);
	resta = numero1-numero2;
	suma = numero1+numero2;
	printf("\n Resta: %d", resta);
	printf("\n Suma: %d", suma);
	printf("\n Oprima la tecla return para terminar el programa");
	getchar(), getchar();
	
}
