#include<stdio.h>
void fun(int n){

int i,j;
for(i=1;i<=n;i++);{
for (j=1;j<=n;j++){

if(j>=i){

     printf("* ");
}
else{
    printf("  ");
}

}

printf("\n");

  } 

}


int main(){

    int val;

scanf("%d", &val);

fun(val);
   
}