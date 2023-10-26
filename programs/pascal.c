#include<stdio.h>
int main(){
int i,j;

for(i=10;i>=1;i--){
        for( j=1;j<=10;j++){

         if(j>=i){

            printf("* ");
         }
         else{

            printf(" ");
         }

        }
        printf("\n");
    }





    for( i=1;i<=10;i++){
        for(j=1;j<=10;j++){

         if(j>=i){

            printf("* ");
         }
         else{

            printf(" ");
         }

        }
        printf("\n");
    }
}