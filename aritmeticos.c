#include <stdio.h>

int main(void) {

	char r = 0;	// -128 a 127
	char p;

	// Operadores Aritméticos
	//						Asignacion		Inc. 1
	// Suma			+			+=			  ++
	// Resta		-			-=			  --
	// Producto		*			*=
	// División		/			/=
	// Módulo		%			%=

	
	/*
	r = 20 + 30;
	printf("20 + 30 = %d\n", r);

	r = 30 - 20 - 10;
	printf("30 - 20 - 10 = %d\n", r);

	r = 110 + 50;
	printf("110 + 50 = %d\n", r);
	*/

	/*
	r = 4 * 20;
	printf("4 * 20 = %d\n", r);

	r = 32 / 2;
	printf("32 / 2 = %d\n", r);

	r = 100 / 6;
	printf("100 / 6 = %d\n", r);

	r = 100 % 6;
	printf("100 %% 6 = %d\n", r);
	*/

	/*
	r = -5;
	r += 10;
	printf("(-5)\tr += 10\t(%d)\n", r);

	r -= 3;
	printf("(5)\tr -= 3\t(%d)\n", r);

	r *= 8;
	printf("(2)\tr *= 8\t(%d)\n", r);	

	r /= 4;
	printf("(16)\tr /= 4\t(%d)\n", r);
	*/

	
	r = 20;
	p = r ++;

	printf("r ++;\np = %d\nr = %d\n\n", p, r);

	r = 20;
	p = ++ r;

	printf("++ r;\np = %d\nr = %d\n\n", p, r);

	

	return 0;
}
