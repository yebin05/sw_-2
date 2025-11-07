#include <stdio.h>

// 99 divide
int main(void) {
	for (int i = 1; i <=9; i++) {
		for (int j = 1; j<= 9; j++) {
			printf("%d x %d = %d", i, j, i * j);
		}
	}
}

