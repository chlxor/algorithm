#include <stdio.h>

int main() {
	
	int a, b, t, i;
	int cnt = 0;
	int n = 2;
	scanf("%d", &a);
	if(a > 100) scanf("%d", &a);
	
	for(i = 0; i < a; i++) {
		scanf("%d", &b);
		if(b > 1000) i--;
		for(t = 2; t < b; t++) {
			if(b % t == 0) {
				break;
			}
			else {
				cnt++;
			}
		}
		
	}
	printf("%d", cnt);
	
	return 0;
}
