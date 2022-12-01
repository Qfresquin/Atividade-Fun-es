#include <stdio.h>

int calculodelta(double a, double b){
	int d=0;
	if (a==b)d=1;
	return d;
}


int main(){
	double a, b;
	scanf("%lf %lf", &a, &b);
	printf ("%d\n", calculodelta(a, b));
	return 0;
}
