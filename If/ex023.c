#include<stdio.h>
main()
{
	int s;
	printf("秒数を入力:");
	scanf("%d", &s);
	if (s <= 5000) {
		printf("%d時間%d分%d秒\n", s / 3600, (s % 3600) / 60, s % 60);
	}
	else {
		printf("エラー\n");
	}
}