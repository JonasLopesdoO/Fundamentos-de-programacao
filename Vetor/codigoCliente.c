#include <stdio.h>
#include <conio.h>
int main(){
	int tam = 7;
	int codigo[10], totalEstoque[10],codigoCliente,codigoProduto,qnt;
	int i;
	int aqui=0;
	for(i=0;i<10;i++){
		scanf("%d %d",&codigo[i], &totalEstoque[i]);
	}
	codigoCliente=1;
	
	while(codigoCliente!=0){
	scanf("%d",&codigoCliente);
	scanf("%d",&codigoProduto);
	scanf("%d",&qnt);

	for(i=0;i<10;i++)
	{
		if(codigoProduto == codigo[i])
		{
			aqui=i;
			break;	
		}else
		{
			printf("Codigo inexistente;\n");
			printf("Digite um novo codigo:\n");
				scanf("%d",&codigoProduto);
		}	
		
	}
	
		if(qnt > totalEstoque[i])
		{
			printf("\n \n Nao temos estoque suficiente dessa mercadoria\n");	
		}else
		{
			printf("\nObrigado e volte sempre:\n");
			totalEstoque[aqui] -= qnt;
		}

	}
	printf("Codigos:\n \n");
	for(i=0;i<10;i++)
	{
		printf("Codigo: %d\t%d",codigo[i],totalEstoque[i]);
	}
	return 0;
}

