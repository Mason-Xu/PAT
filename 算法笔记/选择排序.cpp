#include<cstdio>
const int maxn = 100010;
int A[maxn],n; 
void selectSort(){
	for(int i = 1; i <= n; i++){ //½øÐÐnÌÉ²Ù×÷ 
		int k = 1;
		for(int j = i; j <= n; j++){
			if(A[j]<A[k]) k = j;
		}
		int temp = A[i];
		A[i] = A[k];
		A[k] = temp;
	}
}
int main(){
	int A[] = {0};
	int n = 1;
	while(scanf("%d",A[n])!=EOF){
		n++;
	}
	selectSort(A[n]); 
	for(int i = 1; i <= n; i++){
		printf("%d",A[i]);
	}
	return 0;
} 
