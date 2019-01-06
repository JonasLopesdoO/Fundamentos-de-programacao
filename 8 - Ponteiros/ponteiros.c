#include <stdio.h>
int main(){
	unsigned int a=2727194780;
	int* x;
	x = &a;
	
	
	printf("Endereco de A: %u\n",&a);
	printf("Endereco de X: %u\n",&x);
	printf("Conteudo de A: %u\n",a);
	
	printf("###############################\n");

	printf("Conteudo da variavel para onde x aponta: %u\n",*x);
	printf("Conteudo de X: %u\n",x);
		printf("###############################\n");

	*x = 25;
	printf("%u",a);
	return 0;
}
