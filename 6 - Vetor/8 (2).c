#include <stdio.h>
#include <string.h>
int main(){
	

	double media[7];
	int i,maior =0;
	char nomemaior[20];
	double quantoPrecisa[7];
	
		
	char string[7][15];

	for(i=0;i<7;i++){
		scanf("%s",&string[i]);
	}
	printf("\n");
	
	for(i=0;i<7;i++){
		scanf("%lf",&media[i]);
		if(media[i]>maior){
			maior = media[i];
			strcpy(nomemaior,string[i]);
		}
		if(media[i]<7){
			quantoPrecisa[i]=7-media[i];		
			printf("Aluno %s: precisa de %.2lf para passar\n",string[i], quantoPrecisa[i]);
		}
	}

		printf("%s\n",nomemaior);
		
		
	
	return 0;
}
