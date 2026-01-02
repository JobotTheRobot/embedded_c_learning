/*
 * example usage of storage class specifiers (static, ...).
 *
 * 	-	static makes the variable () persist like a global, but keeps it confined to the current scope ().
 * 		- 	for a variable inside of a function, it makes the local variable keep its value between calls (global lifetime, local visibility).
 *		- 	for a global variable (or function), it makes the name private to the current program, so that other programs
 *			can't link to it with extern.
 *
 *
 *
 */

#include <stdio.h>

void increment_static_var(void);


void prog1_print_value(void);
static void change_system_clock(int system_clock);

int main() {
	increment_static_var();
	increment_static_var();
	increment_static_var();

	printf("\n");

	prog1_print_value();

	printf("\n");

	change_system_clock(0);

	return 0;
}

// increments a static integer
void increment_static_var(void) {
	static int var = 0; // var will persist like a global, but can only be used in the increment_static_var function.
	printf("static var: %d\n", var);
	var += 1;
}

// will be used by prog1 to show functions being used from other programs.
void print_value(int value) {
	printf("value: %d\n", value);
}

// example of a static (private) function, one we wouldn't want called from other programs
static void change_system_clock(int system_clock) {
	printf("system clock changed to: %d\n", system_clock);
}
