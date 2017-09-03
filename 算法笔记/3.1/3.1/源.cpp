#pragma warning(disable:4996)
#include<cstdio>
int main() {
	int n,k=0;
	scanf("%d", &n);
	while (n != 1) {
		if (n % 2 != 0) {
			n = (3*n+1)/2;
		}
		else {
			n = n / 2;
		}
		k++;
	}
	printf("%d\n", k);
	return 0;
}