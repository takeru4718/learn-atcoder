#include <iostream>
#include <iomanip>

using namespace std;
#define PI 3.14159265358979
int main(){
    double D;
    
    cin >> D;


    cout << fixed << setprecision(10) << D/2 * D/2 * PI << endl;

}