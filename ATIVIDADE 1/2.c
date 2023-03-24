#include <stdio.h>

int main(){
	float A,R,S;
	
	scanf("%f",&A);
	if (A<=600){
		R = A - 0;
	}
	if (A>600 && A<=1200){
		S = (0.20 * A) ;		
		R = A - S;

	}
	if (A>1200 && A<=2000){
		S = (0.25 * A) ;		
		R = A - S;
	}
	if (A>2000){
		S = (0.30 * A) ;
		R = A - S ;
	}
	
	printf("DESCONTO = %.2f\n",S);
	printf("VALOR COM DESCONTO = %.2f\n",R);
	
	
}
