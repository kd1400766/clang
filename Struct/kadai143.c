#include<stdio.h>
struct fruit {
	char name[30];
	int price;
	int point;
	int number;
	int total;
};

main()
{
	struct fruit kudamono = { "peach",300,5,3,0 };
	kudamono.total = kudamono.price * kudamono.number;
	printf("���i��:\t\t%s\n", kudamono.name);
	printf("���i:\t\t%d�~\n", kudamono.price);
	printf("���E�ߓx:\t", kudamono.point);
	for (int i = 0;i < kudamono.point;i++)
	{
		printf("��");
	}
	printf("\n");
	printf("��:\t\t%d\n", kudamono.number);
	printf("���z:\t\t��%d\n", kudamono.total);
}