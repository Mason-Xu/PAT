/*1036. ���°���һ����(15)

ʱ������
400 ms
�ڴ�����
65536 kB
���볤������
8000 B
�������
Standard
����
CHEN, Yue
������ͳ�°��������������˶�ѧϰ��̣��������������д���룬��Ϊ������ʷ����λ��д������������ͳ��2014��ף�Ϊ��ף���������ѧ�����ܡ���ʽ�������°����д�˺ܼ򵥵ļ�������룺����Ļ�ϻ�һ�������Ρ�������Ҳ����һ�𻭰ɣ�

�����ʽ��

������һ���и��������α߳�N��3<=N<=20������������αߵ�ĳ���ַ�C�����һ���ո�

�����ʽ��

����ɸ����ַ�C�����������Ρ�����ע�⵽�м����м�������Ϊ���ý������ȥ���������Σ��������������ʵ������������50%����������ȡ������

����������
10 a
���������
aaaaaaaaaa
a        a
a        a
a        a
aaaaaaaaaa
*/

/*  �㷨�ʼǽⷨ 
#include<cstdio>
int main(){
	int row, col;  //�У��� 
	char c;
	scanf("%d %c",&col, &c);
	if(col % 2 ==1) row = col/2 + 1; //����  
	else row = col/2;   //ż�� 
	//��һ��
	for(int i = 0; i < col; i++){
		printf("%c", c);
	} 
	printf("\n");
	//�ڶ���~row-1��
	for(int i = 2; i < row; i++){  
		printf("%c", c);  //ÿ�е�һ��a 
		for(int j = 0; j < col-2; j++){
			printf(" ");  //col-2 �ո� 
		}
		printf("%c\n",c); //ÿ�����һ��a 
	} 
	//��row�� 
	for(int i = 0; i < col; i++){
		printf("%c",c); // col�ַ� 
	} 
	return 0; 
} 
*/ 


#include<cstdio>

int main(){
	int col;
	int row;
	char C; 
	scanf("%d %c", &col, &C);
	if(col %2 == 0) row = col / 2;
	else row = col/2+1;
	for(int i = 1;i <= row; i++){
		for(int j = 1; j <= col; j++){
			if(i == 1 || i == row) printf("%c", C); 
			else if(i != 1 && i != row && j != 1 && j != col) printf(" "); 
 			else if(j == 1 || j == col) printf("%c", C);
		}
		printf("\n");
	}
	return 0;
	
} 
