#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//비밀번호를 입력 받아서
//맞는 경우 -> 비밀 일기를 읽어와서 보여주고, 계속 작성
//틀린 경우 -> 경고 메시지를 표시하고 종료

#define MAX 10000

int main() {

	char line[MAX]; //파일에서 불러온 내용을 저장할 변수
	char contents[MAX]; //일기장에 입력할 내용
	char password[20]; //비밀번호
	char c; //비밀번호 입력 할 때 키값 확인용

	printf("'비밀일기'에 오신 것을 환영합니다\n");
	printf("비밀번호를 입력하세요: ");

	int i = 0;
	while (1)
	{
		c = getch();
		if (c == 13)//엔터 -> 비밀번호 입력 종료
		{
			password[i] = '\0';
			break;
		}
		else
		{
			printf("*");
			password[i] = c;
		}
		i++;
	}

	//비밀번호: skehzheld
	printf("\n\n=== 비밀번호 확인 중 ...\n\n");
	if (strcmp(password, "skehzheld") == 0)
	{
		printf("=== 비밀번호 확인 완료 === \n\n");
		char* fileName = "D:\\secretdiary.txt";
		FILE* file = fopen(fileName, "a+b"); //파일이 없으면 생성, 파일이 있으면 append를 한다(뒤에서 내용을 추가)
		if (file == NULL)
		{
			printf("파일 열기 실패\n");
			return 1;
		}

		while (fgets(line, MAX, file) != NULL)
		{
			printf("%s", line);
		}
		printf("\n\n 내용을 계속 작성하세요! 종료하시려면 EXIT를 입력하세요 \n\n");

		while (1)
		{
			scanf("%[^\n]", contents);//새 줄(\n)이 나오기 전까지 읽어들임
			getchar(); //엔터 입력 플러시처리

			if (strcmp(contents, "EXIT") == 0)
			{
				printf("비밀일기 입력을 종료합니다\n\n");
				break;
			}
			fputs(contents, file);
			fputs("\n", file);//엔터를 위에서 무시처리 했으므로 임의로 추가
		}
		fclose(file);
	}
	else
	{
		printf("=== 비밀번호가 틀렸어요 ===\n");
		printf("비밀일기 종료.");
	}
	return 0;
}