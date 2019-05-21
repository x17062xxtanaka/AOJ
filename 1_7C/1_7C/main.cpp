//
//  main.cpp
//  1_7C
//
//  Created by x17062xx on 2019/04/21.
//  Copyright © 2019年 x17062xx. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int r,c,mat[100][100];
    int rowplus[100]={0},columnplus[100]={0}; //列、行それぞれの和
    int sum = 0; //行,列の和の合計(表右下)
    cin >> r >> c;
    for (int i=0; i<r; i++) {
        for (int j=0; j<c; j++) {
            cin >> mat[i][j];
            rowplus[i] += mat[i][j];  //行の和を格納
        }
    }
    for(int i=0; i<c; ++i){
        for(int j=0; j<r; ++j){
            columnplus[i] += mat[j][i]; //列の和を格納 jループ
        }
        sum+=columnplus[i];  //和の合計を格納
    }
    for(int i=0; i<r; ++i){
        for(int j=0; j<c; ++j){
                cout << mat[i][j] <<" ";
        }
        cout << rowplus[i] << endl;  //1行ごとに和を出力
    }
    
    for(int i=0; i<c; ++i){
        cout << columnplus[i] << " "; //列の和を一行で出力
    }
    cout << sum << endl;  //和の合計
    return 0;
}
