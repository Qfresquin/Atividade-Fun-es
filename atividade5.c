#include <stdlib.h>
#include <stdio.h>

double PA(int elemento, int nesimo, int n){
	double d=0;
	int i;
//	for(d=0,i=elemento;i<nesimo i++){
//		d+= (n*(i+nesimo))/2
//	}
	d= (n*(elemento+nesimo))/2;
	return d;
}



int main(){
	int elemento, nesimo, n;
	scanf("%d %d %d", &elemento, &nesimo , &n);
	printf ("%.2lf", PA(elemento, nesimo, n));
	return 0;
}
