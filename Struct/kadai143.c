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
	printf("è§ïiñº:\t\t%s\n", kudamono.name);
	printf("âøäi:\t\t%dâ~\n", kudamono.price);
	printf("Ç®ëEÇﬂìx:\t", kudamono.point);
	for (int i = 0;i < kudamono.point;i++)
	{
		printf("Åö");
	}
	printf("\n");
	printf("å¬êî:\t\t%d\n", kudamono.number);
	printf("ã‡äz:\t\tÅè%d\n", kudamono.total);
}