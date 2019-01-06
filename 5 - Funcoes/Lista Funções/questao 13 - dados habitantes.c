#include <stdio.h>
void lerDados(int *idade,char *sexo,double *salario,int *nFilhos);
double mediaSalario(double *salario);
int menorIdade(int *idade);
int maiorIdade(int *idade);
int qntMulher(char *sexo, int *nFilhos,double *salario);

int main(){
	int i,idade[15], nFilhos[15];
	char sexo[15];
	double salario[15];
		
	lerDados(idade,sexo,salario,nFilhos);
	return 0;
}

void lerDados(int *idade,char *sexo,double *salario,int *nFilhos){
	int i;	
	for(i=0;i<15;i++){
		scanf("%d %c %lf %d",&idade[i],&sexo[i],&salario[i],&nFilhos[i]);
	}		
		printf("Media: %.2lf\n",mediaSalario(salario));
		printf("Menor: %d\n",menorIdade(idade));
		printf("Maior: %d\n",maiorIdade(idade));
		printf("Quantidade: %d\n",qntMulher(sexo,nFilhos,salario));
}

double mediaSalario(double *salario){
	int i;double media=0;
		for(i=0;i<15;i++){
			media += salario[i];
		}
		media = media/15;
	return media;
}

int menorIdade(int *idade){
	int i,menor=150;
		for(i=0;i<15;i++){
			if(idade[i]<menor){
				menor = idade[i];
			}	
		}
		return menor;
}
int maiorIdade(int *idade){
	int i,maior=0;
		for(i=0;i<15;i++){
			if(idade[i]>maior){
				maior = idade[i];
			}	
		}
	return maior;
}

int qntMulher(char *sexo, int *nFilhos,double *salario){

	int i,qnt=0;
		for(i=0;i<15;i++){
			if(sexo[i]=='F'&&nFilhos[i]==3&&salario[i]<=500.00){
				qnt++;
			}	
		}
		return qnt;
}



