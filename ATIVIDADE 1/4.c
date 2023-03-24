#include <stdio.h>

int main(){
	
	
	int macas;
	float R;
	
	scanf("%d",&macas);
	if (macas < 12){
		R = 1.30 * macas;
	}else {
		R = 1.00 * macas;
	}
	printf("R$ %.2f",R);
}
