#include<stdio.h>
main()
{
	int ch;
	printf("�O����P�O�O�܂ł̐����H");
	scanf("%d", &ch);
	if (ch >= 90) {
		printf("���̐��l�̔��茋�ʂ́u�T�v�ł�\n");
	}
	else {
		if (ch >= 80) {
			printf("���̐��l�̔��茋�ʂ́u�S�v�ł�\n");
		}
		else {
			if (ch >= 50 ) {
				printf("���̐��l�͔��茋�ʂ́u�R�v�ł�\n");
			}
			else {
				if (ch >= 30) {
					printf("���̐��l�̔��茋�ʂ́u�Q�v�ł�\n");
				}
				else {
					printf("���̐��l�̔��茋�ʂ́u�P�v�ł�\n");
				}
			}
		}
	}
}