#include <stdio.h>

// �Է¹��� a�� �Ҽ��� 1��ȯ, �Ҽ��� �ƴϸ� 0��ȯ 
int sosu(int a) {
	int i;
	
	if(a == 1) return 0;
	if(a == 2) return 1;
	for(i = 2; i < a; i++) if(a % i == 0) return 0;
	return 1;
}

int main() {
	
	int M, N;
	int sum, min;
	
	sum = 0;
	min = 10000;
	
	scanf("%d", &M);
	scanf("%d", &N);
	
	for(M = M; M <= N; M++) {
		if(sosu(M)) {
			sum += M;
			if(min > M) min = M;
		}
	}
	
	if(sum > 0) printf("%d\n%d\n", sum, min);
	else printf("-1\n");
	
	return 0;
}
