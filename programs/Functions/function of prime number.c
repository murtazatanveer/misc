#include<stdio.h>



int is_primenumber(){

printf("\nreturns 1 for prime number and returns 0 for not a prime number\n");

int i;
int number;
int counter_of_numbers;

printf("\nEnter Number you want to find if it is prime or not : ");
scanf("%d",&number);

for(i=1;i<=number;i++){

if(number%i==0){

counter_of_numbers++;

}

}
if(counter_of_numbers==2){
    return 1;
}
return 0;

}


int main(){

    int z=is_primenumber();

if(z=1){

printf("%d",z);
    
    
}

else{

    printf("%d",z);
}







}

