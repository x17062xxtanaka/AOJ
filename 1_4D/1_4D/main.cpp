//
//  main.cpp
//  1_4D
//
//  Created by x17062xx on 2019/04/15.
//  Copyright © 2019年 x17062xx. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int n,x,Max=0,Min=0; //x=入力する値
    long sum=0; //long型は記録できる数値の上限が大きい
    cin >> n;
    for (int i=0; i<n; i++) {
        cin >> x;
        sum+=x;
        if (i==0) {
            Max = x;
            Min = x;
        }else if(Max < x){
            Max = x;
        }else if(Min > x){
            Min = x;
        }
    }
    cout << Min << " "<< Max << " "<<sum <<endl;
    return 0;
}
