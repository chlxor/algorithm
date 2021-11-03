#include <stdio.h>

int main() {
	
	int T, H, W, N;
	int i, rs;
	
	// 테스트 케이스 입력 
	scanf("%d", &T);
	
	// 테스트 케이스만큼 반복 입력 받음 
	for(i = 0; i<T; i++) {
		// 높이, 호수, 몇번째 손님인지
		scanf("%d %d %d", &H, &W, &N);
		// YYXX
		// YY * 100 + XX
		if(N%H != 0) rs = (N%H) * 100 + (N / H + 1);
		else rs = H * 100 + (N / H);
		
		printf("%d\n", rs);
	}
	
	return 0;
}
