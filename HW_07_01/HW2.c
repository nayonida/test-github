#include <stdio.h>

int main(void)
{
	int n,i; 
	int h = 0, m = 0;
	int  num = 1;
	

	printf("n 입력: ");
	scanf_s("%d", &n);

	for (i =1 ; i < n; i++) {
		
		m = h + num; //첫번째 시행에서 h를 첫째항으로보고 num을 둘째항 1로 생각한다. 
		h = num; //첫째항이였던 h를 num=1로 보게되면 h가 1이된다.
		num = m; //첫번째 시행에서 num은 1이된다.
      //두번째 시행에서는 h=1,num=2가 되고 세번째에서는 h=2,num=3이 된다.
		//이런식으로 반복하면 피보나치수를 구할 수 있다.
		}
	printf("%d번째 피보나치 수는 %d",n, h);

	}


