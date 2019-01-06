#include <stdio.h>
#include <math.h>

int main(){

	double x2,x1,y2,y1,calc2;
	
		scanf("%lf %lf",&x1,&y1);
		scanf("%lf %lf",&x2,&y2);
		
	calc2 =sqrt(pow(x2-x1,2)+pow(y2-y1,2));
	
	

	
	printf("%.4lf\n",calc2);

return 0;
}

