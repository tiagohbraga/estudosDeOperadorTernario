/*
Operador ? ? permite escrita de If simples em um
�nico comando

estudando operadores em C e como simplificar as condi��e de "if"
*/
#include <stdio.h>
#include <locale.h>
#include <conio.h>

main(){
	
	setlocale(LC_ALL, "portuguese");
	int x, y, resultado;
	
	printf("Informe o valor de X: ");
	scanf("%d",&x);
	printf("Informe o valor de Y: ");
	scanf("%d",&y);
	
	resultado = (x>y) ? x : x+y;
	printf("O resultado � %d! \n", resultado);
	
	return 0;
}
