#include <stdio.h>

int main(){
	
	int i;
	int total1=0,total2=0,total3=0,total4=0 ,totalNulo=0, totalBranco=0;
	double pnulo, pbranco;
	int candidato;
	candidato =100;
	int tot=0;
	while(candidato != 0){
		scanf("%d",&candidato);
		
		if(candidato==1)
		{
			total1++;
		}else if(candidato==2)
		{
			total2++;
		}else if(candidato==3)
		{
			total3++;
		}else if(candidato==4)
		{
			total4++;
		}else if(candidato==5)
		{
			totalNulo++;
		}else if(candidato==6)
		{
			totalBranco++;
		}else{
			printf("Opcao invalida\n");
		}
		
		tot++;	
	}
		
	pbranco = (totalBranco*100)/tot;
	pnulo = (totalNulo*100)/tot;
	
	printf("Candidato 1: Total: %d\n",total1);
	printf("Candidato 1: Total: %d\n",total2);
	printf("Candidato 1: Total: %d\n",total3);
	printf("Candidato 1: Total: %d\n",total4);
	printf("Porcentagem branco: %lf\n",pbranco);
	printf("Porcentagem nulo: %lf\n",pnulo);
	
	
	return 0;
}
