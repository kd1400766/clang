#include<stdio.h>

main()
{
	char str[200];
	printf("����������:");
	while (gets(str) != NULL) {
		printf("%s\n", str);
		printf("����������:");
	}
}