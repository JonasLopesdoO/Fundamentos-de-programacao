	#include <stdio.h>
int main(){

	char desejo ;
	int n1, n2, n3, n4, media;


	printf("Deseja calcular a media?\n");
		scanf(" %c", &desejo);
	while(desejo == 's'){


		scanf("%d %d %d %d", &n1, &n2, &n3, &n4);
		media = ((n1 + n2 + n3 + n4)/4);
		printf("%d\n", media);
			printf("Deseja calcular a media?\n");
		scanf(" %c", &desejo);

	}


	return 0;




}
