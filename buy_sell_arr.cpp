#include <iostream>
using namespace std;

int main() {
    int days;
    cout << "Enter number of days: ";
    cin >> days;

    if (days < 2) {
        cout << "Not enough days";
        return 0;
    }

    int a[days], i, buyDay = 0, sellDay = 0;
    cout << "Enter " << days << " stock prices: ";
    for (i = 0; i < days; i++) {
        cin >> a[i];
    }

    int minPrice = a[0];
    int maxProfit = 0;

    for (i = 1; i < days; i++) {
        if (a[i] < minPrice) {
            minPrice = a[i];
            buyDay = i;
        }

        if ((a[i] - minPrice) > maxProfit) {
            maxProfit = a[i] - minPrice;
            sellDay = i;
        }
    }

    if (maxProfit > 0) {
        cout << "Buy stocks on day " << buyDay << " at price " << a[buyDay]
             << " and sell on day " << sellDay << " at price " << a[sellDay] << ".\n";
        cout << "Maximum profit: " << maxProfit;
    } else {
        cout << "No profitable trade possible";
    }

    return 0;
}
