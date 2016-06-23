#include "Maxfiles.h"		// Includes .max files
#include "MaxSLiCInterface.h"	// Simple Live CPU interface

float dataIn[8] = { 1, 3, 5, 13, 0, 2, 4, 6 };
float dataOut[8];

int main()
{

	for (int i = 0; i < 8; i++){
		printf("dataIn[%d] = %f\n", i, dataIn[i]);
	}

	printf("Running DFE\n");
	CpuStream(8, 8, dataIn, dataOut);

	for (int i = 0; i < 8; i++){
		printf("dataOut[%d] = %f\n", i, dataOut[i]);
	}

	return 0;
}
