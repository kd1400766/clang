#include<stdio.h>
main()
{
	int s1,s2, m, h;

	printf("秒数を入力：");
	scanf("%d", &s1);

	if (s1 <= 5000) {
		if (s1 >= 0) {
			h = s1 / 3600;
			s1 = s1 % 3600;
			m = s1 / 60;
			s2 = s1 % 60;
			printf("%d時間%d分%d秒です", h, m, s2);
		}
		else {
			printf("入力は0です");
		}
	else {
		printf("入力は5000までです");
	   }
	}
}