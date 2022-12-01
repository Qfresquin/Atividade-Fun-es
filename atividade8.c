#include <stdio.h>

int calculodelta(int c, int m, int t){
 	int j;
 	j = c*m*t;
 	return j;
}


int main(){
	int a, b, c;
	scanf("%d %d %d", &a, &b , &c);
	printf ("%d", calculodelta(a, b, c));
	return 0;
}
