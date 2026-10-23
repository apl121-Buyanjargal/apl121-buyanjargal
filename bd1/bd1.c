
#include <stdio.h>

int main() {
    int day;
    float temp, fahrenheit;

    printf("7 honogiin tsag agaariin tailan\n");

    for (day = 1; day <= 7; day++) {
        printf("Day %d: ", day);
        scanf("%f", &temp);

        fahrenheit = temp * 9 / 5 + 32;
        printf("Fahrenheit: %.1f\n", fahrenheit);

        if (temp >= 0) {
            printf("Dulaahan\n");
            printf("Nimgen tsamts umsuurei\n");
        }
        else if (temp >= -10) {
            printf("Seruuhen\n");
            printf("Dulaan tsamts umsuurei\n");
        }
        else if (temp >= -20) {
            printf("Huiten\n");
            printf("Hurem umsuurei\n");
        }
        else if (temp >= -30) {
            printf("Mash huiten\n");
            printf("Zuzaan kurtik umsuurei\n");
        }
        else {
            printf("Tes huiten\n");
            printf("Gerees garahgui baihig zuvluj baina\n");
        }
    }

    return 0;
}
