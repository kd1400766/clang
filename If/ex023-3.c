#include<stdio.h>
main()
{
	int no1, no2, no3;
	
		printf("���Z�q�����:");
		scanf("%d", &no1);
		printf("�Q�̐��������:");
		scanf("%d%d", &no2, no3);
		
		if (no1 == 1) {
			printf("%d", no2 + no3);
		}
		else {
			if (no1 == 2) {
				printf("%d", no2 - no3);
			}

			else {
				if (no1 == 3) {
					printf("%d", no2 * no3);
				}


				else {
					if (no1 == 4) {
						printf("%d", no2 / no3);
					}
				}
			}
		}

}