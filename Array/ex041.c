#include<stdio.h>
main()
{
	float sum, box[3];
	int i;
	sum = 0;
	for (i = 0;i < 3;i++)
	{
		printf("���������:");
		scanf("%f",&box[i]);
		sum += box[i];
	}
	printf("���v��%.2f�ł�\n���ς�%.2f�ł�\n", sum, sum / 3);
}