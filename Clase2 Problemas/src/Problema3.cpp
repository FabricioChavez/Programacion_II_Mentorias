
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
long double exponential(double x) {
    long double exp = 1.0+x;
    long double term=x;
    int i=2;
    while (term>0) {
        term=term*(x/double(i));
        exp += (term>0)?term:0;
        i++;
    }
    return exp;
}

int main() {
    int n;
    cin >> n;
    cout << fixed << setprecision(5) << exponential(n) << endl;
    return 0;
}