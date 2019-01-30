#include <stdio.h>

int main() {
	int factorialOf = 5;
	printf("A proper factorial of %i yields %i.", factorialOf, goodFactorial(factorialOf));
	printf("An improper factorial of %i yields %i.", factorialOf, badFactorial(factorialOf));
}

int badFactorial(int x) {
	int i;
	for (i = 1; i < x; i++) {
		x *= i;
	}
	return x;
}

int goodFactorial(int x) {
	int fact = 1;
	int i;
	for (i = 1; i <= x; i++) {
		fact *= i;
	}
	return fact;
}