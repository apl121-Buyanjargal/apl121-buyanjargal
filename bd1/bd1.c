
#include <stdio.h>

int main() {
    int day;
    float temp;

    printf("7 honogiin tsag agaariin tailan\n");

    for (day = 1; day <= 7; day++) {
        printf("Day %d: ", day);
        scanf("%f", &temp);
    }

    return 0;
}
