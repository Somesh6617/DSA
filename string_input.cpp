#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout<<"Enter the name : ";
    cin >> str;  // reads until the first whitespace
    cout << "You entered: " << str << endl;
    return 0;
}

