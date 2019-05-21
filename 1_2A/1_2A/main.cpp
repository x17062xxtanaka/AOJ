//
//  main.cpp
//  1_2A
//
//  Created by x17062xx on 2019/04/14.
//  Copyright © 2019年 x17062xx. All rights reserved.
//

#include <iostream>
void compareNum(int a,int b);
using namespace std;
int main(int argc, const char * argv[]) {
    int a,b;
    cin >> a >> b;
    compareNum(a, b);
    return 0;
}
void compareNum(int a,int b){
    if (a > b) {
        cout << "a > b" <<endl;
    }else if (a == b) {
        cout << "a == b" <<endl;
    }else{
        cout << "a < b" <<endl;
    }
}
