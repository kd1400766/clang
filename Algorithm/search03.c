#include<stdio.h>

main()
{
	int d[11] = { 10,15,18,23,28,35,47,55,68,78,96 };
	int low, high, mid, s;

	printf("�T���l�������:");
	scanf("%d", &s);

	low = 0;      //low�̏����l��ݒ�
	high = 10;    //high�̏����l��ݒ�
	while (low <= high) {         //�T���̌p������
		mid = (low + high) / 2;   //�Y�����̒��Ԓl�����߂�
		if (s == d[mid]) {        //s�ƃf�[�^�̒��Ԓl��������
			break;                //���[�v�����𔲂���
		}
		if (s > d[mid]) {         //s�̂ق����f�[�^�̒��Ԓl���傫��
			low = mid + 1;        //�T���͈͂̍X�V
		}
		else {
			high = mid - 1;
		}
	}
	if (low > high) {
		printf("������Ȃ�����\n");
	}
	else {
		printf("�T���l%d���Ad[%d]�Ŕ����I\n", s, mid);
	}
}