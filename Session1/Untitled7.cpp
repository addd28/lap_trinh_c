#include <stdio.h>
int main(){
	float dien, x;
	printf("Nhap so dien= ");
	scanf("%f", &dien);
	if ( dien <= 50){
		x = dien*1678;
		printf("So tien dien la: %f", x);
	}else{
		if ( dien <= 100){
		 x = 50*1678 +((dien-50)*1734);
		 printf("So tien dien la: %f", x);
		}else{
			if ( dien <= 200){
		  x = 50*1678 + 50*1734 + ((dien - 100)*2014);
		  printf("So tien dien la: %f", x);
			}else{
				x = 50*1678 + 50*1734 + 100*2014 + ((dien-200)*2536);
				printf("So tien dien la: %f", x);
			}
		}
	}
}
