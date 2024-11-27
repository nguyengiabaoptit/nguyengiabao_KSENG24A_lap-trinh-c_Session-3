#include <stdio.h>

int main() {
	float d, h, s;
	printf("nhap vao do dai canh day cua tam giac:");
	scanf("%f", &d);
	printf("nhap vao chieu cao cua tam giac:");
	scanf("%f, &h");
    s =(d * h) / 2;
	printf("dien tich cua tam giac la: %.2f \n", s);
	
	return 0;
}
