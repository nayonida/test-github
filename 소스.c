/*#include<stdio.h>
int main() {
	int input;
	printf("년도를 입력하세요:\n");
	scanf_s("%d", &input);

		if ((input % 4 == 0 && input % 100 != 0) || input % 400 == 0) {
			printf("윤년");
		}
	else
		printf("윤년이 아니다.");

	return 0;
}*/
#include <stdio.h>
int main() {
	float a, b, c, d, e;
	printf("1번째 실수를 입력하시오.\n");
	scanf_s("%lf", &a);
	printf("2번째 실수를 입력하시오.\n");
	scanf_s("%lf", &b);
	printf("3번째 실수를 입력하시오.\n");
	scanf_s("%lf", &c);
	printf("4번째 실수를 입력하시오.\n");
	scanf_s("%lf", &d);
	printf("5번째 실수를 입력하시오.\n");
	scanf_s("%lf", &e);

	float avr = (a + b + c + d + e) / 5;
	printf("평균은%.2f입니다",  &avr);


	if (a <= b && a <= c && a <= d)
		printf("최솟값은 %f", a);
	else if (b <= c && b <= d)
		printf("최솟값은 %f", b);
	else if (c <= d)
		printf("최솟값은 %f", c);
	else
		printf("최솟값은 %f", d);


	if (a >= b && a >= c && a >= d)
		printf("최댓값은 %f", a);
	else if (b >= c && b >= d)
		printf("최댓값은 %f", b);
	else if (c >= d)
		printf("최댓값은 %f", c);
	else
		printf("최댓값은 %f", d);

	return 0;
}


