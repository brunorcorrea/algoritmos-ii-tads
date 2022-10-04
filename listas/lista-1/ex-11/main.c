#include <stdio.h>
#include <time.h>
#include <stdlib.h>

float average(float* grades, char type) {
    float average = 0;

    if(type == 'B') {
        for(int i = 0; i < 4; i++) {
            average += grades[i];
        }

        average /= 4;
    }
    else if(type == 'A') {
        average = (grades[0] * 5 + grades[1] * 3 + grades[2] * 2 + grades[3] * 1) / 11;
    }

    return average;
}

int main() {
    float grades[4];
    char type;

    for(int i = 0; i < 4; i++) {
        printf("Enter the %d grade: ", i + 1);
        scanf("%f", &grades[i]);
    }

    printf("Enter the type of average (A or B): ");
    scanf(" %c", &type);

    printf("The average is: %.2f\n", average(grades, type));

    return 0;
}