#include <stdio.h>

int *primes(void) {
	static int p[5] = { 2, 3, 5, 7, 11 };
	return p;
}

int main() {
	int *p = primes();
	static int new[5]; 
	for (int i=0; i<5; i++) {
		printf("%d %d\n", p[i], *(p+i));
		new[i] = p[i]; 
	}

	int sz = sizeof(new)/sizeof(new[0]); 
	for (int i=0; i<sz; i++) {
		printf("%d %d %d %d\n", new[i], *(new+i), p[i], *(p+i)); 
	}
	return 0;
}
