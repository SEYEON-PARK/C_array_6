#include <stdio.h>

int main(void)
{
	char name[50];
	printf("�̸��� �Է��ϼ���. : "); //�̸� �Է¹ޱ�.
	scanf_s("%s", name, sizeof(name));

	printf("%s", name); //�̸� ����ϱ�.

	return 0;
}