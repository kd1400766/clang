#include<stdio.h>
main()
{
	char ch;                          //�����^�ϐ�
	printf("�������:");�@�@�@�@�@�@�@//���͂𑣂��\��
	scanf("%c", &ch);�@�@�@�@�@�@�@�@
	if (ch == '2') {
		printf("�ŏI����28���ł�\n");
	}
	else {
		if (ch == '4' || ch == '6' || ch == '9' || ch == '11') {
			printf("�ŏI����30���ł�\n");
		}
		else {
			printf("�ŏI����31���ł�\n");
		}
	}
}