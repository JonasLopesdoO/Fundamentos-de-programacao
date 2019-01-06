#include <stdio.h>
	struct struct_type{
		int a,b;
		char ch;
	};
	
	void f1(struct struct_type param);
	
	void main(void){
		struct struct_type arg;
		arg.a=1000;
		f1(arg);
	}

	void f1(struct struct_type param){
		printf("%d",param.a);
	}
