#include <stdio.h>
#include <string.h>

int main(){
	char s1[50];
	char s2[50];
	
	scanf("%s %s", &s1,&s2);
	
	printf("Comprimentos: %d %d\n", strlen(s1), strlen(s2));
	
	if(!strcmp(s1,s2)){
		printf("As strings sao iguais\n");
	}
	
	strcat( s1, s2);
	printf("%s\n", s1);
	
	strcpy(s1,"Isso e um teste.\n");
	printf(s1);
	
	
	return 0;
}
