#include<stdio.h>
main()
{
	float no1,no2,no3,goukei;
	printf("1�ڂ̎���:");
	scanf("%f", &no1);
	printf("2�ڂ̎���:");
	scanf("%f", &no2);
	printf("3�ڂ̎���:");
	scanf("%f", &no3);
	goukei = no1 + no2 + no3;
	printf("���v=%.2f ����=%.2f\n", goukei, goukei / 3);
}