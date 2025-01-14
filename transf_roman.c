#include <stdio.h>

void transformaInRoman(int numar) {
    struct NumarRoman {
        int valoare;
        char *simbol;
    };

    struct NumarRoman numereRomane[] = {
        {1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"},
        {100, "C"}, {90, "XC"}, {50, "L"}, {40, "XL"},
        {10, "X"}, {9, "IX"}, {5, "V"}, {4, "IV"},
        {1, "I"}
    };

    int i = 0;
    while (numar > 0) {
        while (numar >= numereRomane[i].valoare) {
            printf("%s", numereRomane[i].simbol);
            numar -= numereRomane[i].valoare;
        }
        i++;
    }
}

int main() {
    int numar;

    printf("Introduceți un număr între 1 și 3999: ");
    scanf("%d", &numar);

    if (numar <= 0 || numar > 3999) {
        printf("Numărul trebuie să fie între 1 și 3999.\n");
        return 1;
    }

    printf("Numărul în sistem roman: ");
    transformaInRoman(numar);
    printf("\n");

    return 0;
}
