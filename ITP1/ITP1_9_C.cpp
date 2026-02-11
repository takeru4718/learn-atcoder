#include <iostream>

using namespace std;

int main(){
    int n;
    string t,h;

    int point_t = 0, point_h = 0; 
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> t >> h;
        if(t==h){
            point_t++;
            point_h++;
        }
        else if(t > h){
            point_t += 3;
        }
        else point_h += 3;
    }

    cout << point_t << " " << point_h << endl;
}