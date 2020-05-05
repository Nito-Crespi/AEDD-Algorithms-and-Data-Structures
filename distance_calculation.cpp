#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(int argc, char *argv[]) {
    double xCoordinate1, yCoordinate1, xCoordinate2, yCoordinate2;

    // Input coordinates
    cin >> xCoordinate1 >> yCoordinate1 >> xCoordinate2 >> yCoordinate2;

    // Calculate and output distance
    cout << setprecision(4) << fixed << sqrt(pow((xCoordinate2 - xCoordinate1), 2) + pow((yCoordinate2 - yCoordinate1), 2)) << endl;

    return 0;
}
