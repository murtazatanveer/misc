#include<stdio.h>
int main(){

printf("\n\n\n Made by : Murtaza Tanveer\n\n Reg no : SP23-BSE-096-2C\n\n");

	for(int i=1;i<=5;i++){
	    for(int j=1;j<=9;j++){

            if(  (j>=(6-i)) && (j<=(4+i))   ){
	    		printf(" * ");
			}
			else{
				printf("   ");
			}
            	}
		printf("\n\n");	
	}

    for(int i=4;i>=1;i--){
	    for(int j=1;j<=9;j++){

            if(  (j>=(6-i)) && (j<=(4+i))   ){
	    		printf(" * ");
			}
			else{
				printf("   ");
			}
            	}
		printf("\n\n");	
	}



}