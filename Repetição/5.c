#include <stdio.h>
#include <string.h>
int main(){
	
	int mes=12,semana=4;
	char nomeMes[mes][10];	//duvida como declarar o nome do mes;
	double totalMes[12];
	double totalSemana[48];
	double matriz[mes][semana];
	double totalAno=0;
	double somaSemana=0;
	int cont=0,contSemana=0;
	int i ,j;
	

	
	
	for(i=0;i<mes;i++)
	{
		for(j=0;j<semana;j++)
		{
			scanf("%lf",&matriz[mes][semana]);
			totalAno+=matriz[mes][semana];
			somaSemana += matriz[mes][semana];
			
		}
	totalMes[i] = somaSemana; somaSemana=0;
	}printf("\n \n");
	
	for(i=0;i<mes;i++)
	{
		for(j=0;j<semana;j++)
		{
		totalSemana[contSemana] = matriz[i][j];
		contSemana++;
		}
	}
	
	for(i=0;i<mes;i++)
	{
		printf("Total Mes%d: %.2lf\n",i+1,totalMes[i]);
	}printf("\n");	
	
	
	for(i=0;i<mes;i++)	
	{
		for(j=0;j<semana;j++)
		{
		
		printf("Total Semana: %.2lf",matriz[i][j]); 
		}
	
	}		printf("\n");
		
		printf("Total Ano: %.2lf\n",totalAno);
	
	return 0;
}
