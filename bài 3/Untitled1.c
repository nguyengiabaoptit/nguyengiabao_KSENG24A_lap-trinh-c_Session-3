#include <stdio.h>

int main() {
	float r,pi = 3.14;
	printf("nhap vao ban kinh:");
	scanf("%f", &r);
	float c = 2 * pi * r;
	printf("chu vi hinh tron la:%.2f \n", c);
	float s = pi * r * r;
	printf("dien tich hinh tron la:%.2f \n", s);

	return 0;
}
