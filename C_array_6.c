#include <stdio.h>

int main(void)
{
	char name[50];
	printf("이름을 입력하세요. : "); //이름 입력받기.
	scanf_s("%s", name, sizeof(name));

	printf("%s", name); //이름 출력하기.

	return 0;
}