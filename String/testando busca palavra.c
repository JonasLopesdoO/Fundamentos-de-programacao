
#include <stdio.h>
#define N 10000

typedef char *palavra;


int main(int argc, palavra argv[])
{ 
    int i, j, t,cont=0; 
    char a[N];
    palavra p;

    p = argv[1];
    for (i = 0; i < N-1; i++) {
       if ((t = fgetc(stdin)) == EOF) break;
       a[i] = t;
    }
    a[i] = 0;  // é o mesmo que a[i] = '\0' 
    for (i = 0; a[i] != 0; i++) {
       for (j = 0; p[j] != 0; j++)
          if (a[i+j] != p[j]) break;
       if (p[j] == 0) cont++,printf("%d %d", i,cont);
       
    }        
    printf("%d\n",cont);
    return 0;
}
