#include <stdio.h>
int main(){
	float A, B, x;
	printf("Nhap vao A= ");
	scanf("%f", &A);
	printf("Nhap vao B= ");
	scanf("%f", &B);
	if( A != 0){
		x = -B/A;
		printf("Phuong trinh co nghiem x= %f", x);
	}else{
		if ( B == 0){
			printf("Phuong trinh vo so nghiem");
		}else{
			printf("Phuong trinh vo nghiem");
		}
	}
}
