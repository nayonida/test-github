/*#include<stdio.h>
int main() {
	int input;
	printf("�⵵�� �Է��ϼ���:\n");
	scanf_s("%d", &input);

		if ((input % 4 == 0 && input % 100 != 0) || input % 400 == 0) {
			printf("����");
		}
	else
		printf("������ �ƴϴ�.");

	return 0;
}*/
#include <stdio.h>
int main() {
	float a, b, c, d, e;
	printf("1��° �Ǽ��� �Է��Ͻÿ�.\n");
	scanf_s("%lf", &a);
	printf("2��° �Ǽ��� �Է��Ͻÿ�.\n");
	scanf_s("%lf", &b);
	printf("3��° �Ǽ��� �Է��Ͻÿ�.\n");
	scanf_s("%lf", &c);
	printf("4��° �Ǽ��� �Է��Ͻÿ�.\n");
	scanf_s("%lf", &d);
	printf("5��° �Ǽ��� �Է��Ͻÿ�.\n");
	scanf_s("%lf", &e);

	float avr = (a + b + c + d + e) / 5;
	printf("�����%.2f�Դϴ�",  &avr);


	if (a <= b && a <= c && a <= d)
		printf("�ּڰ��� %f", a);
	else if (b <= c && b <= d)
		printf("�ּڰ��� %f", b);
	else if (c <= d)
		printf("�ּڰ��� %f", c);
	else
		printf("�ּڰ��� %f", d);


	if (a >= b && a >= c && a >= d)
		printf("�ִ��� %f", a);
	else if (b >= c && b >= d)
		printf("�ִ��� %f", b);
	else if (c >= d)
		printf("�ִ��� %f", c);
	else
		printf("�ִ��� %f", d);

	return 0;
}


