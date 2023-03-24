	
#include <stdio.h>
int main()
{
	int x,v[10],y,m,p=1;
	for (y = 0; y < 10; y++)
	{
		scanf("%d",&x);
		if (x >= 10 && x <= 100)
			v[y] = x;
		for(m = 0; m < y; m++)
		{
			if(v[y] == v[m])
			{
				p = 0;
			}
		}
		if (p == 1)
			printf("%d\n",v[m]);
		p = 1;
	}
}
