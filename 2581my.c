#include <stdio.h>

int sosu(int c) {
	int i;
	
	if(c == 1) return 0;
	if(c == 2) return 1;
	for(i = 2; i < c; i++) if(c % i == 0) return 0;
	return 1;
}

int main() {
	
	int a, b, i;
	int sum = 0;
	int tmp = 10000;
	scanf("%d %d", &a, &b);
	int t[b];
	for(i = 0; i < b; i++) {
		t[i] = 0;
	}
	for(i = a; i < b; i++) {
		if(sosu(i) == 0) {
			t[i] = i;
			if(i < tmp) tmp = i;
		}
		if(tmp == 10000) {
			if(sosu(i)) {
			printf("-1");
			return 0;
			}
		}
	}
	
	for(i = 0; i <b; i++) {
		sum += t[i];
	}
	printf("%d\n%d\n", sum, tmp);
	
	
	return 0;
}
