#include<stdio.h>
main()
{
	char ch;
	printf("���������:");
	scanf("%c", &ch);
	if (ch >= 'A' && ch <= 'Z') {
		printf("�ϊ������%c\n",ch+0x20);
	}
	else {
		if (ch >= 'a' && ch <= 'z') {
			printf("�ϊ������%c\n", ch - 0x20);
		}
		else {
			("�G���[�ł�");
		}
	}
}