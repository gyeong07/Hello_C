#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {

	srand(time(NULL));
	int num = rand() % 100 + 1;
	int ans = 0;
	int chance = 5;

	while (chance > 0) {
		printf("���� ��ȸ %d�� \n", chance--);
		printf("���ڸ� �Է�: ");
		scanf_s("%d", &ans);

		if (ans == num) {
			printf("������!");
			break;
		}

		else if (ans > num) {
			printf("Down~~ \n\n");
		}

		else if (ans < num) {
			printf("Up~~ \n\n");
		}

		else {
			printf("�� �� ���� ������~");
			break;
		}

		if (chance == 0) {
			printf("��ȸ ����~ ����~");
			break;
		}

	}

	return 0;
}
