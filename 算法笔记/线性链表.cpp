typedef struct LNode *List;
struct LNode{
	ElementType Data;
	List Next;
};
struct LNode L;
List Ptrl;

//�������
int Length(List Ptrl){
	List p = Ptrl; //pָ����ͷ����һ����� 
	int j = 0;
	while(p){
		p = p->Next;
		j++   //pָ���j����� 
	}
	return j;
} 

//����
List FindKth(int k, List Ptrl){  //����Ų��� 
	List p = Ptrl;
	int i = 1;
	while(p != NULL && i < K){
		p = p->Next;
		i++;
	} 
	if(i == K) return p;  //�ҵ���K��Ԫ��,����ָ�� 
	else return NULL;  //���� Ϊ�� 
} 

List Find(ElementType X,List Ptrl){   //��ֵ���� 
	List p = Ptrl;
	while(p != NULL && p->Data != X){  //ֱ���ҵ�XΪֹ 
		p = p->Next;
	}
	return p;
}

//����,�����i-1��һ�����
List Insert(ElementType X,int i,List Ptrl){
	List p,s;
	if(i == 1){  //�½������ͷ 
		s = (List)malloc(sizeof(struct LNode));  //���룬��װ���
		s->Data = X;
		s->Next = Ptrl;
		return s; 
	}
	p =FindKth(i-1,Ptrl);  //�ҵ���i-1�����׼������ 
	if(p == NULL){			//�����ڵ�i-1��� 
		printf("��������");
		return NULL;
	}else {
		s = (List)malloc(sizeof(struct LNode));
		s->Data = X;
		s->Next = p->Next;  //�½������ڵ�i-1�����ĺ��� 
		p->Next = s;
		return Ptrl; 
	}
	
}

//ɾ����i�����   �Ҵ��i-1����� free��s�� �ͷſռ�
List Delete(int i,List Ptrl)
{
	List p,s;
	if(i == 1){
		s = Ptrl;
		if(Ptrl!=NULL) Ptrl = Ptrl->Next;
		else return NULL;
		free(s);
		return Ptrl;
	}
	p = FindKth(i-1,Ptrl);
	if(p == NUll){
		printf("������"); return NULL;
	}else if(p->Next == NULL) {
		printf("��i-1����㲻����"); return NULL;
	}else{
		s = p->Next;
		p->Next = s->Next;
		free(s);
		return Ptrl;
	}
 } 
