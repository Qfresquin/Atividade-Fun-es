#include <stdio.h>

int calculodelta(int a, int b, int c){
	int d=0;
	if (a>b && a>c){
		if (b>c) d= a+c;
		else 	 d= a+b;
	}
	else if (a<b && a<c) {
		if (b<c) d= a+c;
		else 	 d= a+b;		
	}
	else  d = b+c;
	return d;
}


int main(){
	int a, b, c;
	scanf("%d %d %d", &a, &b , &c);
	printf ("%d", calculodelta(a, b, c));
	return 0;
}
