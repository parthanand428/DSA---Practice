#include <iostream>
using namespace std;

// Node structure for Linked List
struct Node {
    int data;
    Node* next;
};

// Insert node at end of linked list
void insert(Node*& head, Node*& tail, int value) {
    Node* temp = new Node;
    temp->data = value;
    temp->next = NULL;

    if (head == NULL) {
        head = tail = temp;
    } else {
        tail->next = temp;
        tail = temp;
    }
}

// Get maximum element
int getMax(int arr[], int n) {
    int maxVal = arr[0];
    for (int i = 1; i < n; i++)
        if (arr[i] > maxVal)
            maxVal = arr[i];
    return maxVal;
}

// Radix Sort using Linked List Buckets
void radixSort(int arr[], int n) {

    int maxVal = getMax(arr, n);

    // For each digit position
    for (int exp = 1; maxVal / exp > 0; exp *= 10) {

        // Create 10 buckets (linked lists)
        Node* head[10] = {NULL};
        Node* tail[10] = {NULL};

        // Insert elements into buckets
        for (int i = 0; i < n; i++) {
            int digit = (arr[i] / exp) % 10;
            insert(head[digit], tail[digit], arr[i]);
        }

        // Collect elements from buckets
        int index = 0;
        for (int i = 0; i < 10; i++) {
            Node* temp = head[i];
            while (temp != NULL) {
                arr[index++] = temp->data;
                Node* del = temp;
                temp = temp->next;
                delete del;  // free memory
            }
        }
    }
}

int main() {
    int arr[] = {170, 45, 75, 90, 802, 24, 2, 66};
    int n = sizeof(arr) / sizeof(arr[0]);

    radixSort(arr, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}