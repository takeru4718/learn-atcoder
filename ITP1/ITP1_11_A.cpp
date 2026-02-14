#include <iostream>
#include <vector>

using namespace std;

//自己流解答
// struct Dice{
//     vector<int>num,S_table,E_table;
//     int up_num, table_size;

//     Dice() : num(6),S_table{1,5,6,2},E_table{1,4,6,3},up_num(1) {
//         table_size = S_table.size();
//     }

//     void rotate_S(){
//         int temp;
//         temp = S_table.at(0);
//         for(int i=0;i<table_size -1 ;i++){
//             S_table.at(i) = S_table.at(i+1);
//         }
//         S_table.at(3) = temp;

//         E_table.at(0) = S_table.at(0);

//         E_table.at(2) = S_table.at(2);

//         up_num = S_table.at(0);
//     }

//     void rotate_N(){
//         int temp;
//         temp = S_table.at(table_size-1);
//         for(int i=0;i<table_size-1;i++){
//             S_table.at(table_size-1-i) = S_table.at(table_size-1-i-1);
//         }
//         S_table.at(0) = temp;

//         E_table.at(0) = S_table.at(0);

//         E_table.at(2) = S_table.at(2);

//         up_num = S_table.at(0);
//     }

//     void rotate_E(){
//         int temp;
//         temp = E_table.at(0);
//         for(int i=0;i<table_size -1 ;i++){
//             E_table.at(i) = E_table.at(i+1);
//         }
//         E_table.at(3) = temp;

//         S_table.at(0) = E_table.at(0);

//         S_table.at(2) = E_table.at(2);

//         up_num = E_table.at(0);
//     }

//     void rotate_W(){
//         int temp;
//         temp = E_table.at(table_size-1);
//         for(int i=0;i<table_size-1;i++){
//             E_table.at(table_size-1-i) = E_table.at(table_size-1-i-1);
//         }
//         E_table.at(0) = temp;

//         S_table.at(0) = E_table.at(0);

//         S_table.at(2) = E_table.at(2);

//         up_num = E_table.at(0);
//     }


// };

// int main(){
//     Dice dice;
//     for(int i=0; i<6; i++){
//         cin >> dice.num.at(i);
//     }
//     dice.up_num = dice.num.at(0);

//     string roll;
//     cin >> roll;

//     for(int i=0;i<roll.size();i++){
//         if(roll.at(i) == 'S'){
//             dice.rotate_S();
//         }
//         else if(roll.at(i) == 'E'){
//             dice.rotate_E();
//         }
//         else if(roll.at(i) == 'N'){
//             dice.rotate_N();
//         }
//         else if(roll.at(i) == 'W'){
//             dice.rotate_W();
//         }
//     }

//     cout << dice.num.at(dice.up_num-1) << endl;


// }

//模範解答
struct Dice{
    vector<int> d;

    //0:上，1:南, 2:東, 3:西, 4:北, 5:下
    Dice() : d(6){}

    void roll(char c){
        int t;

        if(c == 'S'){
            // 北→上, 上→南, 南→下, 下→北
            t=d[0]; d[0]=d[4]; d[4]=d[5]; d[5]=d[1]; d[1]=t;
        } 
        else if(c == 'N'){
            // 南→上, 上→北, 北→下, 下→南
            t=d[0]; d[0]=d[1]; d[1]=d[5]; d[5]=d[4]; d[4]=t;
        }
        else if(c == 'E'){
            // 西→上, 上→東, 東→下, 下→西
            t=d[0]; d[0]=d[3]; d[3]=d[5]; d[5]=d[2]; d[2]=t;
        }
        else if(c == 'W'){
            // 東→上, 上→西, 西→下, 下→東
            t=d[0]; d[0]=d[2]; d[2]=d[5]; d[5]=d[3]; d[3]=t;
        }
    }

};

int main(){
    Dice dice;

    string str;

    for(int i=0;i<6;i++){
        cin >> dice.d[i];
    }

    cin >> str;

    for(char c: str){
        dice.roll(c);
    }

    cout << dice.d[0] << endl;

}