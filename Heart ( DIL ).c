#include<stdio.h>

int main(){
	printf("\n\n\n");
	for(int i=1;i<=6;i++){
		for(int j=1;j<=7;j++){
			
			if( ( (i==1) && ((j!=4) && (j!=1) && (j!=7) ) ) ||
             ( (i==2) && ( (j==1) || (j==4) || (j==7) ) ) 
            || ( (i==3) && ( (j==1) || (j==7) ) ) || ( (i==4) && ( (j==2) || ( j==6) ) )
             || ( (i==5) && ( (j==3) || ( j==5) ) ) || ( (i==6) && (  j==4 ) )){
			
		printf(" *");	
			}
		else{
			printf("  ");
		}	
			
			
		}
		printf("\n");
	}
	
	
	
	
	
	
	
}