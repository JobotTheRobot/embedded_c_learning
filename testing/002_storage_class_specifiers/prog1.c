

void print_value(int value); // can say extern, but extern is implied for functions

/* can not externally reference this because it is defined as static in main.c
void change_system_clock(int system_clock);
*/

void prog1_print_value(void) {
	print_value(0);
}

/*
void prog1_update_system_clock(void) {
	change_system_clock(0);
}
*/
