#include<stdio.h>

main()
{
	char* p = "peach";
	char data1[10] = "banana", p_data1;
	char data2[10], * p_data2;

	//�|�C���^�ϐ��֐擪�A�h���X����
	p_data1 = data1;
	p_data2 = data2;

/*
	while (*p_data1)  //'\0'�łȂ��ԃ��[�v
	{
		*p_data2 = *p_data1;
		p_data1++;//���̃f�[�^��
		p_data2++;//���̃f�[�^��
	}
*/

	while (*p_data2++ = *p_data1++);

	//�|�C���^�ϐ��֐擪�A�h���X����
	p_data1 = data1;
	while (*p_data1++ = *p++);

	//���ʕ\��
	p_data1 = data1;
	p_data2 = data2;
	printf("data1[ ]=%s\n",p_data1);
	printf("data2[ ]=%s\n",p_data2);
}