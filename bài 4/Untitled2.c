#include <stdio.h>

int main() {
	float diemtoan, diemanh, diemvan, tongdiem, diemtb;
	printf("moi ban nhap vao diem anh:");
	scanf("%f", &diemanh);
	printf("moi ban nhap vao diem toan:");
	scanf("%f", &diemtoan);
	printf("moi ban nhap vao diem van:");
	scanf("%f", &diemvan);
	tongdiem = diemtoan + diemanh + diemvan;
	diemtb = tongdiem / 3;
	printf("tongdiem = %.1f \n", tongdiem);
	printf("diemtb = %.1f \n", diemtb);
	
	return 0;
}
