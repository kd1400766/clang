#include<stdio.h>
#include<string.h>

#define NIN 3

struct day {
	int nen;
	int tuki;
	int hi;
};

struct profile {
	char name[20];
	struct day data;
	char blood[5];
};

main()
{
	struct profile data[NIN] =
	{
		{"rina",2002,02,20,"AB"},
		{"kanami",1970,02,17,"A"},
		{"kaori",2003,04,16,"O"}
	};
	struct profile* p;
	int i;

	for (p = data, i = 0;i < NIN;i++, p++)
	{
		if (p->data.tuki== 2)
		{
			printf("%s--%d”N%02dŒŽ%02d“ú¶ ŒŒ‰tŒ^-%sŒ^\n",
				p->name,
				p->data.nen, p->data.tuki, p->data.hi,
				p->blood);
		}
	}
}