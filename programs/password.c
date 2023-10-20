#include<stdio.h>
int main(){

int pass=987654321;

int g;

while(1){
printf("\nENTER PASSWORD : ");
scanf("%d",&g);

if(g==pass){
    printf("\n\nCORRECT PASSOWRD\n\n");
    break;
}

else{
   printf("\n\nINCORRECT PASSWORD TRY AGAIN\n");
}


}

}