void selectSort(){
	for(int i = 1; i <= n; i++){ //进行n躺排序 
		int k = i;  //  临时存放i 
		for(int j = i; j <= n; j++){  //选出最小元素的下标 
			if(A[j] < A[k]){
				k = j; //选出最小元素 
			}
		}
		int temp = A[i]; //交换A[k] 和 A[i]; 
		A[i] = A[k];
		A[k] = temp;
	}
}
