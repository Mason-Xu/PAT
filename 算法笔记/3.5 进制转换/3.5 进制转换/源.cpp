#pragma warning(disable:4996)

#include<cstdio>
int main() {
	int a, b, d;
	scanf("%d%d%d", &a, &b, &d);
	int sum = a + b;
	int ans[31], num = 0;
	do {
		ans[num++] = sum%d;
		sum /= d;
	}while(sum != 0);
	for (int i = num - 1; i >= 0; i--) {  //num-1�Ǵ���Ϊ�������±�0��ʼ��¼  
		printf("%d", ans[i]);
	}
	return 0;
}