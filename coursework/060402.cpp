#include <stdio.h>

int main() {
	int a[6];
	for(int i = 0; i < 5; i++) {
		scanf("%d", &a[i]);
	}
	
	int x;
	scanf("%d", &x);
	
	int number = 5;
	for(int i = 0; i < 5; i++) {
		if(x < a[i]) {
			number = i;
			break; 
		}
	}
	for(int cot = 5; cot >= number; cot--) {
		a[cot] = a[cot - 1];
	}
	

	a[number] = x;
	

	for(int i = 0; i < 6; i++) {
		printf("%d ", a[i]);
	}
	
	return 0;
}
