#include <stdio.h>
#deine calc(a) ()
void f1(){
		int f(){
			printf("this is f from f1\n\n");
			return 1;
		}
		int calc(int a){
			printf("return val is %d\n", a);
			f();
		}
		int x= f();
		calc(x);
	}

	void f2(){
		int f(){
			printf("this is f from f2\n\n");
			return 2;
		}
		int calc(int a){
			printf("return val is %d\n", a);
			f();
		}
		int x= f();
		calc(x);
	}
	void f3(){
		int f(){
			printf("this is f from f3\n\n");
			return 3;
		}
		int calc(int a){
			printf("return val is %d\n", a);
			f();
		}
		int x= f();
		calc(x);
	}
