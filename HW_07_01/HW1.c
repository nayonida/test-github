#include <stdio.h>
int main() {
	float a, b, c, d, e;
	printf("1번째 실수를 입력하시오.\n");
	scanf_s("%f", &a);
	printf("2번째 실수를 입력하시오.\n");
	scanf_s("%f", &b);
	printf("3번째 실수를 입력하시오.\n");
	scanf_s("%f", &c);
	printf("4번째 실수를 입력하시오.\n");
	scanf_s("%f", &d);
	printf("5번째 실수를 입력하시오.\n");
	scanf_s("%f", &e);

	printf("========결과========\n");

	float avr = (a + b + c + d + e) / 5.0; //평균값을 avr로 정의한다.
	printf("평균은%f입니다.\n", avr);

	if (a <= b && a <= c && a <= d && a <= e) //a가 모든 다른 수들보다 작다면 최솟값은 a이다. //입력받은 수 중에 같은 수가 있을 수도 있다.
		printf("최솟값은 %f입니다.\n", a);
	else if (b <= c && b <= d && b <= e) //a가 모든 다른 수들보다 작지않다면 b가 모든 다른 수들보다 작으면 b가 최솟값이다.
		printf("최솟값은 %f입니다.\n", b);
	else if (c <= d && c <= e) //b가 모든 다른 수들보다 작지않다면 c가 모든 다른 수들보다 작으면 c가 최솟값이다.
		printf("최솟값은 %f입니다.\n", c);
	else if (d <= e) //c가 모든 다른 수들보다 작지않다면 d가 모든 다른 수들보다 작으면 d가 최솟값이다.
		printf("최솟값은 %f입니다.\n", d);
	else //그렇지않다면 e가 최솟값이다.
		printf("최솟값은 %f입니다.\n", e);


	if (a >= b && a >= c && a >= d && a >= e) //a가 모든 다른 수들보다 크다면 최댓값은 a이다.
		printf("최댓값은 %f입니다.\n", a);
	else if (b >= c && b >= d && b >= e) //a가 모든 다른 수들보다 크지않다면 b가 모든 다른 수들보다 크면 b가 최댓값이다.
		printf("최댓값은 %f입니다.\n", b);
	else if (c >= d && c >= e) //b가 모든 다른 수들보다 크지 않다면 c가 모든 다른 수들보다 크면 c가 최댓값이다.
		printf("최댓값은 %f입니다.\n", c);
	else if (d >= e) //c가 모든 다른 수들보다 크지 않다면 d가 모든 다른 수들보다 크면 d가 최댓값이다.
		printf("최댓값은 %f입니다.\n", d);
	else //그렇지않다면 e가 최댓값이다.
		printf("최댓값은 %f입니다.\n", e);
	return 0;


}


