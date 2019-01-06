#include <stdio.h>
#include <math.h>
#define PI 3.14159265

float angulo, sen, coss, tg;

void Seno() {
  printf("\nDigite o angulo em graus.: ");
  scanf("%f", &angulo);
  sen = sin(angulo*PI/180);
  printf("\nO seno de %f = %f\n", angulo, sen); 
	
}

void Cosseno() {
  printf("\nDigite o angulo em graus.: ");
  scanf("%f", &angulo);
  coss = cos(angulo*PI/180);
  printf("\nO cosseno de %f = %f\n", angulo, coss);
	
}

void Tangente() {
  printf("\nDigite o angulo em graus.: ");
  scanf("%f", &angulo);
  tg = tan(angulo*PI/180);
  printf("\nO tangente de %f = %f\n", angulo, tg);
	
}

int main() {
  int op;
  
  printf("\n===============TRIGONOMETRIA CALC===============\n");	
  printf("\nMenu:\n"); 
  printf("\n 1-Seno");
  printf("\n 2-Cosseno");
  printf("\n 3-Tangente");
  printf("\n\nOpcao.: ");
  scanf("%d", &op);
  
  switch(op) {
    case 1:
      Seno();
      break;
	
    case 2:
      Cosseno();
      break;
	
    case 3:
      Tangente();	
      break;
	  
    default:  
      printf("\nErro! Opcao inexistente.\n");
      break;
      
  }
 
  return(0);

}
