#include<stdio.h>
main()
{
	int num;
	
	printf("��������:");
	scanf("%d", &num);
	while ( num>0) {
		num--;
		printf("*");
	}
}