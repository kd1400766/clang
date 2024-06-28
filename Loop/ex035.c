#include<stdio.h>
main()
{
	int su,goukei;
	goukei = 0;

	while (1); //–³ŒÀƒ‹[ƒv
	{
		printf("”‚ğ“ü‚ê‚Ä:");
		scanf("%d", & su);
		if (su == -999) {
			break;
		}
		goukei += su;
	}

	printf("‡Œv=%d\n", goukei);
}