#include <stdio.h>
int main() {
	int i, j;
	int floor;
	printf("���� �Է��Ͻÿ�.");
	scanf_s("%d", &floor);
	//�켱 ��ܺκ��� ����Ѵ�.
	for (i = 1; i <= floor; i++) { //i�� floor�� �۰ų� ���� ������ �ݺ��Ѵ�.
		for (j = 1; j <= i; j++) { //j�� i���� �۰ų� ������ ������ �ݺ��Ѵ�.
			printf("*");  //ù��° ���࿡�� i=1,j=1�̰�  *�ϳ��� ������ �ȴ�.
		}
		for (j = floor * 2 - 2; j >= i * 2 - 1; j--) { //��Ī�Ǵ� ���ݸ�ŭ ������ �����. 
			printf(" ");
		}
		for (j = 1; j <= i; j++) { //���鸸ŭ�� ���� *�� ����Ѵ�.
			printf("*");
		}
		printf("\n");
	}
	//�Ƕ�̵��� �ϴܺθ� ���� ������� ����Ѵ�. 
	for (i = 1; i <= floor - 1; i++) { 
		for (j = floor - 1; j >= i; j--) {
			printf("*");
		}
		for (j = 1; j <= i * 2; j++) {  //��Ī�Ǵ� ����� �׷����ϹǷ� j�� i*2�϶����� �ݺ��Ѵ�.
			printf(" ");
		}
		for (j = floor - 1; j >= i; j--) { //��Ī�Ǵ� ����� �׷����ϹǷ� j�� floor-1�϶����� �ݺ��Ѵ�.
			printf("*");
		}
		printf("\n");
	}
	return 0;
}

