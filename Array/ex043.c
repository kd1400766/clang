#include<stdio.h>
main()
{
	char str[] = "orenge";
	int cut = 0;

	while (str[cut]!='\0')
	{
		cut++;
	}
	printf("文字列:%s\n", str);
	printf("文字数は%d文字\n", cut);
}