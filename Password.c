//점점 어려워지는 5개의 수식 퀴즈가 랜덤으로 출제
//맞히면 통과, 틀리면 실패

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

			printf("종료");
			exit(0);
		}
		else if (answer == num1 * num2) {

			printf("정답~!\n\n\n");
			count++;
		}
		else {

			printf("틀렸음~!\n\n\n");
		}
	}
	printf("\n\n 5개의 문제 중 >> %d << 개를 맞혔읍니다.\n", count);
	
	return 0;
}

int getRandNum(int level) {

	return rand() % (level * 7) + 1;
}

void showQ(int level, int num1, int num2) {

	printf("@@@@@@@@@@@ 문제 %d . @@@@@@@@@@\n\n", level);
	printf("	%d x %d = ?\n\n", num1, num2);
	printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@(종료: -1)\n >>");
}