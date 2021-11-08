#include <stdio.h>

int main() {
	
	int a;
	int b, c;
	int n;
	scanf("%d", &a);
	
	for(n = 2; n<a; n++) {
		if(a%5 == 3) {
			b = a / 5;
			c = b / 3;
			printf("%d", b+c);
			break;
		}
		else if (a % 5 == 3*n) {
			b = a / 5;
			c = b / 3;
			if(3*n > a) {
				printf("%d", b+c);
				
			}
		}
		else if(a % 3 == 0) {
			b = 0;
			c = a / 3;
			printf("%d", b+c);
			break;
		}
	}
	if(b == 0 && c == 0) {
		printf("-1");
	} 
	
	
	return 0;
}
