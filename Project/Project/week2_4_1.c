#include <stdio.h>

/* ������(enum) : ������ ���� �� �ִ� ������ �̸� ������ ���� �ڷ���*/
/*             : ��� ������ ����� �������� ���� */

enum type {tube, lcd, plasma, projection};

int main(void) {
	enum type num;
	while (1) {
		printf("TV ����(�ڵ�) : ");
		scanf_s("%d", &num);
		switch (num) {
		case tube:
			printf("����� TV ����!\n\n");
			break;
		case lcd:
			printf("LCD TV ����!\n\n");
			break;
		case plasma:
			printf("PDP TV ����!\n\n");
			break;
		case projection:
			printf("�������� TV ����!\n\n");
			break;
		default:
			printf("�߸� ������! \n\n");
			break;
		}
	}
}