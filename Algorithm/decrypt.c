#include<stdio.h>

main()
{
	char s[20];
	int i;

	printf("暗号化文字列を入力して下さい＞");
	scanf("%s", &s[0]);

	i = 0;
	while (s[i] != '\0') {
		s[i]--;
		i++;
	}
	printf("複合済み文字列は、%s\n", &s[0]);
}