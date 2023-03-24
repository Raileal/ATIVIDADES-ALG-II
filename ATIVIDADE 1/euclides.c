#include <stdio.h>

int main(){
int m,n,cont=1;
int r;
scanf("%d",&m);
scanf("%d",&n);
while( n != 0 ){
r = m % n;
m = n;
n = r;
cont++;
}
printf("%d\n",m);
printf("%d",cont);

return 0;
}
