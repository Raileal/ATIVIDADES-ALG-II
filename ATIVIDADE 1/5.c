#include <stdio.h>

int main(){
	int h1,h2,m1,m2,R,S,P,E,T,U;
	
	scanf("%d %d",&h1,&h2);
	scanf("%d %d",&m1,&m2);
	
	if (h1>h2){
		R = h1;
		S = h2;
	}else {
		R = h2;
		S = h1;
	}
	
	if (m1>m2){
		E = m1;
		T = m2;
	}else {
		E = m2;
		T = m1;
	}
	P = R + T;
	U = S * E;
	
	printf("%d\n",P);
	printf("%d\n",U);
	return 0
	
}
