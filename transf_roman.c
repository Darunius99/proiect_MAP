#include <stdio.h>
#include <string.h>

int valoareSimbol(char);

int main() {
	int numar;

	printf("Introduceti un numar natural intre 1 si 3999: ");
	scanf("%d", &numar);

	if (numar < 1 || numar > 3999) {
		printf("Numarul trebuie sa fie intre 1 si 3999.\n");
		return 1;
	}
	printf("Numarul roman este: ");
	while (numar >= 1000) {
		printf("M");
		numar -= 1000;
	}
	while (numar >= 900) {
		printf("CM");
		numar -= 900;
	}
	while (numar >= 500) {
		printf("D");
		numar -= 500;
	}
	while (numar >= 400) {
		printf("CD");
		numar -= 400;
	}
	while (numar >= 100) {
		printf("C");
		numar -= 100;
	}
	while (numar >= 90) {
		printf("XC");
		numar -= 90;
	}
	while (numar >= 50) {
		printf("L");
		numar -= 50;
	}
	while (numar >= 40) {
		printf("XL");
		numar -= 40;
	}
	while (numar >= 10) {
		printf("X");
		numar -= 10;
	}
	while (numar >= 9) {
		printf("IX");
		numar -= 9;
	}
	while (numar >= 5) {
		printf("V");
		numar -= 5;
	}
	while (numar >= 4) {
		printf("IV");
		numar -= 4;
	}
	while (numar >= 1) {
		printf("I");
		numar -= 1;
	}

	printf("\n");

	return 0;
}
