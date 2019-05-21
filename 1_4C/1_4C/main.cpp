//
//  main.cpp
//  1_4C
//
//  Created by x17062xx on 2019/04/15.
//  Copyright © 2019年 x17062xx. All rights reserved.
//

#include <iostream>
void calcNum(int a,int b,char op);
using namespace std;

int main(int argc, const char * argv[]) {
    int a,b;
    char op;
    while(1){
        cin >> a >> op >> b;
        //op == '?' ? break : calcNum(a, b, op);  <-これ何故できないのかわかりません
        if (op=='?') {
            break;
        }else{
            calcNum(a, b, op);
        }
    }
    return 0;
}
void calcNum(int a,int b,char op){
    if (op=='+') {
        cout << a+b << endl;
    }else if(op=='-'){
        cout << a-b << endl;
    }else if(op=='*'){
        cout << a*b << endl;
    }else if(op=='/'){
        cout << a/b << endl;
    }
}
