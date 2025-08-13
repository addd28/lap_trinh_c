#include <stdio.h>
int main(){
	int n, ndao = 0, dvi;
	printf("Nhap n:");
	scanf("%d", &n);
	
	while(n != 0){
		dvi = n % 10;
		ndao = ndao * 10 + dvi;
		n = n/10;
	}
	printf("So nghich dao la: %d", ndao);
}
