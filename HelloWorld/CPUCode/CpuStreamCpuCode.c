#include <stdio.h>

#include "Maxfiles.h"
#include "MaxSLiCInterface.h"

#define SIZE 16

int main(void)
{
	char x[SIZE] = "Hello World";
	char z[SIZE];

	printf("Running on DFE.\n");
	CpuStream(SIZE, x, z);

	printf("Result: %s\n",z);
	printf("Done.\n");
	return 0;
}

