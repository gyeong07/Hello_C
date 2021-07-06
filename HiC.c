#include <stdio.h>

int main(void) {
	int year;
	printf("지금은 몇년도인가요?\n:");
	scanf_s("%d", &year);

	char why[256];
	printf("각오가 있나요?\n:");
	scanf_s("%s", &why, sizeof(why));

	printf("올해는 %d년 입니다.\n", year);
	printf("이번 각오는 \'%s\' 라고 합니다.", why);

	return 0;
}