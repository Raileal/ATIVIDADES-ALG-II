#include<stdio.h>

int main(){
	
	int v[10],i,n=2, m=1;
	
	for(i=0;i<10;i++){
		scanf("%d",&v[i]);
		
		
	}
		printf("    elemento          valor         histograma\n");
	for(i=0;i<10;i++){
	
		printf("\t%d\t\t%d\t\t",i,v[i]);
		
		
		while(m<=v[i]){
		printf("*");
		if(m==v[i]){
			printf("\n");
			m=1;
			//break;
			
		}
		m++;
	
		}
	}
	
}
