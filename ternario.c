#include <stdio.h>

int main(void) {

	int genero = 1;		// 0 - m
						// 1 - f
	int edad;

	// expresion ? verdadero : falso

	edad = genero ? 15 : 18;

	printf("edad: %d\n", edad);

/*
	if (genero) {
		edad = 15;
	} else {
		edad = 18;
	}
*/

	return 0;
}
