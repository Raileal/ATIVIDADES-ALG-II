#include <stdio.h>

int main(){
	int A,i,cont=0;
do{	
scanf("%d",&A);

	if(A>0){
		cont += A;
		
	}else{
		cont +=0;
	}
	
}while(A>0);
	printf("%d",cont);
}
