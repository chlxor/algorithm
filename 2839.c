#include <stdio.h>

int main() {
	
	int N, i;
	int cnt = 0;
	scanf("%d", &N);
	
	while(1) {
		if(N % 5 == 0) {
			cnt += N / 5;
			break;
		}
		N -= 3;
		cnt++;
		if(N < 0) {
			cnt = -1;
			break;
		}
	}
	
	printf("%d\n", cnt);
	
	
	return 0;
}
