#include <stdio.h>

int main() {
	 int score;
	
	//사용자로부터 점수 입력 받기
	print("점수를 입력하세요(0-100): ");
	scanf("%d", &score);
	
	//switch문 코드 입력
	switch (score / 10)
	{case 10:
	case 9:
		printf("학점: A\n");
		break;
	case 8:
		printf("학점: B\n");
		break;
	case 7:
		printf("학점: C\n");
		break;
	case 6:
		printf("학점: D\n");
		break;
	default:
		printf("학점: F\n");
	}
	return 0;
}