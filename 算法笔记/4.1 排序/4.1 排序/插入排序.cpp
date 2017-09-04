int A[maxn], n;
void insertSort() {
	for (int i = 2; i <= n; i++) { //进行n-1趟排序
		int temp = A[i], j = i;//temp临时存放A[i],j从i开始往前枚举
		while (j > 1 && temp < A[j - 1]) {//只要temp小于前一个元素A[j-1]
			A[j] = A[j - 1];//把A[j-1]后裔以为至A[j]
			j--;
		}
		A[j] = temp;//插入位置为j
	}
}