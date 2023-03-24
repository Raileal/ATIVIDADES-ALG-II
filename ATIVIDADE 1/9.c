#include <stdio.h>


int main(){
	
	int a, b,l,c;
	scanf("%d",&a);
	scanf("%d",&b);

	for (l = 1; l<=a ; l++ ){
		for(c=1;c<=b;c++){
			if (l == 1 || l == a || c == 1 || c == b){
				printf("*");
			}else {
				printf(" ");
			}
		}
		printf("\n");
	}

}
	

