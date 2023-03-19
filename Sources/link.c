#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>
#include <malloc.h> 
#include "链表.h"


LinkList Create(LinkList L)//创建一个链表 
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



void displayList(LinkList L)//显示链表 
{
	L=L->next;
	while(L)
	{
		printf("%3d",L->data);
		L=L->next;
	 }
	 printf("\n");
 }

void DeleteList(LinkList L,int i,int e)//删除 
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
		printf("找不到该元素，删除失败"); 
	}
	q=p->next;
	p->next=q->next;
	e=q->data;
	free(q);
	printf("删除成功"); 
	
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



void FindMidNode(LinkList L)//找到链表中点 
{
	LinkList slow, fast;//快慢指针
	slow = fast = L->next;
	while(fast && fast->next){
    	slow = slow->next;
    	fast = fast->next->next;
    }
    printf("\nThe mid Node is:%d\n",slow->data);
}

void IsLoopList(LinkList L)
{
	LinkList slow, fast;//快慢指针 
    slow = fast = L->next;
    while(fast && fast->next){
    	slow = slow->next;
    	fast = fast->next->next;
    	if(slow == fast)//两指针相遇的话就是成环
		{
			printf("链表成环"); 
		}				 
} 
          printf("链表不成环");
}

void ReverseList_one(LinkList L) //反转链表
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
	printf("请输入链表中的数值(当输入9999时停止)："); 
	list=Create(list);
	system("cls");
	printf("当前链表中的数据为：");
	displayList(list);
	
	
    int choice;
    
        printf("1.查找链表中的元素\n");
		printf("2.删除链表中的元素\n");
		printf("3.找到中间节点的值\n");
		printf("4.判断链表是否成环\n");
		printf("5.反转链表\n");
		printf("0.退出\n");
		printf("请输入 0 ~ 5 的数字:");
    	
		scanf("%d",&choice);
	    
	    switch(choice){
		case 0: 
				return 0;	
		case 1: 
		        printf("请输入需要查找元素的值：") ;
	            scanf("%d",&e);
	            printf("%d所在的位置是：%d\n",e,SearchList(list,e));
			    break;
		case 2: 
		        printf("请输入需要删除元素的位置i的值：");
	            scanf("%d",&i);
	            DeleteList(list,i,e);
			    break;
		case 3: 
		        FindMidNode(list);
		        break;
		case 4: 
		        IsLoopList(list);//判断是否成环
		        break;
		case 5: 
		        ReverseList_one(list);
		        printf("当前链表中的数据为：");
	            displayList(list);
		        break;
		default:
			printf("\n输入序号错误，退出程序：\n");
			break;
        }
       
	        


}
