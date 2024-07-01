#include <stdio.h>

int main() {

	int i = 1;
	float num1, num2, result=1; //실행을 하려하면 result를 초기화해야한다고 하여 =1로 초기화하여 표현하였습니다.
	char operator;

	printf("input:");
	scanf_s("%f %c %f", &num1, &operator,sizeof(operator), &num2); //sizeof(operator)을 함께 작성해야만 실행이 되어서 sizeof(operator)을 추가하였습니다.

	if (operator=='+') { //+가 문자로 들어온다면 다음의 식을 실행한다.
		result = num1 + num2;
		printf("%f", result);
	}
	else if (operator == '-') {//-가 문자로 들어온다면 다음의 식을 실행한다.
		result = num1 - num2;
		printf("%f", result);
	}
	else if (operator == '*') {//*가 문자로 들어온다면 다음의 식을 실행한다.
		result = num1 * num2;
		printf("%f", result);
	}
	else if (operator == '/') {
		if (num2 != 0) { //분모인 num2가 0이 아닐 때 이 식을 시행한다.
			result = num1 / num2;
			printf("%f", result);
		}
		else { //분모가 0이라면 시행할 수 없다는 예외상황이 존재한다.
			printf("분모가 0일 수 없다.");
		}
		
	}
	else if (operator == '^') { 
		for (i = 0; i < num2; i++) { //num1을 i가 num2가 되기 전까지 즉 num2번 곱하여 제곱식을 만든다.
			result = result * num1;
		}
		printf("%f" , result);
	}
	return  0;
}


