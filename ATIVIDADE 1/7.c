#include <stdio.h>

int main(){
	
	int x,y,cont,S;
	
	scanf("%d",&x);
	scanf("%d",&y);
	
	if (x<y-2){
		for (x=x; x<=y ;x++){
			if (x%2==0){
				cont += x;
				
			}
			else if(x%2!=0){
				S *=x;
				
			}
			
		}
			printf("%d\n",cont);
			printf("%d\n",S);
	}else{
		printf("Fora dos padroes");
	}	
	
	
}
