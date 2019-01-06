#include <stdio.h>
#include <math.h>
int main(){

int n2, num, mod;


scanf("%d", &num);
n2 = num%10;
mod = floorf(num/10);
n2 = num - (mod * 10);

	switch(mod){
	case 0:
		if(n2 == 1){
			printf("Um");
		}else if(n2 == 2){
			printf("Dois");
		}else if(n2 == 3){
			printf("Três");
		}else if(n2 == 4){
			printf("Quatro");
		}else if(n2 == 5){
			printf("Cinco");
		}else if(n2 == 6){
			printf("Seis");
		}else if(n2 == 7){
			printf("Sete");
		}else if(n2 == 8){
			printf("Oito");
		}else if(n2 == 9){
			printf("Nove");
		}else {
						printf("zero");

		
		}
	break;
	
	case 1:
		if(n2 == 1){
			printf("onze");
		}else if(n2 == 2){
			printf("doze");
		}else if(n2 == 3){
			printf("treze");
		}else if(n2 == 4){
			printf("quatorze");
		}else if(n2 == 5){
			printf("quinze");
		}else if(n2 == 6){
			printf("dezesseis");
		}else if(n2 == 7){
			printf("dezessete");
		}else if(n2 == 8){
			printf("dezoito");
		}else if(n2 == 9){
			printf("dezenove");
		}else{
				printf("dez");
		}
	break;
	
	case 2:
		if(n2 == 1){
			printf("vinte e um");
		}else if(n2 == 2){
			printf("vinte e dois");
		}else if(n2 == 3){
			printf("vinte e tres");
		}else if(n2 == 4){
			printf("vinte e quatro");
		}else if(n2 == 5){
			printf("vinte e cinco");
		}else if(n2 == 6){
			printf("vinte e seis");
		}else if(n2 == 7){
			printf("vinte e sete");
		}else if(n2 == 8){
			printf("vinte e oito");
		}else if(n2 == 9){
			printf("vinte e nove");
		}else{
			printf("vinte");
		}
	break;	

	case 3:
		if(n2 == 1){
			printf("trinta e um");
		}else if(n2 == 2){
			printf("trinta e dois");
		}else if(n2 == 3){
			printf("trinta e tres");
		}else if(n2 == 4){
			printf("trinta e quatro");
		}else if(n2 == 5){
			printf("trinta e cinco");
		}else if(n2 == 6){
			printf("trinta e seis");
		}else if(n2 == 7){
			printf("trinta e sete");
		}else if(n2 == 8){
			printf("trinta e oito");
		}else if(n2 == 9){
			printf("trinta e nove");
		}else{
			printf("trinta");
		}
	break;	 

	case 4:
		if(n2 == 1){
			printf("quarenta e um");
		}else if(n2 == 2){
			printf("quarenta e dois");
		}else if(n2 == 3){
			printf("quarenta e tres");
		}else if(n2 == 4){
			printf("quarenta e quatro");
		}else if(n2 == 5){
			printf("quarenta e cinco");
		}else if(n2 == 6){
			printf("quarenta e seis");
		}else if(n2 == 7){
			printf("quarenta e sete");
		}else if(n2 == 8){
			printf("quarenta e oito");
		}else if(n2 == 9){
			printf("quarenta e nove");
		}else{
			printf("quarenta");
		}
	break;	 

	case 5:
		if(n2 == 1){
			printf("cinquenta e um");
		}else if(n2 == 2){
			printf("cinquenta e dois");
		}else if(n2 == 3){
			printf("cinquenta e tres");
		}else if(n2 == 4){
			printf("cinquenta e quatro");
		}else if(n2 == 5){
			printf("cinquenta e cinco");
		}else if(n2 == 6){
			printf("cinquenta e seis");
		}else if(n2 == 7){
			printf("cinquenta e sete");
		}else if(n2 == 8){
			printf("cinquenta e oito");
		}else if(n2 == 9){
			printf("cinquenta e nove");
		}else{
			printf("cinquenta");
		}
	break;	
	
	case 6:
		if(n2 == 1){
			printf("Sessenta e um");
		}else if(n2 == 2){
			printf("sessenta e dois");
		}else if(n2 == 3){
			printf("sessenta e tres");
		}else if(n2 == 4){
			printf("sessenta e quatro");
		}else if(n2 == 5){
			printf("sessenta e cinco");
		}else if(n2 == 6){
			printf("sessenta e seis");
		}else if(n2 == 7){
			printf("sessenta e sete");
		}else if(n2 == 8){
			printf("sessenta e oito");
		}else if(n2 == 9){
			printf("sessenta e nove");
		}else{
			printf("sessenta");
		}
	break;	
	
	case 7:
		if(n2 == 1){
			printf("setenta e um");
		}else if(n2 == 2){
			printf("setenta e dois");
		}else if(n2 == 3){
			printf("setenta e tres");
		}else if(n2 == 4){
			printf("setenta e quatro");
		}else if(n2 == 5){
			printf("setenta e cinco");
		}else if(n2 == 6){
			printf("setenta e seis");
		}else if(n2 == 7){
			printf("setenta e sete");
		}else if(n2 == 8){
			printf("setenta e oito");
		}else if(n2 == 9){
			printf("setenta e nove");
		}else{
			printf("setenta");
		}
	break;	

	case 8:
		if(n2 == 1){
			printf("oitenta e um");
		}else if(n2 == 2){
			printf("oitenta e dois");
		}else if(n2 == 3){
			printf("oitenta e tres");
		}else if(n2 == 4){
			printf("oitenta e quatro");
		}else if(n2 == 5){
			printf("oitenta e cinco");
		}else if(n2 == 6){
			printf("oitenta e seis");
		}else if(n2 == 7){
			printf("oitenta e sete");
		}else if(n2 == 8){
			printf("oitenta e oito");
		}else if(n2 == 9){
			printf("oitenta e nove");
		}else{
			printf("ointenta");
		}
	break;	
	
	case 9:
		if(n2 == 1){
			printf("noventa e um");
		}else if(n2 == 2){
			printf("noventa e dois");
		}else if(n2 == 3){
			printf("noventa e tres");
		}else if(n2 == 4){
			printf("noventa e quatro");
		}else if(n2 == 5){
			printf("noventa e cinco");
		}else if(n2 == 6){
			printf("noventa e seis");
		}else if(n2 == 7){
			printf("noventa e sete");
		}else if(n2 == 8){
			printf("noventa e oito");
		}else if(n2 == 9){
			printf("noventa e nove");
		}else{
			printf("noventa");
		}
	break;
	
	default:
		printf("Numero invalido");
	break;
	
	}
		
return 0;

}
