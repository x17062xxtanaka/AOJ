//
//  main.cpp
//  1_6C
//
//  Created by x17062xx on 2019/04/17.
//  Copyright © 2019年 x17062xx. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int n,b,f,r,v; //n件数,b棟,f階,r番目,v人
    int college[4][3][10] = {0,0,0}; //初期値0
    cin >> n;
    for (int i=0; i<n; i++) {
        cin >> b >> f >> r >> v;
        college[b-1][f-1][r-1]+=v;  //
    }
    for (int i=0; i<4; i++) {
        for (int j=0; j<3; j++) {
            for (int k=0; k<10; k++) {
                cout <<" "<< college[i][j][k];  
                if (k==9) {
                    cout << endl;  //改行
                }
            }
        }
        if (i!=3) { //最後は区切りなし
            cout << "####################"<<endl;
        }
    }
    return 0;
}
