#include <stdio.h>

int main() {

	int i = 1;
	float num1, num2, result=1; //������ �Ϸ��ϸ� result�� �ʱ�ȭ�ؾ��Ѵٰ� �Ͽ� =1�� �ʱ�ȭ�Ͽ� ǥ���Ͽ����ϴ�.
	char operator;

	printf("input:");
	scanf_s("%f %c %f", &num1, &operator,sizeof(operator), &num2); //sizeof(operator)�� �Բ� �ۼ��ؾ߸� ������ �Ǿ sizeof(operator)�� �߰��Ͽ����ϴ�.

	if (operator=='+') { //+�� ���ڷ� ���´ٸ� ������ ���� �����Ѵ�.
		result = num1 + num2;
		printf("%f", result);
	}
	else if (operator == '-') {//-�� ���ڷ� ���´ٸ� ������ ���� �����Ѵ�.
		result = num1 - num2;
		printf("%f", result);
	}
	else if (operator == '*') {//*�� ���ڷ� ���´ٸ� ������ ���� �����Ѵ�.
		result = num1 * num2;
		printf("%f", result);
	}
	else if (operator == '/') {
		if (num2 != 0) { //�и��� num2�� 0�� �ƴ� �� �� ���� �����Ѵ�.
			result = num1 / num2;
			printf("%f", result);
		}
		else { //�и� 0�̶�� ������ �� ���ٴ� ���ܻ�Ȳ�� �����Ѵ�.
			printf("�и� 0�� �� ����.");
		}
		
	}
	else if (operator == '^') { 
		for (i = 0; i < num2; i++) { //num1�� i�� num2�� �Ǳ� ������ �� num2�� ���Ͽ� �������� �����.
			result = result * num1;
		}
		printf("%f" , result);
	}
	return  0;
}


