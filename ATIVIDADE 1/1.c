#include <stdio.h>


int main(){
	
	float Valor,R;
	
	scanf("%f",&Valor);
		if (Valor<20){
			R = (0.45 * Valor) + Valor;
		}
		if (Valor>20){
			R = (0.30 * Valor) + Valor;
		}
		printf("ValorVenda = %.2f",R);
}
