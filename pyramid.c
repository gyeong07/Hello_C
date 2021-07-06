#include <stdio.h>
/*
    *
   ***
  *****
 *******
*********
*/
int main(void) {
	
	int floor;

	printf("¸îÃþ? : ");
	scanf_s("%d", &floor);

	for (int i = 0; i < floor; i++) {

		for (int k = 1; k < floor - i; k++) {
			printf(" ");
		}

		for (int j = 0; j < j * 2 + 1; j++) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}