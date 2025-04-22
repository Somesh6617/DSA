#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n = 7; // Maximum number in the outermost layer
    int size = 2 * n - 1;

    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            int value = n - min(min(i, j), min(size - 1 - i, size - 1 - j));
            cout << value << " ";
        }
        cout << endl;
    }

    return 0;
}
