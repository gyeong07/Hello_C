#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define MAX 10000
int main() {

	//���� �����
	//���Ͽ� � �����͸� ����
	//���Ͽ� ����� �����͸� �ҷ�����

	//fputs, fgets
	//char line[MAX];
	//FILE* file = fopen("D:\\test1.txt", "rb"); // r w a / t b
	//if (file == NULL)
	//{
	//	printf("���� ���� ����\n");
	//	return 1;
	//}
	//
	//while (fgets(line, MAX, file) != NULL)
	//{
	//	printf("%s\n\n", line);
	//}
	////������ ���� ���� ���� ���� ���¿��� � ���α׷��� ������ �����?
	////������ �ս� �߻� ����! �׷��� �׻� ������ �ݾ��ִ� ���� �ʿ�.
	//fclose(file);

	//fprintf, fscanf
	int num[6] = { 0,0,0,0,0,0 }; //��÷��ȣ
	int bonus = 0;
	char str1[MAX];
	char str2[MAX];
	FILE* file = fopen("D:\\test1.txt", "rb");
	if (file == NULL)
	{
		printf("���� ���� ����\n");
		return 1;
	}

	//�ζ�
	//fprintf(file, "%s %d %d %d %d %d %d\n", "��÷��ȣ", 1, 2, 3, 4, 5, 6);
	//fprintf(file, "%s %d\n", "���ʽ���ȣ ", 7);

	fscanf(file, "%s %d %d %d %d %d %d", str1, &num[0], &num[1], &num[2], &num[3], &num[4], &num[5]);
	printf("%s %d %d %d %d %d %d\n", str1, num[0], num[1], num[2], num[3], num[4], num[5]);

	fscanf(file, "%s %d", str2, &bonus);
	printf("%s %d\n", str2, bonus);

	fclose(file);
	return 0;
}