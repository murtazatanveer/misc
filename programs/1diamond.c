#include<stdio.h>
int main(){


for(int i=1;i<=9;i++){

    for(int j=1;j<=9;j++){

     if( ( j>=6-i && j<=4+i )  && (  j>=i-4 && j<=14-i ) ){

        printf("*");
     }
else{
    printf(" ");
}

    }
    printf("\n");

}




}