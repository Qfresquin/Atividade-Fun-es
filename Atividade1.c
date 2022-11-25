#include <stdio.h>

double calculodelta(double a, double b, double c){
	double d =(b*b) - (4*a*c);
	return d;
}


int main(){
	double a, b, c;
	scanf("%lf %lf %lf", &a, &b, &c);
	printf ("%.2lf\n", calculodelta(a, b, c));
	return 0;
}
