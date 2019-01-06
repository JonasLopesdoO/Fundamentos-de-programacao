#include <stdio.h>
#include <string.h>
	int ValidaIdade(int idade);
	int CalculaCategoria(int idade, char grupoRisco);
	int matriz[5][4] = {20, 1, 2, 3,
						24, 2, 3, 4,
						34, 3, 4, 5,
						64, 4, 5, 6,
						70, 7, 8, 9};
						


int main(){
	int idade,cont=0;
	char nome[20];
	char grupoRisco;
	char opcao;
	int categoria=0;
	
	do{
	scanf("%s %d %c",&nome,&idade,&grupoRisco);
		if(ValidaIdade(idade)){
			printf("%s %d %d\n",nome,idade,CalculaCategoria(idade,grupoRisco));
			
		}else{
			printf("Idade Invalida\n");
		}
		printf("Deseja continuar?\n");
		
		cont =0;
		do{	
			scanf(" %c",&opcao);
			cont++;
		}while(opcao!='S'&&opcao!='N'&&cont<3);
	}while(opcao == 'S');	

	return 0;
}

int ValidaIdade(int idade){
	if(idade >= 17 && idade <= 70){

		return 1;
	}else{

	return 0;

	}

}
	int CalculaCategoria(int idade, char grupoRisco){
		int i=0;
		while(idade > matriz[i][0]{
			
			i++;
		}
		switch(grupo){
			case 'B': return matriz[i][1]; break;
			case 'M': return matriz[i][2]; break;
			case 'A': return matriz[i][3]; break;
		}
	}

//	int CalculaCategoriaVelho(int idade, char grupoRisco){
//	if(idade <= 20){
//			switch(grupoRisco){
//				case 'B': return 1; break;
//				case 'M': return 2; break;
//				case 'A': return 3; break;
//			}
//		}else{
//			if(idade <= 24){
//				switch(grupoRisco){
//					case 'B': return 2; break;
//					case 'M': return 3; break;
//					case 'A': return 4; break;
//				}
//			}else{
//				if(idade <= 34){
//					switch(grupoRisco){
//						case 'B': return 3; break;
//						case 'M': return 4; break;
//						case 'A': return 5; break;
//					}
//				}else{
//					if(idade <= 64){
//						switch(grupoRisco){
//						case 'B': return 4; break;
//						case 'M': return  5; break;
//						case 'A': return 6; break;
//						}
//					}else{
//						switch(grupoRisco){
//						case 'B':return  7; break;
//						case 'M': return  8; break;
//						case 'A': return  9; break;
//						}
//					}
//
//				}
//			}
//		}
//	}
