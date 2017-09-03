#include<cstdio>
const int maxn = 100010;
int school[maxn] = { 0 };
#pragma warning(disable:4996)
int main() {
	int schID, score, n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d%d", &schID, &score);
		school[schID] += score;
	}
	int k, max = -1;
	for (int i = 1; i <= n; i++) {
		if (school[i] > max) {
			max = school[i];
			k = i;
		}
	}
	printf("%d %d\n", k, max);
	return 0;
}