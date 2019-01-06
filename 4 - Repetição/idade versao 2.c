#include <stdio.h>
int main(){
	//exemplo de programa que soma 5 valores com while
	int cont = 0;
	int idade ;
	int acc = 0;
	double media;

		scanf("%d", &idade);

	while(idade >= 0){





		acc = acc + idade;

		cont++;   //cont = cont + 1;
		scanf("%d", &idade);

	}



	if(cont > 0){


	printf("carai %.2lf",(float)acc/cont);

	}else  {
		printf("desgraca");
	}
	return 0;
}

