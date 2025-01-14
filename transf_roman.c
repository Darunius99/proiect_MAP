#include <stdio.h>

void convertToRoman(int number) {
    struct RomanNumeral {
        int value;
        char *symbol;
    };

    struct RomanNumeral roman[] = {
        {1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"},
        {100, "C"}, {90, "XC"}, {50, "L"}, {40, "XL"},
        {10, "X"}, {9, "IX"}, {5, "V"}, {4, "IV"},
        {1, "I"}
    };

    int i = 0;
    while (number > 0) {
        while (number >= roman[i].value) {
            printf("%s", roman[i].symbol);
            number -= roman[i].value;
        }
        i++;
    }
}

int main() {
    int number;

    printf("Enter a number (1-3999): ");
    scanf("%d", &number);

    if (number <= 0 || number > 3999) {
        printf("Number must be between 1 and 3999.\n");
        return 1;
    }

    printf("Roman numeral: ");
    convertToRoman(number);
    printf("\n");

    return 0;
}
