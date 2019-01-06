#include <stdio.h>
int main(){
	
	int m[2][3];
	int maior[2],grande;
	int i,j;
	
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			scanf("%d",&m[i][j]);
		}
	}
	
	for(i=0;i<2;i++){
		maior[i] = m[i][0];
		for(j=0;j<3;j++){
			if(m[i][j]>maior[i]){
				maior[i] = m[i][j];
			}
		}
	}
	
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			printf("%d ",m[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			printf("%.2f ",(float)m[i][j]/maior[i]);
		}
		printf("\n");
	}
	
	return 0;
}
