
#include <stdio.h>

void ShowTitle() {
    printf("7 honogiin tsag agaariin tailan\n");
}

int main() {
    int day, coldestDay;
    float temp, fahrenheit, minTemp;

    ShowTitle();

    printf("%-5s | %8s | %10s | %-12s | %-25s\n",
           "Day", "Celsius", "Fahrenheit", "Category", "Advice");

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
            printf("%-5d | %8.1f | %10.1f | %-12s | %-25s\n",
                   day, temp, fahrenheit, "Dulaahan", "Nimgen tsamts");
        }
        else if (temp >= -10 && temp < 0) {
            printf("%-5d | %8.1f | %10.1f | %-12s | %-25s\n",
                   day, temp, fahrenheit, "Seruuhen", "Dulaan tsamts");
        }
        else if (temp >= -20) {
            printf("%-5d | %8.1f | %10.1f | %-12s | %-25s\n",
                   day, temp, fahrenheit, "Huiten", "Hurem");
        }
        else if (temp >= -30) {
            printf("%-5d | %8.1f | %10.1f | %-12s | %-25s\n",
                   day, temp, fahrenheit, "Mash huiten", "Zuzaan kurtik");
        }
        else {
            printf("%-5d | %8.1f | %10.1f | %-12s | %-25s\n",
                   day, temp, fahrenheit, "Tes huiten", "Gerees garahgui baih");
        }
    }

    printf("\nHamgiin huiten temperature: %.1f C\n", minTemp);
    printf("Hamgiin huiten udur: %d\n", coldestDay);

    return 0;
}
