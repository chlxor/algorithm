#include <stdio.h>

int main() {
	
	int T, H, W, N;
	int i, rs;
	
	// �׽�Ʈ ���̽� �Է� 
	scanf("%d", &T);
	
	// �׽�Ʈ ���̽���ŭ �ݺ� �Է� ���� 
	for(i = 0; i<T; i++) {
		// ����, ȣ��, ���° �մ�����
		scanf("%d %d %d", &H, &W, &N);
		// YYXX
		// YY * 100 + XX
		if(N%H != 0) rs = (N%H) * 100 + (N / H + 1);
		else rs = H * 100 + (N / H);
		
		printf("%d\n", rs);
	}
	
	return 0;
}
