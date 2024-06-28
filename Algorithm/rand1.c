#include<stdio.h>
#include<stdlib.h>    //乱数を使うときに必要です
#include<time.h>　　　//乱数を使うときに必要です

main()
{
	int kazu;

	srand(time(0));
	kazu = rand();
	printf("発生した乱数は%dです\n", kazu);

	kazu = rand();
	printf("発生した乱数は%dです\n", kazu);

	kazu = rand();
	printf("発生した乱数は%dです\n", kazu);
}