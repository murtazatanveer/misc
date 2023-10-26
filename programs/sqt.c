#include<stdio.h>
#include<math.h>
int main(){

float num,prev,current,generated__err;
const float err=0.00001;

printf("enter number : ");
scanf("%f",&num);
printf("\nenter initial guess : ");
scanf("%f",&prev);

current=prev;

while(generated__err>=err){

current=0.5*(prev+(num/prev));

generated__err=fabs(current-prev);

prev=current;


}

printf("\n\nSquare root is : %.3f",prev);

}

