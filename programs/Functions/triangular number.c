#include<stdio.h>
int sum_of_numbers();
int main(){

int storing_sum=sum_of_numbers();

printf("\n\nTriangular Sum : %d",storing_sum);



}

int sum_of_numbers(){

int i;
int sum=0;
int number;
printf("\nEnter Number : ");
scanf("%d",&number);

for(i=1;i<=number;i++){

sum = sum+i;

}

return sum;
    
}