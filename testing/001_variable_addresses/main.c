/*
 * main.c
 *
 *  Created on: Jan 2, 2026
 *      Author: jobot
 */
#include <stdio.h>

int main(void) {
	char v_char = 0;
	short v_short = 0;
	int v_int = 0;
	long v_long = 0;

	printf("Size of char int: %lu\n", sizeof(char));
	printf("Size of short int: %lu\n", sizeof(short));
	printf("Size of int: %lu\n", sizeof(int));
	printf("Size of long int: %lu\n", sizeof(long));

	printf("Address of v_char: %p\n", &v_char);
	printf("Address of v_short: %p\n", &v_short);
	printf("Address of v_int: %p\n", &v_int);
	printf("Address of v_long: %p\n", &v_long);

	return 0;
}
