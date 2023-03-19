typedef struct Node
{
	int data;
	struct Node* next;
}Node,*LinkList;

LinkList Create(LinkList L);
int Locate(LinkList L,int e);
void displayList(LinkList L);
void DeleteList(LinkList L,int i,int e);
int SearchList(LinkList L,int e);
void FindMidNode(LinkList L);
void IsLoopList(LinkList L);
void ReverseList_one(LinkList L);
