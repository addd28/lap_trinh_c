#include <stdio.h>
int main(){
	int A;
	printf("Nhap A=");
	scanf("%d", &A);
	if( A >= 9){
		printf("Ban nay gioi");
	}else{
		if( A >= 8){
			printf("Ban nay kha");
		}else{
			if( A >= 6){
				printf("Trung binh");
			}else{
				if( A >= 5){
					printf("YEU");
				}else{
					printf("Khong xep loai");
				}
			}
		}
	}
}
