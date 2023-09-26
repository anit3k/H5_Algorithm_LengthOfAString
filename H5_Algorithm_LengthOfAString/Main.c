#include <stdio.h>

int string_length(char* str) {
	int counter = 0; // used to increment each char

	while (*str != '\0') {
		counter++; // increment counter
		str++; // increment pointer address
	}

	return counter;
}

int main() {
	char hero[] = "Luke Skywalker";
	int length = string_length(hero);

	printf("The length of the string is: %d\n", length);
	return 0;
}