#include <stdio.h>
#include <time.h>
//5������ �����
//�ƹ� Ű�� ������ �������� ����� �̱�
//5���� ��� ������ �ؼ� ������ Ű��� ��
//����� �ߺ� �̱� ����

//����� ����
//�̸�, ����, ����, Ű��� ���̵�(����)

typedef struct {
	char* name;
	int age;
	char* character;
	int level;
} CAT;


int collection[5] = { 0,0,0,0,0 }; //������� ������ �����

CAT cats[5]; //��ü ����� ����Ʈ

void initCats(); //����� ���� �ʱ�ȭ
void printCat(int selected);


int main() {

	srand(time(NULL));

	initCats();
	while (1) 
	{
		printf("�αٵα�~! ��� ����̰� ���ñ�~!\n�ƹ� Ű�� ������ Ȯ��!");
		getchar();

		int selected = rand() % 5; //0~4 ������ ���� ��ȯ
		printCat(selected); //���� ����� ���� ���
		collection[selected] = 1; //���� ����� ó��

		int collectAll = checkCollection();
		if (collectAll == 1)
		{
			break;
		}

	}
	return 0;
}

void initCats() {
	cats[0].name = "������";
	cats[0].age = 5;
	cats[0].character = "������";
	cats[0].level = 1;

	cats[1].name = "��Ȳ��";
	cats[1].age = 1;
	cats[1].character = "��Ȳ��";
	cats[1].level = 2;
	
	cats[2].name = "�����";
	cats[2].age = 3;
	cats[2].character = "�����";
	cats[2].level = 3;

	cats[3].name = "�ʷ���";
	cats[3].age = 2;
	cats[3].character = "�ʷϻ�";
	cats[3].level = 4;

	cats[4].name = "�Ķ���";
	cats[4].age = 4;
	cats[4].character = "�Ķ���";
	cats[4].level = 5;
}

void printCat(int selected)
{
	printf("\n\n---����� �� ������� ����!---\n\n");
	printf("�̸�: %s\n", cats[selected].name);
	printf("����: %d\n", cats[selected].age);
	printf("Ư¡: %s\n", cats[selected].character);
	printf("����: ");
	
	for (int i = 0; i < cats[selected].level; i++)
	{
		printf("%s", "��");
	}
	printf("\n\n");
}

int checkCollection() 
{
	//���� ������ ����� ��� ���
	//�� ��Ҵ����� ���� ��ȯ
	int collectAll = 1;

	printf("\n\n--- ������ ����� ��� --- \n\n");
	for (int i = 0; i < 5; i++) {
		if (collection[i] == 0)
		{
			printf("%10s", "(�� �ڽ�)");
			collectAll = 0;
		}
		else
		{
			printf("%10s", cats[i].name);
		}
	}
	printf("\n===================================\n\n");

	if (collectAll)
	{
		printf("\n\n�����մϴ�! ��� ����̸� �� ������ϴ�!");
	}
	return collectAll;
}