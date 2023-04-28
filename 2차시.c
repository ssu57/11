#include<stdio.h>
int main() {
	int n, sum = 0;
	while (sum <= 100) {
		printf("입력하시오.\n");
		scanf_s("%d", &n);

		sum += n;
		printf("총합: %d\n", sum);
	}
	
	printf("====100 넘었으니까 나가!====");
	return 0;
}//더해서 총합이 100 넘으면 나가지는 코드