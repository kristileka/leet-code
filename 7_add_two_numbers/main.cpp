#include "iostream"

struct ListNode{
  int val;
  ListNode *next;
  ListNode(): val(0), next(nullptr){}
  ListNode(int x):val(x), next(nullptr){}
  ListNode(int x,ListNode *next): val(x), next(next){}
};

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2){
  ListNode tempHead(0);
  ListNode* current = &tempHead;
  int carry = 0;
  while(l1 != NULL || l2 != NULL || carry != 0){
    int x, y, sum;
    
    if(l1 !=NULL) x = l1->val; else x = 0;
    if(l2 !=NULL) y = l2->val; else y = 0;
    sum = carry + x  +y;
    carry=  sum/10;
    current->next = new ListNode(sum%10);
    current = current->next;
    if(l1!=NULL){
      l1 = l1->next;
    }

    if(l2 != NULL){
      l2 = l2->next;
    }
  }

  return  tempHead.next;
}
