#include<stdio.h>

main()
{
	char s[21],k[21];
	int i;

	printf("���������͂��ĉ�������");
	scanf("%s", &s[0]);
	printf("�����L�[����́�");
	scanf("%s", &k[0]);

	for (i = 0;s[i] != '\0';i++) {
		s[i] = s[i] - (k[i]-'0');
	}
	printf("������������́A%s\n", &s[0]);
}