#include<stdio.h>
main()
{
	int s1,s2, m, h;

	printf("•b”‚ğ“ü—ÍF");
	scanf("%d", &s1);

	if (s1 <= 5000) {
		if (s1 >= 0) {
			h = s1 / 3600;
			s1 = s1 % 3600;
			m = s1 / 60;
			s2 = s1 % 60;
			printf("%dŠÔ%d•ª%d•b‚Å‚·", h, m, s2);
		}
		else {
			printf("“ü—Í‚Í0‚Å‚·");
		}
	else {
		printf("“ü—Í‚Í5000‚Ü‚Å‚Å‚·");
	   }
	}
}