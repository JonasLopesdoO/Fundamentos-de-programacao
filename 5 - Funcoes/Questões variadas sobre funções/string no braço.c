#include <stdio.h>
#include <string.h>

void fun1(char frase[]);
void fun2(char string[],char ocorrencia);
void fun3(char frase[],char ocorrencia);
void fun4(char frase[]);
void fun5(char frase[]);
void fun6 (char paragrafo[],char ocorrencia);
void fun8(char frase[]);
void fun9(char frase[],int n);
void removeCaractere(char frase[]);



int main(){
	
	char frase[5001];
	int opcao;
	char ocorrencia;
	int n;
	
	fgets(frase,5001,stdin);
	scanf("%i", &opcao);
	
	while (opcao!=10){

		switch(opcao){
			case 1:
				fun1(frase);
				scanf("%d",&opcao);
			break;
			
			case 2:
				scanf(" %c", &ocorrencia);
				fun2(frase,ocorrencia);
				scanf("%d",&opcao);
			break;
			
			case 3:
				scanf(" %c", &ocorrencia);
				fun3(frase,ocorrencia);
				scanf("%d",&opcao);
			break;
			
			case 4:
				fun4(frase);
				scanf("%d",&opcao);
			break;
			
			case 5:
				fun5(frase);
				scanf("%d",&opcao);
			break;
			
			case 6:
				scanf("%c", &ocorrencia);
				removeCaractere(frase);
			scanf("%d",&opcao);
			break;
			
			case 7:
			 
				scanf("%d",&opcao);
			break;
			
			case 8:
				fun8(frase);
				scanf("%d",&opcao);
			break;
			
			case 9:
				scanf("%i", &n);
				fun9(frase,n);
				scanf("%d",&opcao);
			break;
		}
	}
	
	return 0;
}

//função1
void fun1(char frase[]){
	int i=0,cont=0;
		for(i=0;i<strlen(frase)-1;i++){
			if(frase[i]!=' '&&frase[i]!='!'&&frase[i]!='?'&&frase[i]!='.'&&frase[i]!=','){
				cont++;
			}
		}
	printf("%d\n",cont);
}

//funcao2
void fun2(char frase[],char ocorrencia){
	int i,cont=0;
		for(i=0;i<strlen(frase)-1;i++){
			if(frase[i]==ocorrencia){
				cont++;
			}
		}	
		printf("%d\n",cont);
}

//funcao3
void fun3(char frase[],char ocorrencia){
	int i,cont=0;
		for(i=0;i<strlen(frase)-1;i++){
			if(frase[i]!=ocorrencia){
				cont++;
			}
		}	
		printf("%d\n",cont);
}

//funçao4
void fun4(char frase[]){
	int tamanho;
	
	tamanho = strlen(frase)-1;
	
	printf("%i", tamanho);
}	

//função5
void fun5(char frase[]){
	int i=0,cont=1;
		for(i=0;i<strlen(frase)-1;i++){
			if(frase[i]==' '){
				cont++;
			}
		}
	printf("%d",cont);
}

//funcao6
void removeCaractere(char frase[]){ //06 OK
	int i, j;
	char letra;
	
	scanf(" %c",&letra);
	
	for(i=0; i<strlen(frase)-1; i++){
		if(frase[i] == letra){
			for(j=i; j<strlen(frase)-1; j++){
			  frase[j] = frase[j+1]; 
			}	
		}	
	}
}

//funçao8
void fun8(char frase[]){
	int i;
		for(i=0;i<strlen(frase)-1;i++){
			printf("%c",frase[i]);
		}printf("\n");
}

//funcao9
void fun9(char frase[],int n){
	int i;
		for(i=0;i<n;i++){
			printf("%c",frase[i]);
		}printf("\n");	
}







