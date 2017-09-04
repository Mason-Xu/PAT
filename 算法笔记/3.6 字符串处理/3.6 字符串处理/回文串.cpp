

#include<cstdio>
#include<cstring>
const int maxn = 256;
bool judge(char str[]) {
	int len = strlen(str);
	for (int i = 0; i < len / 2; i++) {//i枚举字符串的前一半
		if (str[i] != str[len - 1 - i]) {
			return  false;
		}
	}
	return true;
}

int main1() {
	char str[maxn];
	while (gets_s(str)) {
		bool flag = judge(str);
		if (flag == true) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}