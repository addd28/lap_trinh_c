#include <stdio.h>
int main(){
	int n, i=1;
	printf("Nhap n:");
	scanf("%d", &n);
	
	while(i<n){
		if ( i % 2 != 0){
			printf("Cac so le la: %d\n", i);
		}
		i++;
	}
}
