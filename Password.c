//���� ��������� 5���� ���� ��� �������� ����
//������ ���, Ʋ���� ����

#include <stdio.h>
#include <time.h>

int getRandNum(int level);
void showQ(int level, int num1, int num2);

int main(void) {

	srand(time(NULL));
	int count = 0;
	
	for (int i = 1; i <= 5; i++) {

		int num1 = getRandNum(i);
		int num2 = getRandNum(i);
		showQ(i, num1, num2);

		int answer = -1;
		scanf_s("%d", &answer);
		if (answer == -1) {

			printf("����");
			exit(0);
		}
		else if (answer == num1 * num2) {

			printf("����~!\n\n\n");
			count++;
		}
		else {

			printf("Ʋ����~!\n\n\n");
		}
	}
	printf("\n\n 5���� ���� �� >> %d << ���� �������ϴ�.\n", count);
	
	return 0;
}

int getRandNum(int level) {

	return rand() % (level * 7) + 1;
}

void showQ(int level, int num1, int num2) {

	printf("@@@@@@@@@@@ ���� %d . @@@@@@@@@@\n\n", level);
	printf("	%d x %d = ?\n\n", num1, num2);
	printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@(����: -1)\n >>");
}