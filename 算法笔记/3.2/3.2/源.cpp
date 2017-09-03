#pragma warning(disable:4996)
#include<cstdio>
const int maxn = 210;
int a[maxn] = { 0 };
int main() {
	int n, x;
	while (scanf("%d", &n) != EOF) {
		for (int i = 0; i < n; i++) {
			scanf("%d", &a[i]);
		}
		int k;
		scanf("%d", &x);
		for (k = 0; k < n; k++) {
			if (a[k] == x) {
				printf("%d\n", k);
				break;
			}
		}
		if (k == n) printf("-1\n");
	}
	return 0;
}