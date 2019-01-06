#include <stdio.h>
int main(){
	
	double n[6];
	int i, p=0;
	double acc =0,media;
	
	for(i =0; i < 6;i++){
		scanf("%lf",&n[i]);
			if(n[i] > 0){
				p++;
					acc += n[i];
			}
	
	}
	
	media = acc/p;
	printf("%d valores positivos\n%.1lf\n", p,media);
	
	return 0;
}
