void selectSort() {
	for (int i = 1; i <= n; i++) {// ����n�ɲ���
		int k = i;
		for (int j = i; j <= n; j++) {
			if (A[j] < A[k])
				k = j;
		}
		int temp = A[i]; //������ʹA[i] Ϊ��С
		A[i] = A[k];
		A[k] = temp;
	}
}