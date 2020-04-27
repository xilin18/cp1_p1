#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int a, b, diff;
	int* pa, * pb;
	printf("input integer : ");
	scanf("%d %d", &a, &b);
	pa = &a;
	pb = &b;
	printf("difference : ");
	if (*pa > * pb)
		diff = *pa - *pb;
	else
		diff = *pb - *pa;

	printf("difference : %d\n", diff);
	printf("input1 = %d address = %d\n", *pa, pa);
	printf("input2 = %d address = %d\n", *pb, pb);
}