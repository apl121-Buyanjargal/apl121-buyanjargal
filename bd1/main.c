
#include <stdio.h>

void ShowTitle() {
    printf("7 honogiin tsag agaariin tailan\n");
}

int main() {
    int day, coldestDay;
    float temp, fahrenheit, minTemp;

    ShowTitle();

    printf("Day | Celsius | Fahrenheit | Category | Advice\n");

    for (day = 1; day <= 7; day++) {

        do {
            printf("Day %d temperature: ", day);
            scanf("%f", &temp);

            if (temp < -60 || temp > 50) {
                printf("Buruu temperature. Dahin oruulna uu.\n");
            }

        } while (temp < -60 || temp > 50);

        if (day == 1) {
            minTemp = temp;
            coldestDay = day;
        }
        else if (temp < minTemp) {
            minTemp = temp;
            coldestDay = day;
        }

        fahrenheit = temp * 9 / 5 + 32;

        if (temp >= 0) {
            printf("%d | %.1f | %.1f | Dulaahan | Nimgen tsamts\n",
                   day, temp, fahrenheit);
        }
        else if (temp >= -10) {
            printf("%d | %.1f | %.1f | Seruuhen | Dulaan tsamts\n",
                   day, temp, fahrenheit);
        }
        else if (temp >= -20) {
            printf("%d | %.1f | %.1f | Huiten | Hurem\n",
                   day, temp, fahrenheit);
        }
        else if (temp >= -30) {
            printf("%d | %.1f | %.1f | Mash huiten | Zuzaan kurtik\n",
                   day, temp, fahrenheit);
        }
        else {
            printf("%d | %.1f | %.1f | Tes huiten | Gerees garahgui baih\n",
                   day, temp, fahrenheit);
        }
    }

    printf("\nHamgiin huiten temperature: %.1f C\n", minTemp);
    printf("Hamgiin huiten udur: %d\n", coldestDay);

    return 0;
}
