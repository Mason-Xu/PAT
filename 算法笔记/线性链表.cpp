typedef struct LNode *List;
struct LNode{
	ElementType Data;
	List Next;
};
struct LNode L;
List Ptrl;

//链表遍历
int Length(List Ptrl){
	List p = Ptrl; //p指向表的头，第一个结点 
	int j = 0;
	while(p){
		p = p->Next;
		j++   //p指向第j个结点 
	}
	return j;
} 

//查找
List FindKth(int k, List Ptrl){  //按序号查找 
	List p = Ptrl;
	int i = 1;
	while(p != NULL && i < K){
		p = p->Next;
		i++;
	} 
	if(i == K) return p;  //找到第K个元素,返回指针 
	else return NULL;  //返回 为空 
} 

List Find(ElementType X,List Ptrl){   //按值查找 
	List p = Ptrl;
	while(p != NULL && p->Data != X){  //直到找到X为止 
		p = p->Next;
	}
	return p;
}

//插入,插入第i-1后一个结点
List Insert(ElementType X,int i,List Ptrl){
	List p,s;
	if(i == 1){  //新结点插入表头 
		s = (List)malloc(sizeof(struct LNode));  //申请，填装结点
		s->Data = X;
		s->Next = Ptrl;
		return s; 
	}
	p =FindKth(i-1,Ptrl);  //找到第i-1个结点准备插入 
	if(p == NULL){			//不存在第i-1结点 
		printf("参数错误");
		return NULL;
	}else {
		s = (List)malloc(sizeof(struct LNode));
		s->Data = X;
		s->Next = p->Next;  //新结点插入在第i-1个结点的后面 
		p->Next = s;
		return Ptrl; 
	}
	
}

//删除第i个结点   找打第i-1个结点 free（s） 释放空间
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
		printf("不存在"); return NULL;
	}else if(p->Next == NULL) {
		printf("第i-1个结点不存在"); return NULL;
	}else{
		s = p->Next;
		p->Next = s->Next;
		free(s);
		return Ptrl;
	}
 } 
