#include<stdio.h>
int main(){
int i,j;
int num;
printf("enter : ");
scanf("%d",&num);

printf("\n\n");

for(i=1;i<=num;i++){

    for(j=1;j<=num;j++){

if(j>=i && (j<=(num+1)-i) || (j>=(num+1)-i)&&j<=i) {

    printf("*");
}
else{
    printf(" ");
}

    }
    printf("\n");
}


}