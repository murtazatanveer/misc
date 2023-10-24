#include<stdio.h>


int main(){





}


int is_primenumber(){

int i;
int number;
int counter;

printf("\nEnter Number you want to find if it is prime or not : ");


for(i=1;i<=number;i++){

if(number%i==0){

counter++;

}

}

if(counter==2){

    return 1;
}

else{
    return 0;
}
}

