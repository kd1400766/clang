#include<stdio.h>
main()
{
	char a;
	printf("���������:");
	scanf("%c", &a);

	if (a >= 'A' && a <= 'Z' || a >= 'a' && a <= 'z') {
		printf("�A���t�@�x�b�g�ł�\n");
	}
	else {
		if (a >= '0' && a <= '9') {
			printf("�����ł�\n");
		}
		else {
			printf("���̑��̕����ł�\n");
		}
	}
}