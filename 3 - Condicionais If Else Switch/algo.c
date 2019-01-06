

#include<stdio.h>
#include<math.h>

int main()
{
    int  valor, qnt;
   
    scanf("%d", &valor);

	printf("%d\n", valor);
    qnt=floorf(valor/100);
    printf("%d nota(s) de R$ 100,00\n", qnt);
    valor = (valor -(qnt*100));

    qnt=floorf(valor/50);
    printf("%d nota(s) de R$ 50,00\n", qnt);
    valor = (valor -(qnt*50));

	qnt=floorf(valor/20);
    printf("%d nota(s) de R$ 20,00\n", qnt);
    valor = (valor -(qnt*20));      

     qnt=floorf(valor/10);
    printf("%d nota(s) de R$ 10,00\n", qnt);
    valor = (valor -(qnt*10));

     qnt=floorf(valor/5);
    printf("%d nota(s) de R$ 5,00\n", qnt);
    valor = (valor -(qnt*5));

     qnt=floorf(valor/2);
    printf("%d nota(s) de R$ 2,00\n", qnt);
    valor = (valor -(qnt*2));

     qnt=floorf(valor/1);
    printf("%d nota(s) de R$ 1,00\n", qnt);
    

      
return 0;
}


