//创建一个链表。

#include <stdio.h>
#include <stdlib.h>

typedef struct  Node{
    int data;
    struct Node *next;

}linklist;


int main(){

    int n=0;
    printf("输入链表长度：");
    scanf("%d",&n);
    linklist *head,*r,*p;
    head=r=(linklist *)malloc(sizeof(linklist));
    if (head == NULL) {
        printf("内存分配失败\n");
        return 1;
    r->next=NULL;
    for (int i=1;i<=n;i++){
        p=(linklist *)malloc(sizeof(linklist));
        printf("输入第%d个元素的值：\n",i);
        scanf("%d",&p->data);
        r->next=p;          //尾插法
        r=p;
        r->next=NULL;
    }

    linklist *q=head->next;
    printf("链表为：\n");
    while(q!=NULL){
        printf("%d\n",q->data);
        q=q->next;
    }



}