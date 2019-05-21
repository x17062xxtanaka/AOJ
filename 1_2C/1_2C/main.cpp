//
//  main.cpp
//  1_2C
//
//  Created by x17062xx on 2019/04/14.
//  Copyright © 2019年 x17062xx. All rights reserved.
//

#include <iostream>
void compareNum(int a,int b,int c);
using namespace std;
int main(int argc, const char * argv[]) {
    int a,b,c;
    cin >> a >> b >> c;
    compareNum(a, b, c);
    return 0;
}
void compareNum(int a,int b,int c){
    int x;
    if (a > b) {
        x = b;
        b = a;
        a = x;
    }
    if (b > c) {
        x = c;
        c = b;
        b = x;
    }
    if (a > b) {
        x = b;
        b = a;
        a = x;
    }
    cout << a <<" "<< b <<" "<< c <<endl;
}
