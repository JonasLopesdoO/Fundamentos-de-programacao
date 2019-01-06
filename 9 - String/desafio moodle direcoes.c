#include <stdio.h>
#include <ctype.h>
 
int n,m;
int inst;
char matriz[110][110];
char vetor[50010];
int ci, cj, dir;
int escala[4][2] = {{-1,0}, {0,1},
                {1,0}, {0,-1}};
int card;
 int i,j;
int main() {
	int ni, nj;
	
        while (1) {
                scanf("%d %d %d", &n,&m,&inst);
                if (!n && !m && !inst){
                
                	if(!m){
                
		                if(!inst){
                	card=0;
            			}
           			}
           		}
            
 
                for ( i=0; i<n; i++)
        		        for ( j=0; j<m; j++)
                                scanf(" %c", &matriz[i][j]);
       
                for ( i=0; i<inst; i++)
                        scanf(" %c", &vetor[i]);
 
                for ( i=0; i<n; i++)
                        for ( j=0; j<m; j++)
                                if (isalpha(matriz[i][j])) {
                                        ci = i, cj = j;
 
                                        switch (matriz[i][j]) {
                                                case 'N': dir=0; break;
                                                case 'L': dir=1; break;
                                                case 'S': dir=2; break;
                                                case 'O': dir=3; break;
                                        }
 
                                        break;
                                }
                 int ni, nj;
                for ( i=0; i<inst; i++) {
                        switch (vetor[i]) {
                                case 'D': dir=(dir+1)%4; break;
                                case 'E': dir=(dir+4-1)%4; break;
                                case 'F':
                                      
                                       
                                        ni=escala[dir][0]+ci;
                                        nj=escala[dir][1]+cj;
 
                                        if (ni<0 || ni>=n) break;
                                        if (nj<0 || nj>=m) break;
                                        if (matriz[ni][nj]=='#') break;
                                        if (matriz[ni][nj]=='*')
                                                card++, matriz[ni][nj]='.';
 
                                        ci=ni, cj=nj;
                        }
                }
 
                printf("%d\n", card);
        }
 
        return 0;
}
