#include <stdio.h>
int gVariavelGlobal = 2;

int main(void){
	void teste(void);
	
	printf("Globa %d\n",gVariavelGlobal);
	teste();
	teste();
	teste();
	return 0;
}

void teste(void){
	int variavel =2;
	variavel*=2;
	static int variavelstatica =2;
	variavelstatica*=2;
	gVariavelGlobal *= 2;
	printf("Automatica %i\n",variavel);
		printf("Estatica %i\n",variavelstatica);
			printf("Globa %d\n",gVariavelGlobal);

	 
}
