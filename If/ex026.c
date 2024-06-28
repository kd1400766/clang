#include<stdio.h>
main()
{
	char ch;                          //整数型変数
	printf("月を入力:");　　　　　　　//入力を促す表示
	scanf("%c", &ch);　　　　　　　　
	if (ch == '2') {
		printf("最終日は28日です\n");
	}
	else {
		if (ch == '4' || ch == '6' || ch == '9' || ch == '11') {
			printf("最終日は30日です\n");
		}
		else {
			printf("最終日は31日です\n");
		}
	}
}