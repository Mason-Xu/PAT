/*
1022. D���Ƶ�A+B (20)

ʱ������
100 ms
�ڴ�����
65536 kB
���볤������
8000 B
�������
Standard
����
CHEN, Yue
���������Ǹ�10��������A��B(<=230-1)�����A+B��D (1 < D <= 10)��������

�����ʽ��

������һ�������θ���3������A��B��D��

�����ʽ��

���A+B��D��������

����������
123 456 8
���������
1103
*/




#include<cstdio>
int main(){
	int a, b, d;
	scanf("%d%d%d",&a, &b, &d);
	int sum = a + b;
	int ans[31], num = 0;// ��ans���D���Ƶ�ÿһλ
	do{
		ans[num++] = sum % d;
		sum /= d;
	} while(sum != 0);
	for(int i = num - 1; i >= 0 ; i--){//�Ӹ�λ����λ������� 
		printf("%d",ans[i]); 
	}
	return 0;
}
