//����� 4.1.1.
#include<stdio.h>
#include<Windows.h>

void print1_10() { //�������, ��������� ����������� ����� �� 1 �� 10; ��������� �� ������������� ��� ������
	int a = 1;
	do {
		printf("%d ", a);
		a += 1;
	} while (a <= 10);
}

void print10_1() {
	int a = 10;
	do {
		printf("%d ", a);
		a -= 1;
	} while (a >= 1);
}

void print5Odds() {
	int a = 1;
	int i = 1;
	do {
		printf("%d ", a);
		a += 2;
		i += 1;
	} while (i <= 5);
}

void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int n;
	do {
		printf("\n");
		printf("\n");
		printf("�������� ������ ��� ��������: \n");
		printf("1: ������� ����� �� 1 �� 10 \n");
		printf("2: ������� ����� �� 10 �� 1 \n");
		printf("3: ������� 5 ������ �������� �����, ������� � 1 \n");
		printf("\n");
		printf("0: ����� �� ��������� \n");
		scanf_s("%d", &n);
		switch (n) {
		case 1:
			print1_10();
			break;
		case 2:
			print10_1();
			break;
		case 3:
			print5Odds();
			break;
		}
	} while (n != 0);
}