#include<stdio.h>
//reverse of a number
int reverse();
int main(){

int number;

printf("\nEnter number you want to find palindrome : ");

scanf("%d",&number);

int z=reverse(number);

printf("\n\nreverse of %d is : %d",number,z);


}


int reverse(int number){

int rev=0;
int digit;
while(number>0){

digit = number%10;
rev = (rev*10) + digit;
number=number/10;

}

return rev;

}