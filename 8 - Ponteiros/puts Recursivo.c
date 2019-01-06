#include <stdio.h>
	int cont=0;
void  Recursivo(char *string);

int main (){
	char string[401];
	int i=0,n;
	scanf("%d",&n);
	
		for(i=0;i<n;i++){
			fgets(string,401,stdin);
		    Recursivo(&string[0]);	
		    cont=0;
		}
	
return 0;
}

void Recursivo(char *string){
	if(*string != '\0'){
		cont++;
		
			Recursivo(string+1);
		
	}else{
	printf("%d\n",cont);
	}
	

}
