#include<stdio.h>

main()
{
	char* p = "peach";
	char data1[10] = "banana", p_data1;
	char data2[10], * p_data2;

	//ポインタ変数へ先頭アドレスを代入
	p_data1 = data1;
	p_data2 = data2;

/*
	while (*p_data1)  //'\0'でない間ループ
	{
		*p_data2 = *p_data1;
		p_data1++;//次のデータへ
		p_data2++;//次のデータへ
	}
*/

	while (*p_data2++ = *p_data1++);

	//ポインタ変数へ先頭アドレスを代入
	p_data1 = data1;
	while (*p_data1++ = *p++);

	//結果表示
	p_data1 = data1;
	p_data2 = data2;
	printf("data1[ ]=%s\n",p_data1);
	printf("data2[ ]=%s\n",p_data2);
}