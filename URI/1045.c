#include <stdio.h>
#include <math.h>
int main(){
	 
	 float A, B , C, l1,l2,l3;
	 scanf("%f %f %f", &l1, &l2, &l3);
	 
	 A = l1;
	 if(l2 > A){
	 	A = l2;
	 }
	 if(l3 > A){
	 	A = l3;
	 }
	 
	 if(A >= B + C){
	 	printf("NAO FORMA TRIANGULO\n");
	 }
	 if(pow(A,2) == pow(B,2) + pow(C,2)){
	 	printf("TRIANGULO RETANGULO\n");
	 }
	 if(pow(A,2) > pow(B,2) + pow(C,2)){
	 	printf("TRIANGULO OBTUSANGULO\n");
	 }
	  if(pow(A,2) < pow(B,2) + pow(C,2)){
	 	printf("TRIANGULO ACUTANGULO\n");
	 }
	 if(A == B && A == C){
	 	printf("TRIANGULO EQUILATERO\n");
	 }
	 if(A == B || A == C || B == C){
	 	printf("TRIANGULO ISOSCELES\n");
	 }
	 
	 
	
	
	return 0; 
}
