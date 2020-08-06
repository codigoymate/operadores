#include <stdio.h>

int main(void) {

	unsigned char r;

	// Operadores de bit a bit (bitwise)
	//								Asignación				A  B   S
	// Prod. Lógico	  AND	&			&=					0  0   0
	// Suma Lógica    OR	|			|=					0  1   1		XOR
	// Suma exclusiva XOR	^			^=					1  0   1
	// Complemento	  NOT	~								1  1   0
	// Desp. Izquierda		<<			<<=
	// Desp. Derecha		>>			>>=

	
	r = 138 & 50;
	printf("138 & 50 = %d\n", r);
	printf("10001010 & 00110010 = 00000010\n\n");

	r = 200 | 100;
	printf("200 | 100 = %d\n", r);
	printf("11001000 | 01100100 = 11101100\n\n");

	r = 200 ^ 100;
	printf("200 ^ 100 = %d\n", r);
	printf("11001000 ^ 01100100 = 10101100\n\n");

	r = ~20;
	printf("~20 = %d\n", r);
	printf("~00010100 = 11101011\n\n");
	

	/*
	r = 85 << 1;
	printf("85 << 1 = %d\n", r);
	printf("01010101 << 1 = 10101010\n\n");

	r = 36 >> 2;
	printf("36 >> 2 = %d\n", r);
	printf("00100100 >> 2 = 00001001\n\n");	
	*/

	/*
	r = 255;

	r &= 40;
	printf("(255)  r &= 40  (%d)\n", r);
	printf("(11111111)      (00101000)\n\n");

	r >>= 3;
	printf("(40)  r >>= 3  (%d)\n", r);
	printf("(00101000)      (00000101)\n\n");
	*/

	return 0;
}