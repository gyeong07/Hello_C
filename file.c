#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define MAX 10000
int main() {

	//파일 입출력
	//파일에 어떤 데이터를 저장
	//파일에 저장된 데이터를 불러오기

	//fputs, fgets
	//char line[MAX];
	//FILE* file = fopen("D:\\test1.txt", "rb"); // r w a / t b
	//if (file == NULL)
	//{
	//	printf("파일 열기 실패\n");
	//	return 1;
	//}
	//
	//while (fgets(line, MAX, file) != NULL)
	//{
	//	printf("%s\n\n", line);
	//}
	////파일을 열고 나서 닫지 않은 상태에서 어떤 프로그램에 문제가 생기면?
	////데이터 손실 발생 가능! 그래서 항상 파일은 닫아주는 습관 필요.
	//fclose(file);

	//fprintf, fscanf
	int num[6] = { 0,0,0,0,0,0 }; //추첨번호
	int bonus = 0;
	char str1[MAX];
	char str2[MAX];
	FILE* file = fopen("D:\\test1.txt", "rb");
	if (file == NULL)
	{
		printf("파일 열기 실패\n");
		return 1;
	}

	//로또
	//fprintf(file, "%s %d %d %d %d %d %d\n", "추첨번호", 1, 2, 3, 4, 5, 6);
	//fprintf(file, "%s %d\n", "보너스번호 ", 7);

	fscanf(file, "%s %d %d %d %d %d %d", str1, &num[0], &num[1], &num[2], &num[3], &num[4], &num[5]);
	printf("%s %d %d %d %d %d %d\n", str1, num[0], num[1], num[2], num[3], num[4], num[5]);

	fscanf(file, "%s %d", str2, &bonus);
	printf("%s %d\n", str2, bonus);

	fclose(file);
	return 0;
}