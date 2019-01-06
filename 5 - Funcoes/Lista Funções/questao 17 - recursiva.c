#include <stdio.h>
int recursiva(int n1, int n2);

int main(){
	int  n1,n2;
		scanf("%d %d",&n1,&n2);
		
		recursiva(n1,n2);	
	return 0;
}

int recursiva(int n1, int n2){
	int i=0,j=1,k=1,contd1,divisor1[10],divisor2[10],contd2,MDC=0;
	
	for(i=0;i<=9;i++){
		if(n1%j==0){
			j++;
		}
	}
	for(i=0;i<=9;i++){
		if(n2%k==0){
			k++;
		}
	}
	
	for(i=0;i<k||i<j;i++){
		if(n1%2==0){
			contd1++;
			divisor1[i]=2;
			n1 = n1/2;
		}else if(n1%3==0){
			contd1++;
			divisor1[i]=3;
			n1 = n1/3;
		}else if(n1%5==0){
			contd1++;
			divisor1[i]=5;
			n1 = n1/5;
		}
	}
	
	for(i=0;i<contd1;i++){
		printf("%d ",divisor1[i]);
	}
	
	
	return MDC;	
			
	
}
