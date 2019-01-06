#include <stdio.h>
#include <string.h>

int main(){
	
	char nome[50];
	int tamc;
	char certo[]={'T','h','o','r'};
	int forca;
	int i,teste;
	int j;

	int tam;
	
	scanf("%d",&teste);
	
	for(i=0;i<teste;i++){
		scanf("%s %d",nome,&forca);
		
	
		
			if(nome[0]=='T'&& nome[1]=='h'&& nome[2]=='o'&& nome[3]=='r'){
			
			printf("Y\n");
				
			}else{
				printf("N\n");
			}
			
		
	
	}
	
	
	
	return 0;
}
