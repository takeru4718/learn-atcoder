#include <iostream>
#include <cmath>
#include <iomanip>

#define PI 3.14159265358979

using namespace std;

int main(){
    double a,b,c;

    double S, L, h;

    cin >> a >> b >> c;

    h = b * sin(c*PI/180);

    S = a * h / 2;

    L=a+b+sqrt(pow(a - b*cos(c*PI/180),2) + h*h);

    cout << fixed << setprecision(8) << S << "\n" << L << "\n" << h << "\n";
}