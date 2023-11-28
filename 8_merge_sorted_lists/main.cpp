#include "iostream"

struct ListNode {
    int val;
    ListNode *next;

    ListNode() : val(0), next(nullptr) {}

    ListNode(int x) : val(x), next(nullptr) {}

    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode *mergeTwoLists(ListNode *list1, ListNode *list2) {
    ListNode head;
    ListNode *tail = &head;

    while (list1 != nullptr && list2 != nullptr) {
        if (list1->val < list2->val) {
            tail->next = list1;
            list1 = list1->next;
        } else {
            tail->next = list2;
            list2 = list2->next;
        }

        tail = tail->next;
    }
    if (list1 != nullptr) {
        tail->next = list1;
    } else {
        tail->next = list2;
    }
    return head.next;
}

int main() {
    ListNode list = ListNode(1);
    ListNode list2 = ListNode(1);
    mergeTwoLists(&list, &list2);

    return 0;
}