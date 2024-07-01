#include<stdio.h>
int main() {
	int input;
	printf("년도를 입력하세요:\n");
	scanf_s("%d", &input);

	if ((input % 4 == 0 && input % 100 != 0) || input % 400 == 0) {//4로 나눈 나머지가 0이고 100으로 나눈 나머지가 0이 아니면(!=을 이용해 표현) 또는(||을 통해 표현) 400으로 나눈 나머지가 0이면
		printf("윤년");
	}
	else //그 외에는 윤년이 아니다.
		printf("윤년이 아니다.");

	return 0;
}
