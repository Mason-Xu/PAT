/*codeup 1934查找x 
输入一个数n 1<=n<=200,然后输入n个数值各不相同的数，在输入一个值x，
输出这个值在这个数组中的下标（从 0开始，若不再数组中则输出-1） 

输出俄式：
测试数据有多组，输入n（1<= n <=200），接着输入n个数，然后输入x

输出格式：
对于每组输入，请输出结果

 
样例输入：
4
1 2 3 4
3

样例输出：
2
 
*/

 
#include<cstdio>
const int maxn = 210;
int a[maxn]; 
int main(){
	int n,x;
	while(scanf("%d",&n) != EOF){
		for(int i = 0; i < n; i++){
			scanf("%d",&a[i]);  //输入n个数字 
		}
		scanf("%d",&x);
		int k;  //在外面int k 因为要判断a[k]是否找到 
		for(k = 0; k < n; k++){  //遍历数组 
			if(a[k] == x){  
				printf("%d\n",k); //输出下标 
				break;  //一旦找到，就退出查找 
			}
		}
		if(k == n){  //  如果循环直到结束，没有找到 
			printf("-1\n");  //输出-1 
		}
	}
	return 0;
} 
