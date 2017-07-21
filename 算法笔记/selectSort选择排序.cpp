void selectSort(){
	for(int i = 1; i <= n; i++){ //进行n次操作
		int k = i;  //每次让k重新=i
		for(int j = i; j <= n; j++){  //使j=i，比较j-i+1次
			if(A[j] < A[k]){
				k = j; //选出最小的元素，下标位k
			}
		}
		int temp = A[i]; //交换元素
		A[i] = A[k];
		A[k] = temp;
	}
}