#include <stdio.h>
int main(){
	
	int matriz[2][2],j,i;
	int maiorj,maiori,maior=0;
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&matriz[i][j]);
		}
	}
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			if(matriz[i][j]> maior)
			{
				maior = matriz[i][j];
				maiori = i;
				maiorj = j;
			}
			
		}
	}
	

			printf("Maior elemento: %d\n posicao[%d][%d]",maior,maiori,maiorj);
	
	return 0;
}
