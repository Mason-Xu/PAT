/*
1032. 挖掘机技术哪家强(20)
时间限制
200 ms
内存限制
65536 kB
代码长度限制
8000 B
判题程序
Standard
作者
CHEN, Yue
为了用事实说明挖掘机技术到底哪家强，PAT组织了一场挖掘机技能大赛。现请你根据比赛结果统计出技术最强的那个学校。

输入格式：

输入在第1行给出不超过105的正整数N，即参赛人数。随后N行，每行给出一位参赛者的信息和成绩，包括其所代表的学校的编号（从1开始连续编号）、及其比赛成绩（百分制），中间以空格分隔。

输出格式：

在一行中给出总得分最高的学校的编号、及其总分，中间以空格分隔。题目保证答案唯一，没有并列。

输入样例：
6
3 65
2 80
1 100
2 70
3 40
3 0
输出样例：
2 150
*/



#include<cstdio>
const int maxn = 100010;
int school[maxn] = {0};
int main(){
	int n, schID, score;
	scanf("%d",&n);
	for(int i = 0; i < n; i++){  //循环输入多少个数据 
		scanf("%d%d", &schID, &score);
		school[schID] += score;
	}
	int k = 1, MAX = -1;
	for(int i = 1;i <= n; i++){ // 在所有学校中选出总分数最高的 
		if(school[i]>MAX){
			MAX = school[i];
			k = i;   //k用来记录最高分学校的ID 
		} 
	}
	printf("%d %d\n", k, MAX);
	return 0;
}
