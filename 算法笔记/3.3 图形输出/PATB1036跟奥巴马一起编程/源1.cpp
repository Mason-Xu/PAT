#pragma warning(disable:4996)
#include<cstdio>
int main() {
	int col, row;
	char c;
	scanf("%d %c", &col, &c);
	if (col % 2 == 0) row = col / 2;
	else row = col / 2 + 1;
	for (int i = 0; i < col; i++) {//��һ��
		printf("%c", c);
	}
	printf("\n");
	for (int i = 2; i < row; i++) { //2~row-1��
		printf("%c", c);//ÿ�е�һ��a
		for (int j = 0; j < col - 2; j++) {
			printf(" ");
		}
		printf("%c\n", c);
		
	}
	//��row��
	for (int i = 0; i < col; i++) {
		printf("%c", c);
	}
	return 0;
}