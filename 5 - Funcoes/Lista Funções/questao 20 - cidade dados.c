#include <stdio.h>
float mediaSalario(float salario,int cont);
float mediaFilhos(float filho,int cont);
float percentual(int qntTotal,int menor380);
void lerDados();
int main(){
	
	lerDados();
	return 0;
}

float mediaSalario(float salario,int cont){
	return salario/cont;
}

float mediaFilhos(float filho,int cont){
	return (float)filho/cont;
}

float percentual(int qntTotal,int menor380){
	return (menor380*100)/qntTotal;
}

void lerDados(){
	float salario,tempSalario=0,tempFilho=0,maiorSalario=0,percent;
	int qntFilho,contSalario=0,menor380=0;
	
		scanf("%f %d",&salario,&qntFilho);
		while(salario !=0 && qntFilho !=0){
	
		
			tempFilho+=qntFilho;
			tempSalario+=salario;
			contSalario++;
				if(salario>maiorSalario){
					maiorSalario=salario;			
				}
				if(salario < 380){
					menor380++;
				}
			
			scanf("%f %d",&salario,&qntFilho);
			
		}
		
		printf("Media do salario: %f \n",mediaSalario(tempSalario,contSalario));
		printf("Media de filhos %f \n",mediaFilhos(tempFilho,contSalario));
		printf("Maior salario %f \n",maiorSalario);
		printf("Percentual %.2f porcento \n",percentual(contSalario,menor380));
		

}


