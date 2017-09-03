typedef struct LNode *List;
struct LNode{
	ElementType Data[MAXSIZE];
	int Last;
}; 
struct LNode L;
List PtrL;

List MakeEmpty(){    //�����Ա� 
	List PtrL;  //���� 
	PtrL = (List)malloc(sizeof(struct LNode));  //����ṹ 
	PtrL->Last = -1;
	return PtrL;  
}

//����
int Find(ElementType X,List Ptrl)
{
	int i = 0;
	while(i <= Ptrl->Last && Ptrl->Data[i]!=X)
		i++;
	if(i > Ptrl->Last) 
		return -1;//û�ҵ�,����-1
	else 
		return i;//���ش洢λ�� 
 } 
 
 //���� �ڵ�i��λ�ò���x 
void Insert(ElementType X,int i,List Ptrl){
	int j;
	if(Ptrl->Last == MAXSIZE-1){
		printf("����");
		return; 
	} 
	if(i<1 || i >Ptrl -> Last +2){
		printf("λ�ò��Ϸ�");
		return;
	}
	for(j = Ptrl->Last;j>i-1;j--){   //�ȰѺ�����Ƶ�����һ��λ�� ���������� 
		Ptrl->Data[j+1] = Ptrl->Data[j];
		Ptrl->Data[i-1] = X;
		Ptrl->Last++;
	}
}

//ɾ�� ��i��λ�õ�Ԫ��
void Delete(int i,List Ptrl){
	int j;
	if(i<1 || i>Ptrl+1){
		printf("�����ڵ�%d��Ԫ��",i);
		return;
	}
	for(j = i;j <= Ptrl->Last;j++){ //�������� 
		Ptrl->Data[j-1] = Ptrl->Data[j];
		Ptrl->Last--;
		return;
	} 
} 

