#include<stdio.h>

main()
{
	int d[11] = { 10,15,18,23,28,35,47,55,68,78,96 };
	int low, high, mid, s;

	printf("探索値ｓを入力:");
	scanf("%d", &s);

	low = 0;      //lowの初期値を設定
	high = 10;    //highの初期値を設定
	while (low <= high) {         //探索の継続条件
		mid = (low + high) / 2;   //添え字の中間値を求める
		if (s == d[mid]) {        //sとデータの中間値が等しい
			break;                //ループ処理を抜ける
		}
		if (s > d[mid]) {         //sのほうがデータの中間値より大きい
			low = mid + 1;        //探索範囲の更新
		}
		else {
			high = mid - 1;
		}
	}
	if (low > high) {
		printf("見つからなかった\n");
	}
	else {
		printf("探索値%dを、d[%d]で発見！\n", s, mid);
	}
}