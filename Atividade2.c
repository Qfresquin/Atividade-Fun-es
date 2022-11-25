#include <stdio.h>

double calculodelta(double a, double b){
	if (a < b)return b;
	else return a;
}


int main(){
	double a, b;
	scanf("%lf %lf", &a, &b);
	printf ("%.2lf\n", calculodelta(a, b));
	return 0;
}
