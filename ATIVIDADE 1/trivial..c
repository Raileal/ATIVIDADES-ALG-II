#include <stdio.h>

int main(){

int m, n, cont=0;
int d;
scanf("%d %d",&m,&n);
d = n;
while( m%d != 0 || n%d !=0 ){
d--;
cont ++;
}
printf("%d\n",d);
printf("%d",cont);
return 0;
}
