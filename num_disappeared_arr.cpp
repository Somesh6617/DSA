#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements (values should be from 1 to " << n << "): ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int present[n + 1] = {0};
    for (int i = 0; i < n; i++) {
        present[arr[i]] = 1;
    }

    cout << "Missing numbers: ";
    bool found = false;
    for (int i = 1; i <= n; i++) {
        if (present[i] == 0) {
            cout << i << " ";
            found = true;
        }
    }
    if (!found) {
        cout << "None";
    }
    cout << endl;

    return 0;
}

