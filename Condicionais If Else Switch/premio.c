#include <stdio.h>
int main(){
	int H, hex, hfalt;

	scanf("%d %d", &hex, &hfalt);
	
	H = ((hex - (2/3*(hfalt))) * 60);

	if(H < 600){	
		printf("Premio: R$ 100,00");
	} else if(H >= 600){
		if(H < 1200){
		printf("Premio: R$ 200,00");
		}else if(H >= 1200){
			if(H < 1800){
				printf("Premio: R$ 300,00");
			}else if(H >= 1800){
				if(H <= 2400){
					printf("Premio: R$ 400,00");
				}else{
					printf("Premio: R$ 500,00");
				}
			}
		}
	}
	
}
