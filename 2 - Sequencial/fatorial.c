#include <stdio.h>
int main()
{
	int fatorial;
	scanf("%d",&fatorial);
	int i;
	int calc=1;
	
		for(i=1;i<=fatorial;i++)
		{
			calc *= i;	
		}
	
	printf("%d",calc);
	return 0;
}
