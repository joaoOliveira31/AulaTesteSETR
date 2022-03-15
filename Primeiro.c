#include <stdio.h>

static int vect[100];

void vInit(int *vect)
{
	for(int i=0;i<(sizeof(vect)/sizeof(vect[0]));i++)
		vect[i] = i+1;
	
}



int main(void)
{
	vInit(vect);

	return 0;
}