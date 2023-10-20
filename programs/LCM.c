#include<stdio.h>
int main(){
	
	printf("\n______________LCM OF TWO NUMBERS________________\n\n");
	

	int a;
	printf("\nEnter 1st Number : ");
	scanf("%d",&a);
	
	
	int b;
	printf("\nEnter 2nd Number : ");
	scanf("%d",&b);
	
	
	int max;
	
	if(a>=b){
		max=a;
	}
	
	else if(b>=a){
		max=b;
	}
	
	while(1){
		
		if(max%a==0 && max%b==0){
			
			printf("\nLCM of %d and %d is %d",a,b,max);
			break;
		}
		max++;
	}

	
}