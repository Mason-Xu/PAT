typedef struct LNode *List;
struct LNode{
	ElementType Data[MAXSIZE];
	int Last;
}; 
struct LNode L;
List PtrL;

List MakeEmpty(){    //创线性表 
	List PtrL;  //建表 
	PtrL = (List)malloc(sizeof(struct LNode));  //申请结构 
	PtrL->Last = -1;
	return PtrL;  
}

//查找
int Find(ElementType X,List Ptrl)
{
	int i = 0;
	while(i <= Ptrl->Last && Ptrl->Data[i]!=X)
		i++;
	if(i > Ptrl->Last) 
		return -1;//没找到,返回-1
	else 
		return i;//返回存储位置 
 } 
 
 //插入 在第i个位置插入x 
void Insert(ElementType X,int i,List Ptrl){
	int j;
	if(Ptrl->Last == MAXSIZE-1){
		printf("表满");
		return; 
	} 
	if(i<1 || i >Ptrl -> Last +2){
		printf("位置不合法");
		return;
	}
	for(j = Ptrl->Last;j>i-1;j--){   //先把后面的移到后面一个位置 ，从右往左 
		Ptrl->Data[j+1] = Ptrl->Data[j];
		Ptrl->Data[i-1] = X;
		Ptrl->Last++;
	}
}

//删除 第i个位置的元素
void Delete(int i,List Ptrl){
	int j;
	if(i<1 || i>Ptrl+1){
		printf("不存在第%d个元素",i);
		return;
	}
	for(j = i;j <= Ptrl->Last;j++){ //从左往右 
		Ptrl->Data[j-1] = Ptrl->Data[j];
		Ptrl->Last--;
		return;
	} 
} 

