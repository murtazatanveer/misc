#include<stdio.h>
#include<math.h>
int main(){

//FINDING NUMBER US ARMSTRING OR NOT


    int number, copy, count = 0, digit, sum = 0;

    printf("Enter Number: ");
    scanf("%d", &number);

    copy = number; 

    while (copy > 0) {
        copy = copy / 10;
        count++;
    }

    copy = number;

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





