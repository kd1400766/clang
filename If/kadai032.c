#include<stdio.h>
main()
{
	int a;
	
	printf("����:");
	scanf("%d", &a);

	if (a %= 2) {

		printf("�");
	}
	else {
		printf("����");
	}
}