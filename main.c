#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;

//trial only trial.hehe
    struct Node* next;
};

int main() {
    int n, i, value, max;
    struct Node *head = NULL, *temp = NULL, *newNode = NULL;

    printf("Enter the number of nodes: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        newNode = (struct Node*)malloc(sizeof(struct Node));
        scanf("%d", &value);
        newNode->data = value;
        newNode->next = NULL;

        if(head == NULL) {
            head = newNode;
            temp = head;
        } else {
            temp->next = newNode;
            temp = temp->next;
        }
    }

    if(head == NULL) {
        printf("List is empty.\n");
        return 0;
    }

    max = head->data;
    temp = head->next;
    while(temp != NULL) {
        if(temp->data > max) {
            max = temp->data;
        }
        temp = temp->next;
    }

    printf("Maximum element: %d\n", max);
    return 0;
}
