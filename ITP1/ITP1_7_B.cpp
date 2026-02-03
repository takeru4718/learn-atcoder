#include <iostream>
#include <vector>

using namespace std;

// int main(){
//     int n,x;
//     int a,b,c;

//     while(true){
//         cin >> n >> x;
//         if(n == 0 && x == 0){
//             break;
//         }

//         int count = 0;

//         for(int i=0; i<n-2; i++){
//             a = i+1;
//             for(int j=0;j<n-2-i;j++){
//                 b = j+1+i+1;
//                 for(int k=0;k<n-2-j-i;k++){
//                     c = k+1+j+1+i+1;
//                     if(a+b+c==x){
//                         count++;
//                     }
//                 }
//             }
//         }

//         cout << count << endl;

//     }
// }

/*書き直し*/
int main(){
    int n,x;
    int a,b,c;

    while(true){
        cin >> n >> x;
        if(n == 0 && x == 0){
            break;
        }

        int count = 0;

        for(int i=1; i<=n-2; i++){
            a = i;
            for(int j=i+1;j<=n-1;j++){
                b = j;
                for(int k=j+1;k<=n;k++){
                    c = k;
                    if(a+b+c==x){
                        count++;
                    }
                }
            }
        }

        cout << count << endl;

    }
}
