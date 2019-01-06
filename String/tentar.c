#include <stdio.h>
#include <ctype.h>

	int n,m,qntInstrucoes;
	char matriz[110][110];
	char vetor[50010];
	int i,j,ci,cj,dir;
	
	int escala[4][2] = {{-1,0}, {0,1},
						{1,0},{0,-1}};
	int cards;
		
int main(){
	
	while(1) {
		
		cards=0;
		scanf("%d %d %d",&n,&m,&qntInstrucoes);
		if (!n && !m && !qntInstrucoes) break;
		 
		for(i=0;i<n;i++)
				for(j=0;j<m;j++)
						scanf(" %c",&matriz[i][j]);
						
		for(i=0;i<qntInstrucoes;i++)
				scanf(" %c",&vetor[i]);
				
		for(i=0;i<n;i++)
				for(j=0;j<m;j++)
			if (isalpha(matriz[i][j])) {
				ci=i; cj=j;
				
				switch(matriz[i][j]) {
					case'N': dir = 0; break;
					case'L': dir = 1; break;
					case'S': dir = 2; break;
					case'O': dir = 3; break;
				}
				break;
			}
		int ni,nj;	
		for(i=0;i<qntInstrucoes;i++){
			switch(vetor[i]){
				case 'D': dir = (dir+1)%4; break;
				case 'E': dir = (dir+4-1)%4; break;
				case 'F':
					
					ni = escala[dir][0]+ci;
					nj = escala[dir][1]+cj;
					
					if(ni<0 || ni>=n) break;
					if(nj<0 || nj>=m) break;
					if(matriz[i][j]=='#') break;
					if(matriz[i][j]=='*')
					cards++;
					matriz[ni][nj] = '.';
					
					ci=ni; cj=nj;
			 	
			}
		}
		
		printf("%d\n",cards);
	}
	return 0;
}
