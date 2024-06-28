#include<stdio.h>
#include<string.h>

void syojun(int tbl[], int cut);
void kojun(int tbl[], int cut);

main()
{
	int data[8] = { 6,10,8,2,9,5,1,7 }, i;
	char s[128];
	printf("ƒ\[ƒg•ûŒü‚ğ“ü—Í:");
	scanf("%s", s);
	if (strcmp(s, "¸‡") == 0) { syojun(data, 8); }
	if (strcmp(s, "~‡") == 0) { kojun(data, 8); }
	for (i = 0;i < 8;i++) {
		printf("%d", data[i]);
	}
}

void syojun(int tbl[], int cut)
{
	int i, j, w;

	for (i = 0;i < cut;i++) {
		for (j = i + 1;j < cut;j++) {
			if (tbl[i]>tbl[j]) {
				w = tbl[i];
				tbl[i] = tbl[j];
				tbl[j] = w;
			}
		}
	}
}

void kojun(int tbl[], int cut)
{
	int i, j, w;

	for (i = 0;i < cut;i++) {
		for (j = i + 1;j < cut;j++) {
			if (tbl[i] < tbl[j]) {
				w = tbl[i];
				tbl[i] = tbl[j];
				tbl[j] = w;
			}
		}
	}
}