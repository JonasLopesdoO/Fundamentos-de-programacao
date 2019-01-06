#include <stdio.h>
int main(){
	
	
	double matriz[6][4];
	double maior[6];
	double maiorzao=0;
	int l,c;
	for(l=0;l<6;l++){
		for(c=0;c<4;c++){
			scanf("%lf", &matriz[l][c]);
			
			if((matriz[l][c]) > maiorzao){
				maiorzao = matriz[l][c];
			}
		}
		maior[l] = maiorzao;
		maiorzao=0;
	}
	
	for(l=0;l<6;l++){
		for(c=0;c<4;c++){
			matriz[l][c] = matriz[l][c] / maior[l];
		}
	}
	
	for(l=0;l<6;l++){
		for(c=0;c<4;c++){
			printf("%.2lf ",matriz[l][c]);
		}
		printf("\n");
	}
	
	
	
	return 0;
}
