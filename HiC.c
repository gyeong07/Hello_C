#include <stdio.h>

int main(void) {
	int year;
	printf("������ ��⵵�ΰ���?\n:");
	scanf_s("%d", &year);

	char why[256];
	printf("������ �ֳ���?\n:");
	scanf_s("%s", &why, sizeof(why));

	printf("���ش� %d�� �Դϴ�.\n", year);
	printf("�̹� ������ \'%s\' ��� �մϴ�.", why);

	return 0;
}