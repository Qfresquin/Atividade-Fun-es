#include <stdio.h>

int calculodelta(int a, int b, int c){
	int d=0;
	if (a%2==0)d++;
	if (b%2==0)d++;
	if (c%2==0)d++;
	return d;
}


int main(){
	int a, b, c;
	scanf("%d %d %d", &a, &b , &c);
	printf ("%d", calculodelta(a, b, c));
	return 0;
}
