#include<cstdio>
int main() {
	int a[10] = { 4,3,1,2,6,5 };
	for (int i = 1; i <= 5; i++) {
		for (int j = 0; j < 6 - i; j++) {
			if (a[j] > a[j + 1]) {
				int temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
	for (int i = 0; i <= 5; i++) {
		printf("%d ", a[i]);
	}
	return 0;
}