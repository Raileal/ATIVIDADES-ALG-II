#include <stdio.h>
#define max 11
int main() {
int i,num[max],n;

	for (i=0;i<max;i++){
		num[i]=0;	
	}

	while(n!=-1){
		scanf("%d",&n);
		for (i=0;i<max;i++){
			if(n==i){
				num[i]+=1;
			}

		}
	}
		for (i=0;i<max;i++){
			printf("[%d] \t [%d]\n",i,num[i]);			
				
		}
    return 0;
}
