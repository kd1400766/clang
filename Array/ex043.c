#include<stdio.h>
main()
{
	char str[] = "orenge";
	int cut = 0;

	while (str[cut]!='\0')
	{
		cut++;
	}
	printf("������:%s\n", str);
	printf("��������%d����\n", cut);
}