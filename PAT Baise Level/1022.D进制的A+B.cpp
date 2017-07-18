/*
1022. D进制的A+B (20)

时间限制
100 ms
内存限制
65536 kB
代码长度限制
8000 B
判题程序
Standard
作者
CHEN, Yue
输入两个非负10进制整数A和B(<=230-1)，输出A+B的D (1 < D <= 10)进制数。

输入格式：

输入在一行中依次给出3个整数A、B和D。

输出格式：

输出A+B的D进制数。

输入样例：
123 456 8
输出样例：
1103
*/




#include<cstdio>
int main(){
	int a, b, d;
	scanf("%d%d%d",&a, &b, &d);
	int sum = a + b;
	int ans[31], num = 0;// 把ans存放D进制的每一位
	do{
		ans[num++] = sum % d;
		sum /= d;
	} while(sum != 0);
	for(int i = num - 1; i >= 0 ; i--){//从高位到地位进行输出 
		printf("%d",ans[i]); 
	}
	return 0;
}
