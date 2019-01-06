#include <stdio.h>
#include <string.h>
int main(){

	char string[10];
	char subs = 'b';
	int i,cont=0;
	int tam;

	fgets(string,10,stdin);
	 tam = strlen(string);

	for(i=0;i<tam;i++){

		if(string[i] == 'a'){
			cont++;
			string[i] = subs;
		}

	}

	printf("%s\n",string);
	printf("Quantidade: %d",cont);






	return 0;
}
