#include <stdio.h>

int main() {
	
	int N;
	int a, i, j, flag;
	int cnt = 0;
	
	scanf("%d", &N);
	
	for(i = 0; i < N; i++) {
		scanf("%d", &a);
		flag = 1;
		
		if(a == 1) continue;
		if(a == 2) {
			cnt++;
			continue;
		}
		
		for(j = 2; j < a; j++) {
			if(a % j == 0) {
				flag = 0;
				break;
			}
		}
		if(flag == 1) cnt++;
	}
	
	printf("%d", cnt);
	
	return 0;
}
