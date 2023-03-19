#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>
#include <malloc.h> 
#include "����.h"


LinkList Create(LinkList L)//����һ������ 
{
	L=(Node*)malloc(sizeof(Node));
	L->next=NULL;
	
	Node *r,*s;
	int x;
	scanf("%d",&x);
	r=L;
	while(x!=9999)
	{
			s=(Node*)malloc(sizeof(Node));
			s->data=x;
			r->next=s;
			r=s;
			scanf("%d",&x);
	}
	r->next=NULL;
	return L;
}


int Locate(LinkList L,int e) 
{
	Node *p;
	p=L->next;
	int i=1;
	while(p!=NULL&&p->data!=e)
	{
		p=p->next;
		i++;
	}
	if(p==NULL)
	    return 0;
	else
	    return i;
}



void displayList(LinkList L)//��ʾ���� 
{
	L=L->next;
	while(L)
	{
		printf("%3d",L->data);
		L=L->next;
	 }
	 printf("\n");
 }

void DeleteList(LinkList L,int i,int e)//ɾ�� 
{
	Node *p,*q;
	int k=0;
	p=L;
	while(p->next != NULL && k < i-1)
	{
		p=p->next;
		k=k+1;
	}
	if(p->next == NULL){
		printf("�Ҳ�����Ԫ�أ�ɾ��ʧ��"); 
	}
	q=p->next;
	p->next=q->next;
	e=q->data;
	free(q);
	printf("ɾ���ɹ�"); 
	
}

int SearchList(LinkList L,int e) 
{
	Node *p;
	p=L->next;
	int i=1;
	while(p != NULL && p->data != e)
	{
		p=p->next;
		i++;
	}
	if(p==NULL)
	    return 0;
	else
	    return i;
}



void FindMidNode(LinkList L)//�ҵ������е� 
{
	LinkList slow, fast;//����ָ��
	slow = fast = L->next;
	while(fast && fast->next){
    	slow = slow->next;
    	fast = fast->next->next;
    }
    printf("\nThe mid Node is:%d\n",slow->data);
}

void IsLoopList(LinkList L)
{
	LinkList slow, fast;//����ָ�� 
    slow = fast = L->next;
    while(fast && fast->next){
    	slow = slow->next;
    	fast = fast->next->next;
    	if(slow == fast)//��ָ�������Ļ����ǳɻ�
		{
			printf("����ɻ�"); 
		}				 
} 
          printf("�����ɻ�");
}

void ReverseList_one(LinkList L) //��ת����
{
    LinkList pre = NULL, p = L->next, next;
    while (p)
    {
        next = p->next;
        p->next = pre;
        pre = p;
        p = next;
    }
    L->next = pre;
} 



int main() {
	LinkList list;
	int i,j,k,e;
	printf("�����������е���ֵ(������9999ʱֹͣ)��"); 
	list=Create(list);
	system("cls");
	printf("��ǰ�����е�����Ϊ��");
	displayList(list);
	
	
    int choice;
    
        printf("1.���������е�Ԫ��\n");
		printf("2.ɾ�������е�Ԫ��\n");
		printf("3.�ҵ��м�ڵ��ֵ\n");
		printf("4.�ж������Ƿ�ɻ�\n");
		printf("5.��ת����\n");
		printf("0.�˳�\n");
		printf("������ 0 ~ 5 ������:");
    	
		scanf("%d",&choice);
	    
	    switch(choice){
		case 0: 
				return 0;	
		case 1: 
		        printf("��������Ҫ����Ԫ�ص�ֵ��") ;
	            scanf("%d",&e);
	            printf("%d���ڵ�λ���ǣ�%d\n",e,SearchList(list,e));
			    break;
		case 2: 
		        printf("��������Ҫɾ��Ԫ�ص�λ��i��ֵ��");
	            scanf("%d",&i);
	            DeleteList(list,i,e);
			    break;
		case 3: 
		        FindMidNode(list);
		        break;
		case 4: 
		        IsLoopList(list);//�ж��Ƿ�ɻ�
		        break;
		case 5: 
		        ReverseList_one(list);
		        printf("��ǰ�����е�����Ϊ��");
	            displayList(list);
		        break;
		default:
			printf("\n������Ŵ����˳�����\n");
			break;
        }
       
	        


}
