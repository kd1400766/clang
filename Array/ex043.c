#include<stdio.h>
main()
{
	char str[] = "orenge";
	int cut = 0;

	while (str[cut]!='\0')
	{
		cut++;
	}
	printf("•¶š—ñ:%s\n", str);
	printf("•¶š”‚Í%d•¶š\n", cut);
}