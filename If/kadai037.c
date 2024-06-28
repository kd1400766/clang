#include<stdio.h>
main()
{
	int ch;
	printf("０から１００までの整数？");
	scanf("%d", &ch);
	if (ch >= 90) {
		printf("その数値の判定結果は「５」です\n");
	}
	else {
		if (ch >= 80) {
			printf("その数値の判定結果は「４」です\n");
		}
		else {
			if (ch >= 50 ) {
				printf("その数値は判定結果は「３」です\n");
			}
			else {
				if (ch >= 30) {
					printf("その数値の判定結果は「２」です\n");
				}
				else {
					printf("その数値の判定結果は「１」です\n");
				}
			}
		}
	}
}