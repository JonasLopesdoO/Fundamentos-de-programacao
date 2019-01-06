#include <stdio.h>
#include <string.h>

int main(){

   int mes=12;
   int semana=4;
   double vendas[mes][semana];
   int i,j;
   double vendaMes[12];
   double venda=0, vendaTotal=0;
	char m1,m2,m3,m4,m5,m6,m7,m8,m9,m10,m11,m12;
	
    strcpy (m1, "janeiro");
    strcpy (m2, "fevereiro");
    strcpy (m3, "marco");
    strcpy (m4, "abril");
    strcpy (m5, "maio");
    strcpy (m6, "junio");
    strcpy (m7, "julio");
    strcpy (m8, "agosto");
    strcpy (m9, "setembro");
    strcpy (m10, "outubro");
    strcpy (m11, "novembro");
    strcpy (m12, "dezembro");
    
	for(i=0;i<mes;i++){
		for(j=0;j<semana;j++){
			scanf("%lf",vendas[i][j]);
			venda += vendas[i][j];
			vendaTotal += vendas[i][j];
		}
		vendaMes[i] = venda;
		venda =0;
	}
 
   
	return 0;
}
