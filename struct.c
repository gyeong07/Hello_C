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
	gameinfo1.name = "��������";
	gameinfo1.year = 2021;
	gameinfo1.price = 100;
	gameinfo1.company = "����ȸ��";

	printf("--- ���� ��� ���� ---\n");
	printf(" ���Ӹ�   : %s\n", gameinfo1.name);
	printf(" �߸ų⵵ : %d\n", gameinfo1.year);
	printf(" ����     : %d\n", gameinfo1.price);
	printf(" ���ۻ�   : %s\n", gameinfo1.company);


	//����ü�� �迭ó�� �ʱ�ȭ
	struct GameInfo gameinfo2 = { "�ʵ� ����", 2017, 100, "�ʵ�ȸ��" };
	printf("\n\n--- ���� ��� ���� ---\n");
	printf(" ���Ӹ�   : %s\n", gameinfo2.name);
	printf(" �߸ų⵵ : %d\n", gameinfo2.year);
	printf(" ����     : %d\n", gameinfo2.price);
	printf(" ���ۻ�   : %s\n", gameinfo2.company);

	//����ü �迭
	struct GameInfo gameArray[2] = {
	{ "�ʵ� ����", 2017, 100, "�ʵ�ȸ��" } ,
	{ "�ʵ� ����", 2017, 100, "�ʵ�ȸ��" } };

	//����ü ������
	struct GameInfo* gamePtr;
	gamePtr = &gameinfo1;
	/*printf("\n\n--- ���� ��� ���� ---\n");
	printf(" ���Ӹ�   : %s\n", (*gamePtr).name);
	printf(" �߸ų⵵ : %d\n", (*gamePtr).year);
	printf(" ����     : %d\n", (*gamePtr).price);
	printf(" ���ۻ�   : %s\n", (*gamePtr).company);*/
	printf("\n\n--- ���� ��� ���� ---\n");
	printf(" ���Ӹ�   : %s\n", gamePtr->name);
	printf(" �߸ų⵵ : %d\n", gamePtr->year);
	printf(" ����     : %d\n", gamePtr->price);
	printf(" ���ۻ�   : %s\n", gamePtr->company);
	

	gameinfo1.friendGame = &gameinfo2;
	printf("\n\n--- ���� ��ü�� ���� ��� ���� ---\n");
	printf(" ���Ӹ�   : %s\n", gameinfo1.friendGame->name);
	printf(" �߸ų⵵ : %d\n", gameinfo1.friendGame->year);
	printf(" ����     : %d\n", gameinfo1.friendGame->price);
	printf(" ���ۻ�   : %s\n", gameinfo1.friendGame->company);

	//typedef: �ڷ����� ���� ����
	int i = 1;
	typedef int ����;
	���� �������� = 3; // int i = 3;
	printf("��������: %d\n\n", ��������);

	typedef struct GameInfo ��������;
	�������� game1;
	game1.name = "�ѱ۰���";
	game1.year = "2015";

	GAME_INFO game2;
	game2.name = "�ѱ۰���2";
	game2.year = "2014";

	return 0;
}