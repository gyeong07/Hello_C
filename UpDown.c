#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {

	srand(time(NULL));
	int num = rand() % 100 + 1;
	int ans = 0;
	int chance = 5;

	while (chance > 0) {
		printf("남은 기회 %d번 \n", chance--);
		printf("숫자를 입력: ");
		scanf_s("%d", &ans);

		if (ans == num) {
			printf("맞혔따!");
			break;
		}

		else if (ans > num) {
			printf("Down~~ \n\n");
		}

		else if (ans < num) {
			printf("Up~~ \n\n");
		}

		else {
			printf("알 수 없느 ㄴ오ㄹ~");
			break;
		}

		if (chance == 0) {
			printf("기회 소진~ 실패~");
			break;
		}

	}

	return 0;
}
