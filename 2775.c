#include <stdio.h>

int main() {
	
	int T, k, n;
	int arr[15][15] = {0,};
	int i, j;
	
	for(i=0; i < 15; i++) {
		arr[0][i] = i;
	}
	
	for(i = 1; i < 15; i++) {
		for(j = 1; j <15; j++) {
			arr[i][j] = arr[i-1][j] + arr[i][j-1];
		}
	}
	
	scanf("%d", &T);
	for(i=0; i<T; i++) {
		scanf("%d", &k);
		scanf("%d", &n);
		printf("%d\n", arr[k][n]);
	}
	
	return 0;
}
