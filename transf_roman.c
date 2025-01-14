#include <stdio.h>

void convertToRoman(int num) {
    // Array de valori și simboluri romane corespunzătoare
    char *romans[] = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX", 
                      "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC", "C", 
                      "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM", "M"};
    int values[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 
                    10, 20, 30, 40, 50, 60, 70, 80, 90, 
                    100, 200, 300, 400, 500, 600, 700, 800, 900, 1000};
    
    printf("Numar roman: %s\n", romans[num]);
}

int main() {
    int num;
    int result;

    // Așteaptă introducerea unui număr
    printf("Introduceti un numar intre 1 si 3999: ");
    result = scanf("%d", &num);

    // Verifică dacă inputul este valid
    if (result != 1) {
        printf("Nu ați introdus un număr valid.\n");
        return 1; // Iese din program în caz de eroare
    }

    // Verifică dacă numărul este în intervalul permis
    if (num < 1 || num > 3999) {
        printf("Numarul trebuie sa fie intre 1 si 3999.\n");
    } else {
        convertToRoman(num);
    }

    return 0;
}
