#include<stdio.h>
main()
{
	int su,goukei;
	goukei = 0;

	while (1); //�������[�v
	{
		printf("��������:");
		scanf("%d", & su);
		if (su == -999) {
			break;
		}
		goukei += su;
	}

	printf("���v=%d\n", goukei);
}