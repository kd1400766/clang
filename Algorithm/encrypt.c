#include<stdio.h>

main()
{
	char s[20];
	int i;

	printf("���������͂��ĉ�������");
	scanf("%s", &s[0]);

	i = 0;
	while (s[i] != '\0') {
		s[i]=s[i]+1;
		i++;
	}
	printf("�Í���������́A%s\n", &s[0]);
}