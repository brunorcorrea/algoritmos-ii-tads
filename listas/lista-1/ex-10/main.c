#include <stdio.h>

float greaterSalary(float salary1, float salary2) {
    return salary1 > salary2 ? salary1 : salary2;
}

int main() {
    float salary1, salary2;

    printf("Enter the first salary: ");
    scanf("%f", &salary1);
    printf("Enter the second salary: ");
    scanf("%f", &salary2);

    printf("The greater salary is: %.2f\n", greaterSalary(salary1, salary2));

    return 0;
}