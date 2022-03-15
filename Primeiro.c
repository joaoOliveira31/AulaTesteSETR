/** \Primeiro.c
 *  \Funções para o exemplo do git
 * 
 * Descrição detalhada
 * 
 * \João Oliveira
 * \15/03/22
 * \No bugs
*/
#include <stdio.h>
#include <stdlib.h>

static int vect[100];

/**
 * @Função vInit()
 *
 * Esta função coloca numeros naturais no vetor vect.
 * 
 */

void vInit(int *vect)
{
	for(int i=0;i<(sizeof(vect)/sizeof(vect[0]));i++)
		vect[i] = i+1;
}

/**
 * @Função vAvg()
 *
 * Esta função faz a média do vetor e faz return.
 * 
 */

int vAvg(int *vect)
{
	int l = 0;
	for(int i=0;i<(sizeof(vect)/sizeof(vect[0]));i++)
		l=l+vect[i];
	int ll = l/(sizeof(vect)/sizeof(vect[0]));
	return ll;
}

/**
 * @Função vSum()
 *
 * Esta função faz a soma do vetor e faz return
 * 
 */

int vSum(int *vect)
{
	int l = 0;
	for(int i=0;i<(sizeof(vect)/sizeof(vect[0]));i++)
		l=l+vect[i];
	return l;
}


/**
 * @brief Brief decription of main().
 *
 * Here it goes the long description of main()
 * main has no input arguments.
 * It declares two variables and calls function1() using them 
 * as argument. 
 * It then prints the result and returns.
 * 
 * @return main() always returns 0
 */


int main(void)
{
	vInit(vect);
	int Avg = vAvg(vect);
	printf("Média = %d",Avg);

	int Sum = vSum(vect);
	printf("Soma = %d",Sum);

	return 0;
}