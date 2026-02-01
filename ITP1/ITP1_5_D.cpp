#include <iostream>

using namespace std;

void call3(int n){
    for(int i = 1; i <= n; i++){
        int x = i;

        if (x % 3 == 0) {
            cout << " " << i;
            continue;
        }

        while (x > 0) {
            if (x % 10 == 3) {
                cout << " " << i;
                break;
            }
            x /= 10;
        }
    }
    cout << endl;
}

void call2(int n){
    int i=1;
    int option = 1;
    int x =i;

    while(option){
       switch(option){
        case 1:
            x = i;
            if(x%3 == 0){
                cout << " " <<i;
                option = 3;
                break;
            }
            [[fallthrough]];
        case 2:
            if(x%10 == 3){
                cout << " " << i;
                option = 3;
                break;
            }
            else {
                x /= 10;
                if(x){
                    option = 2;
                    break;
                }
            }
            [[fallthrough]];
        case 3:
            if( ++i <= n){
                option = 1;
                break;
            }
            else{
                option = 0;
                break;
            }
       }

    }

    cout << endl;
}

void call(int n){
    for(int i=1;i<=n;i++){
        if(i%3 == 0 || i%10 == 3){
            cout << " " << i;
        }
    }
    cout << endl;
}

int main(){
    int n;
    cin >> n;

    call3(n);
    return 0;
}