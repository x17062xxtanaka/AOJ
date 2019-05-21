//
//  main.cpp
//  1_5D
//
//  Created by x17062xx on 2019/04/15.
//  Copyright © 2019年 x17062xx. All rights reserved.
//

/*#include <iostream>
using namespace std;
void call(int n);
int main(){
    int n;
    cin >> n;
    call(n);
    return 0;
}

void call(int n){
    int i = 1;
CHECK_NUM:
    int x = i;
    if ( x % 3 == 0 ){
        cout << " " << i;
        goto END_CHECK_NUM;
    }
INCLUDE3:
    if ( x % 10 == 3 ){
        cout << " " << i;
        goto END_CHECK_NUM;
    }
    x /= 10;
    if ( x ) goto INCLUDE3;
END_CHECK_NUM:
    if ( ++i <= n ) goto CHECK_NUM;
    
    cout << endl;
}*/

#include<iostream>
using namespace std;
int call(int n){
    int x;
    for (int i = 1; i <= n; i++){
        x = i;
        if ( x % 3 == 0){
            cout << " " << i;
        }else{
            while (x){
                if ( x % 10 == 3 ){
                    cout << " " << i;
                    break;
                }
                x /= 10;
            }
        }
    }
    cout << endl;
    return 0;
}
int main(){
    int n;
    cin >> n;
    // if(n){
    //      cout << "ok";
    //}
    call(n);
    return 0;
}
