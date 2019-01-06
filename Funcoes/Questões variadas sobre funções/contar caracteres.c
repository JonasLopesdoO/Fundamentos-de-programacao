#include <stdio.h>
#include <string.h>
//funcao1
void contarCaracter(char string[]);
//funcao2
void ocorrenciaCaracter(char string[],char ocorrencia);
//funcao3
void ocorrenciaDiferenteCaracter(char string[],char ocorrencia);
//funcao4
void totalCaracter(char string[]);
//funcao5
void qntPalavras(char string[]);
//funcao8
void imprimeTexto(char string[]);
//funcao9
void imprimeTextoInicio(char string[],int N);


int main(){
	
	int op,N;
	char paragrafo[5001],ocorrencia;
	fgets(paragrafo,5001,stdin);
	scanf("%d",&op);
	
	while(op!=10){
		switch(op){
			case 1: 
				contarCaracter(paragrafo);
				printf("aquium ");
				printf("Digite a opcao\n");
				scanf("%d",&op);			
			break;
			case 2: 
			
				scanf("%c",&ocorrencia);
				ocorrenciaCaracter(paragrafo,ocorrencia);
				printf("aquidois ");
				printf("Digite a opcao\n");
				scanf("%d",&op);
			break;
			case 3: 
				scanf("%c",&ocorrencia);
				ocorrenciaDiferenteCaracter(paragrafo,ocorrencia);
				printf("aquitres ");
				printf("Digite a opcao\n");
				scanf("%d",&op);
			break;
			case 4: 
				totalCaracter(paragrafo);
				printf("aquiquatro ");
				printf("Digite a opcao\n");
				scanf("%d",&op);
			break;
			case 5:
				qntPalavras(paragrafo);
				printf("aquicinco ");
				printf("Digite a opcao\n");
				scanf("%d",&op);
			break;
			case 6: 
			break;
			case 7: 
			break;
			case 8: 
				imprimeTexto(paragrafo);
				printf("aquioito ");
				printf("Digite a opcao\n");
				scanf("%d",&op);
			break;
			case 9: 
				scanf("%d",&N);
				imprimeTextoInicio(paragrafo,N);
				printf("aquinove ");
				printf("Digite a opcao\n");
				scanf("%d",&op);
			break;
			default: break;	
		}
		
	}
	return 0;
	
}
//funcao1
void contarCaracter(char string[]){
	int i=0,cont=0;
		for(i=0;i<strlen(string)-1;i++){
			if(string[i]!=' '&&string[i]!='!'&&string[i]!='?'&&string[i]!='.'&&string[i]!=','){
				cont++;
			}
		}
	printf("%d\n",cont);
}

//funcao2
void ocorrenciaCaracter(char string[],char ocorrencia){
	int i,cont=0;
		for(i=0;i<strlen(string)-1;i++){
			if(string[i]==ocorrencia){
				cont++;
			}
		}	
		printf("%d\n",cont);
}

//funcao3
void ocorrenciaDiferenteCaracter(char string[],char ocorrencia){
	int i,cont=0;
		for(i=0;i<strlen(string)-1;i++){
			if(string[i]!=ocorrencia){
				cont++;
			}
		}	
		printf("%d\n",cont);
}	
	
//funcao4
void totalCaracter(char string[]){
	int i=0;
		while(string[i]!='\n'){
			i++;
		}
		printf("%d\n",i);
}

//funcao5
void qntPalavras(char string[]){
	int i,cont=0;
		for(i=0;i<strlen(string)-1;i++){
			if(string[i]==' '){
				cont++;
			}
		}
		printf("%d\n",cont+1);
}

//funcao8
void imprimeTexto(char string[]){
	int i;
		for(i=0;i<strlen(string)-1;i++){
			printf("%c",string[i]);
		}	
}

//funcao9
void imprimeTextoInicio(char string[],int N){
	int i;
		for(i=0;i<N;i++){
			printf("%c",string[i]);
		}	
}





