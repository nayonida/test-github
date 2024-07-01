#include <stdio.h>
int main(void)
{
	int floor;
	int i, j;
	int k = 1;
	printf("값을 입력하세요. ");
	scanf_s("%d", &floor); //floor을 입력받는다.
	
		for (i = 1; i <= 2 * floor; i++) //i가 2*floor이 될 때까지 반복문을 시행한다.
	{
				for (j = 1; j < 2 * floor ; j++) { 
					if (j == floor - k + 1 || j == floor + k - 1||i==floor) //j가 입력받은 floor-k+1을 했을 때 또는 floor+k-1을 했을 때와 값이 같을 때 *을 출력하면 양옆으로 *들이 일정한 간격을 두고 쌓이게 된다.
						printf("*");                                                        //또한 별이  i가 floor와 같을 때 출력되면 아래의 밑변을 채우게된다.
					else
						printf(" ");
				
				}
	k++; //k++을 해 k의 값을 1씩 키워 for문을 시행할 수록 간격이 넓게 벌어져 여러층의 양옆의 삼각형을 쌓게된다.
			printf("\n");
		}
		return 0;
	}


