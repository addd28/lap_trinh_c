#include <stdio.h>
int main(){
	int a,b,c;
	printf("Nhap canh a= ");
	scanf("%d", &a);
	printf("Nhap canh b= ");
	scanf("%d", &b);
	printf("Nhap canh c= ");
	scanf("%d", &c);
	if ( a>0 && b>0 && c>0 && a+b>c && b+c>a && c+a>b){
		printf("Tao thanh tam giac");
	}else{
		printf("Khong tao thanh tam giac");
	}
}
