//
//  main.cpp
//  1_7A
//
//  Created by x17062xx on 2019/04/21.
//  Copyright © 2019年 x17062xx. All rights reserved.
//

#include <iostream>
using namespace std;
int main(){
    int m,f,r;
    while(1){
        cin >> m >> f >> r; //中間、期末、再試験
        if(m==-1 && f==-1 && r==-1) {
            break;
        }
        if(m==-1||f==-1) {
            cout << 'F' << endl;
        }else if(m+f>=80){
            cout << 'A' << endl;
        }else if(m+f>=65) {
            cout << 'B' << endl;
        }else if(m+f>=50){
            cout << 'C' << endl;
        }else if(m+f>=30){
            if(r>=50) {
                cout << 'C' << endl;
            }else cout << 'D' << endl;
        }
        else cout << 'F' << endl;
    }
    return 0;
}
