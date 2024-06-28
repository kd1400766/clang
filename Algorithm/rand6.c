#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	int player,cpu;

	cpu = ;

	printf("何を出しますか？\n(1:グー 2:チョキ 3:パー)>");
	scanf("%d", &player);
	
	srand(time(0));
	k = rand() % 100 + 1;
	if (k <= 30) {
		printf("かいしんのいちげき！");
	}
	else {
		printf("通常攻撃");
	}
}