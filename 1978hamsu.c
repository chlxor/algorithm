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
	
	int N;
	int a, i;
	int cnt = 0;
	
	scanf("%d", &N);
	
	for(i = 0; i < N; i++) {
		scanf("%d", &a);
		cnt += sosu(a);
		
		
	}
	
	printf("%d", cnt);
	
	return 0;
}
