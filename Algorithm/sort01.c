#include<stdio.h>
#define SIZE 5  //�z��̃T�C�Y

main()
{
	int d[SIZE] = { 30,7,25,16,10 };
	int i, j, w;

	printf("�\�[�g�O\n");
	for (i = 0;i < SIZE;i++) {
		printf("d[%d]:%d\n", i, d[i]);
	}

	//��{�I��@(����)
	for (i = 0;i < SIZE - 1;i++) {
		for (j = i + 1;j < SIZE;j++) {
			if (d[i] > d[j]) {
				w = d[i];
				d[i] = d[j];
				d[j] = w;
			}
		}
	}

	printf("\n�\�[�g��\n");
	for (i = 0;i < SIZE;i++) {
		printf("d[%d]:%d\n", i, d[i]);
	}
}