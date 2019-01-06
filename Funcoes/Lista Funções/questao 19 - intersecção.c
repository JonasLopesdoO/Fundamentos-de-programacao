#include <stdio.h>

void calcula(int vet1[], int vet2[]){
    int i, j, m, flag = 0, aux = 0, vetIntersec[10];
    
    for(i=0; i<10; i++){
        scanf("%d",&vet1[i]);
    }
    
    for(i=0; i<10; i++){
        scanf("%d",&vet2[i]);
    }
    
    for(i=0; i<10; i++){
        for(j=0; j<10; j++){
            if(vet1[j] == vet2[i]){
                for(m=0; m<aux; m++){
                  if(vetIntersec[m] == vet2[i]){
                    flag = 1;    
                  }  
                }
                if(flag == 0){
                    vetIntersec[aux] = vet2[i];
                    aux++;   
                }
                flag = 0;
            }
        }
    }
    
    for(i=0; i<aux; i++){
        printf("%d ",vetIntersec[i]);    
    }
    
}

int main(){
    int vet1[10];
    int vet2[10];
    
    calcula(vet1, vet2);
return 0;
}

