#include <stdio.h>
int main(void) {
	int n, r, i;
	int f1 = 1, f2 = 1, f3 = 1, f4 = 1, f5 = 1, f6 = 1;  //입력한 변수들의 값을 1로 초기화한다.(거듭제곱이나 펙토리얼에서 첫항은 1로 시작해 실행되므로 모두 1로 초기화한다.)

	printf("n입력:");
	scanf_s("%d", &n); 
	printf("r입력:");
	scanf_s("%d", &r);


	for (i = 1; i <= n; ++i) { //펙토리얼을 계산하기 위한 반복문 //++i를 하여 계산의 효율성을 높인다(1은 제외하고 계산)
		f1 = f1 * i;  //f1이 i=1부터 for문을 통해 n번 반복해서 곱해진다.
	}
	for (i = 1; i <= r; ++i) {  
		f3 = f3 * i;
	}
	for (i = 1; i < n - r; ++i) {
		f2 = f2 * i;
	}
	for (i = 1; i < n + r - 1; ++i) {
		f4 = f4 * i;
	}
	for (i = 1; i < n - 1; ++i) {
		f5 = f5 * i;
	}
	//활용되어야하는 식들을 여러개의 변수를 이용하여 만들고 결과값 출력에서 연산으로 활용하였다.

	for (i = 0; i < r; i++) { //거듭제곱의 계산식이다. n을 r번 반복해 곱하는 식이다.
		f6 = f6 * n; 

	}

	printf("순열:%d\n", f1 / f2); 
	printf("중복순열:%d\n", f6);
	printf("조합:%d\n", f1 / (f2 * f3));
	printf("중복조합:%d\n", f4 / (f5 * f3)); //만들어놓은 식들을 활용하여 연산한다.

	return 0;



}
