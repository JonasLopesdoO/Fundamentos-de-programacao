#include <stdio.h>
#include <string.h>
int main(){
	
	char string[5][15];
	int i;
	for(i=0;i<5;i++){
		scanf("%s",&string[i]);
	}
	
	
	for(i=0;i<5;i++){
		printf("%s\n",string[i]);
	}
	
	return 0;
}
