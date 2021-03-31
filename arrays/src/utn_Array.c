/*
 * array.c
 *
 *  Created on: Mar 30, 2021
 *      Author: Stefano
 */
#include <stdio.h>
#include <stdlib.h>
#include "utn_Array.h"

int utn_getMaximoArray(int* array,int limite,int* resultado)
{
	int retorno =-1;
	int auxMax;

	if(array != NULL && resultado != NULL && limite > 0)
	{
		auxMax=array[0];
		retorno=-2;
		for(int i=0;i<limite;i++)
		{
			if(auxMax < array[i])
			{
				auxMax=array[i];
				printf("%d",resultado);
			}
		}
		*resultado=auxMax;
	}
	return retorno;
}
