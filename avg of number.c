#include <stdio.h>

int main() {
printf("sumit shakya IT-C 21003201302173\n"); 
    int n, i;
    float num[100], sum = 0.0, average;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    while (n > 100 || n <= 0) {
        printf("Error! Number should be between 1 and 100.\n");
        printf("Enter the number again: ");
        scanf("%d", &n);
    }

    for(i = 0; i < n; ++i) {
        printf("Enter number%d: ", i+1);
        scanf("%f", &num[i]);
        sum += num[i];
    }

    average = sum / n;
    printf("Average = %.2f", average);

    return 0;
}