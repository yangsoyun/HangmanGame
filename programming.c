#include <stdio.h>

int main() {
	 int score;
	
	//����ڷκ��� ���� �Է� �ޱ�
	print("������ �Է��ϼ���(0-100): ");
	scanf("%d", &score);
	
	//switch�� �ڵ� �Է�
	switch (score / 10)
	{case 10:
	case 9:
		printf("����: A\n");
		break;
	case 8:
		printf("����: B\n");
		break;
	case 7:
		printf("����: C\n");
		break;
	case 6:
		printf("����: D\n");
		break;
	default:
		printf("����: F\n");
	}
	return 0;
}