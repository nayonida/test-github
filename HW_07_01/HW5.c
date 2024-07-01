#include <stdio.h>
int main() {
	int i, j;
	int floor;
	printf("값을 입력하시오.");
	scanf_s("%d", &floor);
	//우선 상단부분을 출력한다.
	for (i = 1; i <= floor; i++) { //i가 floor과 작거나 같을 때까지 반복한다.
		for (j = 1; j <= i; j++) { //j가 i보다 작거나 같아질 때까지 반복한다.
			printf("*");  //첫번째 시행에서 i=1,j=1이고  *하나가 찍히게 된다.
		}
		for (j = floor * 2 - 2; j >= i * 2 - 1; j--) { //대칭되는 간격만큼 공백을 만든다. 
			printf(" ");
		}
		for (j = 1; j <= i; j++) { //공백만큼을 띄우고 *을 출력한다.
			printf("*");
		}
		printf("\n");
	}
	//피라미드의 하단부를 같은 방식으로 출력한다. 
	for (i = 1; i <= floor - 1; i++) { 
		for (j = floor - 1; j >= i; j--) {
			printf("*");
		}
		for (j = 1; j <= i * 2; j++) {  //대칭되는 모양을 그려야하므로 j가 i*2일때까지 반복한다.
			printf(" ");
		}
		for (j = floor - 1; j >= i; j--) { //대칭되는 모양을 그려야하므로 j가 floor-1일때까지 반복한다.
			printf("*");
		}
		printf("\n");
	}
	return 0;
}

