#include<stdio.h>
int main() {
	int n, sum = 0;
	while (sum <= 100) {
		printf("�Է��Ͻÿ�.\n");
		scanf_s("%d", &n);

		sum += n;
		printf("����: %d\n", sum);
	}
	
	printf("====100 �Ѿ����ϱ� ����!====");
	return 0;
}//���ؼ� ������ 100 ������ �������� �ڵ�