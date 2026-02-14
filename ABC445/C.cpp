// #include <iostream>
// #include <vector>

// using namespace std;

//17/18で1問TLEだった．計算量がO(N^2)だとアウトらしい
// int main(){
//     int N;
//     cin >> N;
//     vector<int> A(N);

//     for(int i=0;i<N;i++){
//         cin >> A[i];
//     }

//     for(int i=0;i<N;i++){
//         int ans = A[i];

//         while(true){
//             ans = A[ans-1];
//             if(ans == A[ans-1])break;
//         }
//         cout << ans << " ";
//     }

//     cout << endl;
// }

//模範解答(その1),この方法では計算量O(N)
// #include <iostream>
// #include <vector>
// #include <ranges>

// using namespace std;

// int main(){
//     int N;
//     cin >> N;

//     vector<int> A(N);
//     for(auto&& a : A){//auto&&は転送参照，左辺値，右辺値が自動で切り替わる．今回の場合は&一つでもok
//         cin >> a;
//         --a; //0-indexedにしておく
//     }

//     vector<int> ans(N);
//     //rangesは配列を作らずに，並びを表現する仕組み
//     //views::iota(0, N)で0~N-1の連続した数を作る
//     //「|」は処理をつなげる演算子
//     //views::reverseで反転
//     //それをiで取り出す
//     for(int i : views::iota(0, N) | views::reverse){//降順に，最後に到着するマスを求める

//         if(i==A[i]){//はじめから動かないなら
//             ans[i] = i;//そのマスが答え
//         } else {
//             //動くなら
//             //動いた先のマスから始めたときの結果が答え
//             //配列を右に遷移するのがミソ
//             //後ろからansを埋めていくことで1回の遷移で答えが求まる
//             ans[i] = ans[A[i]];
//         }
//     }

//     for(int a : ans){
//         //1-indexedに直して出力
//         cout << a + 1 << " ";
//     }
//     cout << endl;

//     return 0;
// }

//模範解答(その2),この方法は計算量(NlogN)
#include <iostream>
#include <vector>
#include <ranges>

int main(){
    using namespace std;
    int N;
    cin >> N;

    vector<int> A(N);
    for(auto&& a : A){
        cin >> a;
        --a; 
    }

    //答えを順番に求める
    for(int ans : views::iota(0, N)){
        while(ans != A[ans])
            //経路圧縮しながら探索
            //これは，union-find(素集合データ構造)で使われるpath-halvingと呼ばれる経路圧縮テクニック
            //a = b = cと書くとb = c されてからa = bが行われる．
            ans = A[ans] = A[A[ans]]; 
        cout << ans + 1 << " ";
    }
    cout << endl;

    return 0;
}