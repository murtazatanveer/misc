#include<stdio.h>


int sca(){

printf("Addition      (1)\n");
printf("Subtraction   (2)\n");
printf("Multiplication(3)\n");
printf("Division      (4)\n");

int choice;
printf("\nEnter Choice : ");

if (choice==1){

int a;

printf("\nEnter 1st Number : ");
scanf("%d",&a);

int b;

printf("\nEnter 2nd Number : ");
scanf("%d",&b);

int c=a+b;

return c;

}


else if (choice==2){

int d;

printf("\nEnter 1st Number : ");
scanf("%d",&d);

int e;

printf("\nEnter 2nd Number : ");
scanf("%d",&e);

int f=d-e;

return f;

}



else if (choice==3){

int g;

printf("\nEnter 1st Number : ");
scanf("%d",&g);

int h;

printf("\nEnter 2nd Number : ");
scanf("%d",&h);

int i=g-h;

return i;

}


else if (choice==4){

int j;

printf("\nEnter 1st Number : ");
scanf("%d",&j);

int k;

printf("\nEnter 2nd Number : ");
scanf("%d",&k);

int l=j/k;

return l;

}



}

int main () {

int z=sca();

printf("\n\nAnswer : %d\n",z);

}
