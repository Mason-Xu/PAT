void selectSort(){
	for(int i = 1; i <= n; i++){ //����n������ 
		int k = i;  //  ��ʱ���i 
		for(int j = i; j <= n; j++){  //ѡ����СԪ�ص��±� 
			if(A[j] < A[k]){
				k = j; //ѡ����СԪ�� 
			}
		}
		int temp = A[i]; //����A[k] �� A[i]; 
		A[i] = A[k];
		A[k] = temp;
	}
}
