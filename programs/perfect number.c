#include<stdio.h>
int main(){

int num;
printf("enter number : ");
scanf("%d",&num);

int sum=0;

for(int i=1;i<num;i++){

if(num%i==0){
    sum =sum +i;
}

}

if(sum==num){

    printf("\n\n%d is perfect num",num);
}

else{

    printf("\n\n%d is not a perfecr number",num);
}


}