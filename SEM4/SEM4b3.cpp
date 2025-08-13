#include <stdio.h>
int main(){
	int n, i=1, s=0;
	printf("Nhap n:");
	scanf("%d", &n);
	
	while ( i<n){
		if( n%i == 0){
			s = s+i;
		}
		i++;
	}
	
	if (s == n){
		printf("So %d la so hoan hao",n);
	}else{
		printf("So %d khong la so hoan hao",n);
	}
}
