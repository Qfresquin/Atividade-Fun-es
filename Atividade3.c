#include <stdio.h>

void imprimir(int a){
	int i;
	for (i=0;i<=a; i++) printf("%d\n", i);
	
}


int main(){
	int a;
	scanf("%d", &a);
	imprimir(a);
	return 0;
}


