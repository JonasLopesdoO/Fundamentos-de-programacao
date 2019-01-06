#include <stdio.h>
int main(){
	
	char snestor, smae, spai, rhnestor, rhmae, rhpai;
	 	 char x[2] = "ab";
	 
	 scanf(" %c", &snestor);
	 scanf(" %c", &rhnestor);
	 scanf(" %c", &smae);
	 scanf(" %c", &rhmae);
	 scanf(" %c", &spai);
	 scanf(" %c", &rhpai);
	 
	
	
	
	switch(smae){
	case 'o':
		switch(spai){
		case'o':
			switch(snestor){
			case'o':
			
				switch(rhmae){
				case '+':
				printf("sim\n");
				break;
			case '-':
				switch(rhpai){	
				case '-':
					switch(rhnestor){
					case '-':
					printf("sim\n");
					break;
						case '+':
						printf("não\n");
						break;
					}
				
			case '+':
			printf("sim");
				}
			break;
				}
			
			break;
			default:
			printf("não\n");
			}
		case 'a':
			switch(snestor){
			case 'o':
			
				
				switch(rhmae){
				case '+':
				printf("sim\n");
				break;
			case '-':
				switch(rhpai){	
				case '-':
					switch(rhnestor){
					case '-':
					printf("sim\n");
					break;
						case '+':
						printf("não\n");
						break;
					}
				
			case '+':
			printf("sim");
				}
			break;
				}
			
			break;
			case 'a':
			
			
				switch(rhmae){
				case '+':
				printf("sim\n");
				break;
			case '-':
				switch(rhpai){	
				case '-':
					switch(rhnestor){
					case '-':
					printf("sim\n");
					break;
						case '+':
						printf("não\n");
						break;
					}
				
			case '+':
			printf("sim");
				}
			break;
				}
			
				break;
			default:
			printf("não\n");

				
			}
		}
		
		
		
		
		
	
	}
		
	
}

		
		







