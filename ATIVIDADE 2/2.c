#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
  int i;
  char a[20];
  char s,r;
  
  scanf("%[^\n]s",a);
  s = strlen(a);
  for (i=0;i<s;i++){
  	printf("%c ",toupper(a[i]));
  }
  return 0;
}

