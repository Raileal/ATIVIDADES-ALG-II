#include <stdio.h>

int main(){
	
char s;
int q,op;

	scanf("%c",&s);
	scanf("%d",&q);
	

	if ( s == 'a'){
		if (q == 0){
			op = 500.00;
		}
		if (q == 1) {
			op = 900.00;
		}
	}
	
	if ( s == 'b'){
		if (q == 0){
			op = 350.00;
		}
		if (q == 1) {
			op = 650.00;
		}
		
	}
	
		if ( s == 'c'){
		if (q == 0){
			op = 350;
		}
		if (q == 1) {
			op = 600.00;
		}
		
	}
	
		if ( s == 'd'){
		if (q == 0){
			op = 300.00;
		}
		if (q == 1) {
			op = 550.00;
		}
		
	}
	printf("%d",op);
}
	
