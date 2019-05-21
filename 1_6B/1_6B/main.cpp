//
//  main.cpp
//  1_6B
//
//  Created by x17062xx on 2019/04/15.
//  Copyright © 2019年 x17062xx. All rights reserved.
//
#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int cards[4][13];  //[mark][number]
    int n,Number;
    char Mark;
    cin >> n;
    for (int i=0; i<4; i++) {
        for (int j=0; j<13; j++) {
            cards[i][j]=0;
        }
    }
    
    for (int i=0; i<n; i++) {
        cin >> Mark >> Number;
        //番号とマークが入力された時'1'で記録
        if (Mark == 'S') {
            cards[0][Number-1]=1;
        }else if(Mark == 'H'){
            cards[1][Number-1]=1;
        }else if(Mark == 'C'){
            cards[2][Number-1]=1;
        }else if(Mark == 'D'){
            cards[3][Number-1]=1;
        }
    }
    for (int i=0; i<4; i++) {
        for (int j=0; j<13; j++) {
            //'1'が記録されていないときマークと番号を印字
            if(i == 0 && cards[i][j] == 0){
                cout << 'S' <<" "<< j+1 << endl;
            }else if(i == 1 && cards[i][j] == 0){
                cout << 'H' <<" "<< j+1 << endl;
            }else if(i == 2 && cards[i][j] == 0){
                cout << 'C' <<" "<< j+1 << endl;
            }else if(i == 3 && cards[i][j] == 0){
                cout << 'D' <<" "<< j+1 << endl;
            }
        }
    }
    return 0;
}
