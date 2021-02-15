#include <stdio.h>
#include "matrix_dynamic.h"

int main() {
	int ptr_m[] = {1,2,3,4,5,6};
	matrix A = create_intival(3,2,0);
	matrix B = create_intivals(2,3,ptr_m);
	printf("Matrix initial: ");
	matrix_print(B);
	printf("Matrix for transpose: ");
	matrix_print(A);
	printf("Matrix transposed: ");
	matrix_print(transpose(2,3,B,A));

	return 0;
}
