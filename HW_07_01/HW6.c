#include <stdio.h>
int main(void)
{
	int floor;
	int i, j;
	int k = 1;
	printf("���� �Է��ϼ���. ");
	scanf_s("%d", &floor); //floor�� �Է¹޴´�.
	
		for (i = 1; i <= 2 * floor; i++) //i�� 2*floor�� �� ������ �ݺ����� �����Ѵ�.
	{
				for (j = 1; j < 2 * floor ; j++) { 
					if (j == floor - k + 1 || j == floor + k - 1||i==floor) //j�� �Է¹��� floor-k+1�� ���� �� �Ǵ� floor+k-1�� ���� ���� ���� ���� �� *�� ����ϸ� �翷���� *���� ������ ������ �ΰ� ���̰� �ȴ�.
						printf("*");                                                        //���� ����  i�� floor�� ���� �� ��µǸ� �Ʒ��� �غ��� ä��Եȴ�.
					else
						printf(" ");
				
				}
	k++; //k++�� �� k�� ���� 1�� Ű�� for���� ������ ���� ������ �а� ������ �������� �翷�� �ﰢ���� �װԵȴ�.
			printf("\n");
		}
		return 0;
	}


