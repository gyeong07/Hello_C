#include <stdio.h>
#include <time.h>
//10������ ���� �ٸ� ���� (�� ī�� 2�徿)
//����ڷκ��� 2���� �Է°��� �޾Ƽ� -> ���� ���� ã���� ī�� ������
//��� ���� ���� ã���� ���� ����
//�� ���� Ƚ�� �˷��ֱ�

int arrayAnimal[4][5]; //20���� ī�� ����
int checkAnimal[4][5];
char* strAnimal[10];

void initAnimalArray();
void initAnimalName();
void shuffleAnimal();
int getEmptyPosition();
int conv_pos_x(int x);
int conv_pos_y(int y);
void printAnimals();
void printQuestion();


int main() {

	srand(time(NULL));

	initAnimalArray();
	initAnimalName();

	shuffleAnimal();

	int failCount = 0;

	while (1) {
		int select1 = 0;
		int select2 = 0;

		printAnimals();
		printQuestion();
		printf("������ ī�带 2�� ������:  ");
		scanf_s("%d %d", &select1, &select2);

		if (select1 == select2)
			continue;

		//��ǥ�� �ش��ϴ� ī�带 ������ ���� ������ �Ȱ����� Ȯ��
		int firstSelcet_x = conv_pos_x(select1);
		int firstSelcet_y = conv_pos_y(select1);

		int secondSelcet_x = conv_pos_x(select2);
		int secondSelcet_y = conv_pos_y(select2);

		//���� ������ ���
		//ī�尡 �������� �ʾҴ��� && �� ������ ������
		if ((checkAnimal[firstSelcet_x][firstSelcet_y] == 0
			&& checkAnimal[secondSelcet_x][secondSelcet_y] == 0)

			&& (arrayAnimal[firstSelcet_x][firstSelcet_y] == arrayAnimal[secondSelcet_x][secondSelcet_y]))
		{
			printf("\n\n ����! : %s �߰�\n\n", strAnimal[arrayAnimal[firstSelcet_x][firstSelcet_y]]);
			checkAnimal[firstSelcet_x][firstSelcet_y] == 1;
			checkAnimal[secondSelcet_x][secondSelcet_y] == 1;
		}
		else 
		{
			printf("\n\n ��! (Ʋ�Ȱų�, �̹� ������ ī���Դϴ�.)\n");
			printf("%d : %s\n", select1, strAnimal[arrayAnimal[firstSelcet_x][firstSelcet_y]]);
			printf("%d : %s\n", select2, strAnimal[arrayAnimal[secondSelcet_x][secondSelcet_y]]);
			printf("\n\n");

			failCount++;
		}
		//��� ������ ã�Ҵ��� ����, 1:��/ 0:����
		if (foundAllAnimals() == 1)
		{
			printf("\n\n �����մϴ�! ��� ������ �� ã�ҳ׿�! \n");
			printf("���ݱ��� �� %d�� �Ǽ��Ͽ����ϴ�.\n", failCount);
			break;
		}
	}

	return 0;
}

void initAnimalArray() {

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 5; j++) {
			arrayAnimal[i][j] = -1;
		}
	}
}

void initAnimalName() {
	strAnimal[0] = "�䳢";
	strAnimal[1] = "�ϸ�";
	strAnimal[2] = "������";
	strAnimal[3] = "�����";
	strAnimal[4] = "����";

	strAnimal[5] = "��";
	strAnimal[6] = "��";
	strAnimal[7] = "ȣ����";
	strAnimal[8] = "���մ�";
	strAnimal[9] = "�̿���";
}

void shuffleAnimal() {

	//������
	//������
	//������
	//������

	for (int i = 0; i < 10; i++) 
	{
		for (int j = 0; j < 2; j++) 
		{
			int pos = getEmptyPosition();
			int x = conv_pos_x(pos);
			int y = conv_pos_y(pos);

			arrayAnimal[x][y] = i;
		}
	}
}

//��ǥ���� �� ���� ã��
int getEmptyPosition() {
	while (1)
	{
		int randPos = rand() % 20;
		int x = conv_pos_x(randPos);
		int y = conv_pos_y(randPos);

		if (arrayAnimal[x][y] == -1)
		{
			return randPos;
		}
	}
	return 0;
}

int conv_pos_x(int x) 
{
	return x / 5;
}

int conv_pos_y(int y) 
{
	return y % 5;
}

void printAnimals() 
{
	printf("\n==========��==========��=========��========\n\n");
	for (int i = 0; i < 4; i++) 
	{
		for (int j = 0; j < 5; j++) 
		{
			printf("%8s", strAnimal[arrayAnimal[i][j]]);
		}
		printf("\n");
	}
	printf("\n===========================================\n\n");
}

void printQuestion() {
	printf("\n\n(����)\n");
	int seq = 0;

	for (int i = 0; i < 4; i++) 
	{
		for (int j = 0; j < 5; j++) 
		{
			//ī�带 ����� ������ �������� ���� �̸�
			if (checkAnimal[i][j] != 0) 
			{
				printf("%8s", strAnimal[arrayAnimal[i][j]]);
			}
			//���� ������ ��������(or ���� X) ��ġ ����
			else 
			{
				printf("%8d", seq);
			}
			seq++;
		}
		printf("\n");
	}
}

int foundAllAnimals()
{
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 5; j++) {
			if (checkAnimal[i][j] == 0)
			{
				return 0;
			}
		}
	}

	return 1; //��� �� ã��
}