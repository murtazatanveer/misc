#include<stdio.h>
//program of calculator using functions

int addition(int a,int b);
int sub(int e,int f);
int mul(int h,int i);
float div(float k, float l);

int main(){
printf("calculator menu\n\n");
printf("Addition      (1)\n");
printf("Subtraction   (2)\n");
printf("Multiplication(3)\n");
printf("Division      (4)\n");

int choice;
printf("\nEnter Choice : ");
scanf("%d",&choice);

if(choice==1){

int aa,bb;

printf("\nenter 1st number : ");
scanf("%d",&aa);

printf("\n\nenter 2nd number : ");
scanf("%d",&bb);

int w = addition(aa,bb);
printf("\n\n%d + %d = %d",aa,bb,w);

}

else if(choice==2){

int ee,ff;

printf("\nenter 1st number : ");
scanf("%d",&ee);

printf("\n\nenter 2nd number : ");
scanf("%d",&ff);

int x = sub(ee,ff);

printf("\n\n%d - %d = %d",ee,ff,x);



}

else if(choice==3){

int hh,ii;

printf("\nenter 1st number : ");
scanf("%d",&hh);

printf("\n\nenter 2nd number : ");
scanf("%d",&ii);

int y = mul(hh,ii);

printf("\n\n%d * %d = %d",hh,ii,y);


}

else if(choice==4){

float kk,ll;

printf("\nenter 1st number : ");
scanf("%d",&kk);

printf("\n\nenter 2nd number : ");
scanf("%d",&ll);

float z = div(kk,ll);

printf("\n\n%.2f / %.2f = %.2f",kk,ll,z);


}

else{
    printf("\n\nInvalid Choice");
}

}

int addition(int a,int b){

return a+b;


}

int sub(int e,int f){



return e-f;

}

int mul(int h,int i){

return h*i;

}

float div(float k,float l){

return k/l;

}