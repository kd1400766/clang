#include<stdio.h>
main()
{
	int no1, no2, no3,goukei;
	printf("������3����:");
	scanf("%d%d%d", &no1,&no2,&no3);
	goukei = no1 + no2 + no3;
	float heikin;
	heikin = (float)goukei/3;
	printf("���v=%d ����=%.2f\n", goukei,heikin);
}