#include <stdio.h>
int main(){
	int count;
	int val;
	int result;
	char sinal;
	char escolhido;
	int start;
	while(start=!0){
	printf("Qual a operação?\t Use: + , - , * , / ou 0 para cancelar\n");
	scanf("%c", &sinal);
	printf("Qual o valor?\n");
	scanf("%d", &val);
	if(sinal == '+'){
		printf("Exibindo a tabuada de SOMA do valor %d \n", val);
		for(count = 1; count <=10; count++){
			printf("%d %c %d = ",val , sinal, count);
			result = val + count;
			printf("%d \n", result);			
			
		}
	}
	if(sinal == '-'){
		printf("Exibindo a tabuada de SUBTRAÇÃO do valor %d \n", val);
		for(count = 1; count <=10; count++){
			printf("%d %c %d = ",val , sinal, count);
			result = val - count;			
			printf("%d \n", result);			
		}
	}
	if(sinal == '*'){
		printf("Exibindo a tabuada de MULTIPLICAÇÃO do valor %d \n", val);
		for(count = 1; count <=10; count++){
			printf("%d %c %d = ",val , sinal, count);
			result = val * count;			
			printf("%d \n", result);			
		}
	}
	if(sinal == '/'){
		printf("Exibindo a tabuada de DIVISÃO do valor %d \n",val);
		for(count = 1; count <=10; count++){
			printf("%d %c %d = ",val , sinal, count);
			result = val / count;			
			printf("%d \n", result);			
		}
	}
	
	
}
}
