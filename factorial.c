#include <stdio.h>

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

int main() {
	int factorialOf = 5;
	int good = goodFactorial(factorialOf);
	int bad = badFactorial(factorialOf);
	printf("A proper factorial of %i yields %i.\n", factorialOf, good);
	printf("An improper factorial of %i yields %i.\n", factorialOf, bad);
}
