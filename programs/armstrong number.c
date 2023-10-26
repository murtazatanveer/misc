#include<stdio.h>
#include<math.h>
int main(){

//FINDING NUMBER US ARMSTRING OR NOT

int number;

int copy=number;

int count=0;

int copy_2=number;

int digit,squ,sum=0;

printf("\nEnter Number : ");

scanf("%d",&number);



while(number>0){

    number =number/10;

    count++;

}

while(copy>0){

digit=copy%10;

squ = pow(digit,count);

sum= sum + squ;

}

if(sum==copy_2){

printf("\n\n%d is armstrong number",copy_2);

}

else{

    printf("\n\n%d is not a armstrong number ",copy_2);


}


}