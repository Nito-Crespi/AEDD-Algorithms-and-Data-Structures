#include <iostream>
using namespace std;

int sumOdds(int &x, int &y);

int main(int argc, char *argv[]) {
    int n, x, y, flag = 0;
    cin >> n;

    while (flag < n) {
        cin >> x >> y;
        sumOdds(x, y);
        flag++;
    }

    return 0;
}

int sumOdds(int &x, int &y) {
    int sum = 0, i = 0;

    while (i < y) {
        if (x % 2 != 0) {
            sum = sum + x;
            i++;
            x++;
        } else {
            x++;
        }
    }
    cout << sum << endl;

    return 0;
}
