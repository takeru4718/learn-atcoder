#include <iostream>
#include <iomanip>

using namespace std;

#define PI 3.14159265358979

int main(){
    double r;
    cin >> r;

    double S = PI * r * r;
    double R = 2 * PI * r;

    cout << fixed << setprecision(6) << S << " " << R << endl;
    return 0;
}