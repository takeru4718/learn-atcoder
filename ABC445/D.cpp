// #include <iostream>
// #include <vector>

// using namespace std;

// //難しく分割せずに横一直線に分割，分割できなくなったら縦に分割ってやろうとした
// //各ブロックの左上の座標はposに格納できたが，h[i],w[i]が属するブロックの判定を考えているうちにタイムアップしてしまった
// int main(){
//     int H, W, N;
//     cin >> H >> W >> N;

//     vector<int> h(N),w(N);
//     for(int i=0;i<N;i++){
//         cin >> h[i] >> w[i];
//     }

//     vector<vector<int>> remain(H,vector<int>(W));
//     vector<pair<int,int>> pos;
    
//     for(int i=0;i<N-1;i++){
//         //横に分割
//         if(H-1>i){
//             remain.pop_back();
//             pos.push_back({H-1-i, 0});
//         } else {//縦に分割
//             remain[i].pop_back();
//             pos.push_back({0, W-1-i});
//         }
//     }

//     pos.push_back({0,0});

//     for(int i=0;i<N;i++){
//         //ここでタイムアップ
//         if(h[i] != 1 && pos[i].first == h[i]-1){
//             cout << pos[i].first << " " << pos[i].second << endl;
//         }
//     }

// }

//模範解答
//よく使う標準ライブラリを全部まとめて読み込むヘッダ
//しかし標準規格じゃない(GCC専用)から注意
#include <bits/stdc++.h>
using namespace std;

int main(){
    int H, W, N;
    cin >> H >> W >> N;
    vector<int> h(N), w(N);
    for(int i=0;i<N;i++) cin >> h[i] >> w[i];

    //ord_h, ord_w : ピースの番号の並び替え
    //h[ord_h[i]] >= h[ord_h[i + 1]]
    //w[ord_w[i]] >= w[ord_w[i + 1]]
    vector<int> ord_h(N), ord_w(N);
    //0から順番に値を入れる
    iota(ord_h.begin(), ord_h.end(), 0);
    //hの配列をソートしたいけど，元の並びがわからなくなる
    //→出力の際に困る→インデックスを並び替えたい
    //[&]は外の変数を参照で全部使えるようにする
    //第3引数の比較関数comp(x,y)はxをyより前に置きたいか?ということを判定している
    //つまりtrueならxを前にする
    //sortはイントロソートというハイブリッド．クイックソート，ヒープソート，挿入ソートを状況で切り替える
    //sort内部アルゴリズムが比較すべき要素を選び，その2要素がラムダに渡される
    //x, yはord_h配列の持つ値
    //それらを取ってきて関数内部で比較し，trueならxを前に持ってくる
    //ラムダ式の第1引数を第2引数より前にもってきたいか，というのをreturnで判定していることに注意
    sort(ord_h.begin(), ord_h.end(), [&](int x, int y){return h[x] > h[y];});

    iota(ord_w.begin(), ord_w.end(), 0);
    sort(ord_w.begin(), ord_w.end(), [&](int x, int y){ return w[x] > w[y];});

    //続きここから

}
