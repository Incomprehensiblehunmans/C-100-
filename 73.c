//构造链表（头插法）

#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int data;
    struct Node *next;
}linklist;

int main(){

    int n;
    printf("输入链表长度：\n");
    scanf("%d",&n);
    linklist *head,*p;
    head=(linklist*)malloc(sizeof(linklist));
    if (head == NULL) {
        printf("内存分配失败\n");
        return 1;
    }
    head->next = NULL;
    for (int i=1;i<=n;i++){             
        p=(linklist *)malloc(sizeof(linklist));
        printf("输入第%d个元素的值：\n",i);
        scanf("%d",&p->data);
        p->next = head->next;       //实现头插法
        head->next = p;
    }

    linklist*q;
    q=head->next;
    printf("链表为：\n");
    while (q!=NULL)
    {
        printf("%d\n",q->data);
        q=q->next;
    }
    


    


}