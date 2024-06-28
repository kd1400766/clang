#include<stdio.h>

main()
{
	char s[20];
	int i;

	printf("ˆÃ†‰»•¶š—ñ‚ğ“ü—Í‚µ‚Ä‰º‚³‚¢„");
	scanf("%s", &s[0]);

	i = 0;
	while (s[i] != '\0') {
		s[i]--;
		i++;
	}
	printf("•¡‡Ï‚İ•¶š—ñ‚ÍA%s\n", &s[0]);
}