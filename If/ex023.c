#include<stdio.h>
main()
{
	int s;
	printf("�b�������:");
	scanf("%d", &s);
	if (s <= 5000) {
		printf("%d����%d��%d�b\n", s / 3600, (s % 3600) / 60, s % 60);
	}
	else {
		printf("�G���[\n");
	}
}