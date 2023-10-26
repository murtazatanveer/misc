#include<stdio.h>
#include<math.h>
int main(){

//FINDING NUMBER US ARMSTRING OR NOT




    int number, copy, count = 0, digit, sum = 0;

    printf("Enter Number: ");
    scanf("%d", &number);

    copy = number; // Make a copy of the original number

    // Calculate the number of digits
    while (copy > 0) {
        copy = copy / 10;
        count++;
    }

    copy = number; // Reset copy to the original number

    // Calculate the sum of digits raised to the power of the number of digits
    while (copy > 0) {
        digit = copy % 10;
        sum = sum + pow(digit, count);
        copy = copy / 10;
    }

    if (sum == number) {
        printf("%d is an Armstrong number\n", number);
    } else {
        printf("%d is not an Armstrong number\n", number);
    }

    return 0;
}





