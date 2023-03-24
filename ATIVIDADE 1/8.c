#include <stdio.h>


int main(){
	
	int a, b,l,c;
	scanf("%d",&a);
	scanf("%d",&b);

	for (l = 0; l<a ; l++ ){
		for(c=0;c<b;c++){
			printf("*");
		}
		printf("\n");
	}

}
	

