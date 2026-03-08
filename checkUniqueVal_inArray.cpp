//check whether a value in an array is unique or not
#include<iostream>
using namespace std;
 
void uniqueValues(int a[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] == a[j]) {
                cout << "Items repeated" << endl;
                return;  // Exit the function immediately
            }
        }
    }
    // If no duplicates found, all items are unique
    cout << "All Unique items in Array" << endl;
}

int main() {
    int a[100], n;
    cout << "Enter the size of the array\n";
    cin >> n;
    cout << "Enter the elements of the array\n";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    uniqueValues(a, n);
    return 0;
}