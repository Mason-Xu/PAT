void selectSort() {
	for (int i = 1; i <= n; i++) {// 进行n躺操作
		int k = i;
		for (int j = i; j <= n; j++) {
			if (A[j] < A[k])
				k = j;
		}
		int temp = A[i]; //交换，使A[i] 为最小
		A[i] = A[k];
		A[k] = temp;
	}
}