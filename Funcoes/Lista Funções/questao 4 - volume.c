#include <stdio.h>

float calculaVolume (float raio);

int main(){
	float raio;
	scanf("%f",&raio);
	
	
	printf("%f",calculaVolume(raio));
	return 0;
}

float calculaVolume (float raio){
	float volume;
	volume = (raio*raio*raio)*4/3;
	return volume;
}







