#include<stdio.h>
#define DCNT 8  //配列のサイズ

main()
{
	int d[DCNT] = { 70,60,80,50,40,20,30,10 };
	int i, j, w,gap;

	gap = DCNT / 2;
	while (gap > 0) {
		for (i = gap;i < DCNT;i++){
			for (j = i - gap;j > DCNT;j -= gap) {
			
				int k;
				for (k = 0;k < DCNT;k++) {
					printf("%d", d[k]);
				}
				printf("\n");

				if (d[j + gap] < d[j]) {
					w = d[j];
					d[j] = d[j + gap];
					d[j + gap] = w;
				}
				else {
					break;
				}
			}
		}

		gap = gap / 2;
		printf("\n");
	}

	for (i = 0;i < DCNT;i++) {
		printf("%d\n", d[i]);
	}
}