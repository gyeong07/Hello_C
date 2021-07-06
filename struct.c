#include <stdio.h>

struct GameInfo
{
	char* name;
	int year;
	int price;
	char* company;

	struct GameInfo* friendGame;
};

typedef struct
{
	char* name;
	int year;
	int price;
	char* company;

	struct GameInfo* friendGame;
} GAME_INFO;

int main() {

	struct GameInfo gameinfo1;
	gameinfo1.name = "나도게임";
	gameinfo1.year = 2021;
	gameinfo1.price = 100;
	gameinfo1.company = "나도회사";

	printf("--- 게임 출시 정보 ---\n");
	printf(" 게임명   : %s\n", gameinfo1.name);
	printf(" 발매년도 : %d\n", gameinfo1.year);
	printf(" 가격     : %d\n", gameinfo1.price);
	printf(" 제작사   : %s\n", gameinfo1.company);


	//구조체를 배열처럼 초기화
	struct GameInfo gameinfo2 = { "너도 게임", 2017, 100, "너도회사" };
	printf("\n\n--- 게임 출시 정보 ---\n");
	printf(" 게임명   : %s\n", gameinfo2.name);
	printf(" 발매년도 : %d\n", gameinfo2.year);
	printf(" 가격     : %d\n", gameinfo2.price);
	printf(" 제작사   : %s\n", gameinfo2.company);

	//구조체 배열
	struct GameInfo gameArray[2] = {
	{ "너도 게임", 2017, 100, "너도회사" } ,
	{ "너도 게임", 2017, 100, "너도회사" } };

	//구조체 포인터
	struct GameInfo* gamePtr;
	gamePtr = &gameinfo1;
	/*printf("\n\n--- 게임 출시 정보 ---\n");
	printf(" 게임명   : %s\n", (*gamePtr).name);
	printf(" 발매년도 : %d\n", (*gamePtr).year);
	printf(" 가격     : %d\n", (*gamePtr).price);
	printf(" 제작사   : %s\n", (*gamePtr).company);*/
	printf("\n\n--- 게임 출시 정보 ---\n");
	printf(" 게임명   : %s\n", gamePtr->name);
	printf(" 발매년도 : %d\n", gamePtr->year);
	printf(" 가격     : %d\n", gamePtr->price);
	printf(" 제작사   : %s\n", gamePtr->company);
	

	gameinfo1.friendGame = &gameinfo2;
	printf("\n\n--- 연관 업체의 게임 출시 정보 ---\n");
	printf(" 게임명   : %s\n", gameinfo1.friendGame->name);
	printf(" 발매년도 : %d\n", gameinfo1.friendGame->year);
	printf(" 가격     : %d\n", gameinfo1.friendGame->price);
	printf(" 제작사   : %s\n", gameinfo1.friendGame->company);

	//typedef: 자료형에 별명 지정
	int i = 1;
	typedef int 정수;
	정수 정수변수 = 3; // int i = 3;
	printf("정수변수: %d\n\n", 정수변수);

	typedef struct GameInfo 게임정보;
	게임정보 game1;
	game1.name = "한글게임";
	game1.year = "2015";

	GAME_INFO game2;
	game2.name = "한글게임2";
	game2.year = "2014";

	return 0;
}