#include <stdio.h>

int main() {
    int num, sum = 0, temp;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    // calculate sum of digits
    while (temp > 0) {
        sum += temp % 10;   // get last digit
        temp /= 10;         // remove last digit
    }

    // check Harshad condition
    if (num % sum == 0) {
        printf("%d is a Harshad number.\n", num);
    } else {
        printf("%d is not a Harshad number.\n", num);
    }

    return 0;
}
