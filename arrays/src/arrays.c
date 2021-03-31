/*
 ============================================================================
 Name        : arrays.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "utn_Array.h"

#define CANTIDAD_EDADES 5
int main(void) {
	setbuf(stdout,NULL);

	int arrayEdades[5];
	int maximo;
	//int minimo;
	//int promedio;

	for(int i=0;i<CANTIDAD_EDADES;i++)
	{
		printf("Ingrese edad");
		fflush(stdin);
		scanf("%d",arrayEdades);
	}
	utn_getMaximoArray(arrayEdades,CANTIDAD_EDADES,&maximo);

	printf("El numero maximo es :%d",maximo);
	printf("%d"&maximo);

	return EXIT_SUCCESS;
}
