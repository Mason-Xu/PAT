#include<cstdio>
#include<cstring>
const int maxn = 256;
bool judge(char str[]){
	int len = strlen(str); // �ַ�������
	for(int i = 0; i < len / 2; i++){
		if(str[i] != str[len - 1 - i]){// ����Գ�λ�ò��� 
			return false; // ���ǻ��Ĵ� 
		}
	} 
}
int main(){
	char str[maxn];
	while(gets(str)){ // �����ַ���
		bool flag = judge(str);
		if(flag == true){
			printf("YES\n");
		}else {
			printf("NO\n");
		}
	}
	return 0;
} 
