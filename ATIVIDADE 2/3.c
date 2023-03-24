#include <stdio.h>
#include <string.h>

int main()
{
  int i,s, v[20];
  char a[20];
  char r;
  
  scanf("%[^\n]s",a);
  s = strlen(a);
  
  for (i=0;i<s;i++){
  	
		if(a[i] == 'r'){	
			a[i] = 'l';
			v[i] = 1;	
			
		}else if(a[i] == 'R'){
			a[i] = 'L';
			v[i] = 1;
		}
  }
	printf("%s\n",a);
	
	for(i=0;i<s;i++){
		if(v[i] == 1){
		printf("%d ",i+1);
	   }
	}
  	
  return 0;
}

