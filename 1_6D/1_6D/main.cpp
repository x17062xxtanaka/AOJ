//
//  main.cpp
//  1_6D
//
//  Created by x17062xx on 2019/04/17.
//  Copyright © 2019年 x17062xx. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int n,m;
    cin >> n >> m;
    int matrix[100][100]={0,0};
    int row[100]={0};
    int result[100]={0};  //計算結果格納用配列
    for (int i=0; i<n; i++) {  //入力1
        for (int j=0; j<m; j++) {
            cin >> matrix[i][j];
        }
    }
    for (int i=0; i<m; i++) { //入力2
        cin >> row[i];
    }
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            result[i] += matrix[i][j]*row[j];  //行列計算
        }
    }
    for (int i=0; i<n; i++) {
        cout << result[i] << endl;
    }
    return 0;
}
