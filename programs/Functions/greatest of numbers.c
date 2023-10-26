#include<stdio.h>
int great(int n1 , int  n2 , int n3);

int main(){

int x,y,z;
printf("\n\nLARGEST : %d",great(x,y,z));

}

int great(int n1 , int  n2 , int n3){

printf("\nEnter 1st Number : ");
scanf("%d",&n1);

printf("\n\nEnter 2nd Number : ");
scanf("%d",&n2);

printf("\n\nEnter 3rd Number : ");
scanf("%d",&n3);

if (n1>n2 && n1>n3)
{
    return n1;

}

else if (n2>n1 && n2>n3)
{
    return n2;

}


    return n3;

}