#include <stdio.h>
#include <stdlib.h>

// Definition for singly-linked list
struct ListNode {
    int val;
    struct ListNode* next;
};

// Function to reverse the linked list iteratively
struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode* prev = NULL;
    struct ListNode* curr = head;

    while (curr != NULL) {
        struct ListNode* nextTemp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextTemp;
    }
    return prev;
}

// Function to reverse recursively
struct ListNode* reverseListRecursive(struct ListNode* head) {
    if (head == NULL || head->next == NULL) {
        return head;
    }
    struct ListNode* newHead = reverseListRecursive(head->next);
    head->next->next = head;
    head->next = NULL;
    return newHead;
}

// Helper function to create a new node
struct ListNode* newNode(int val) {
    struct ListNode* node = (struct ListNode*)malloc(sizeof(struct ListNode));
    node->val = val;
    node->next = NULL;
    return node;
}

// Helper function to print the list
void printList(struct ListNode* head) {
    struct ListNode* temp = head;
    printf("[");
    while (temp != NULL) {
        printf("%d", temp->val);
        if (temp->next != NULL) printf(",");
        temp = temp->next;
    }
    printf("]\n");
}

int main() {
    int n;
    printf("Enter number of nodes: ");
    scanf("%d", &n);

    struct ListNode* head = NULL;
    struct ListNode* tail = NULL;

    printf("Enter %d values: ", n);
    for (int i = 0; i < n; i++) {
        int val;
        scanf("%d", &val);
        struct ListNode* node = newNode(val);
        if (head == NULL) {
            head = node;
            tail = node;
        } else {
            tail->next = node;
            tail = node;
        }
    }

    printf("Original list: ");
    printList(head);

    // Iterative reverse
    head = reverseList(head);
    printf("Reversed list (iterative): ");
    printList(head);

    // Recursive reverse (to restore original order again)
    head = reverseListRecursive(head);
    printf("Reversed list (recursive): ");
    printList(head);

    return 0;
}
