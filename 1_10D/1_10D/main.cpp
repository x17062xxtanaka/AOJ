//
//  main.cpp
//  1_10D
//
//  Created by x17062xx on 2019/05/13.
//  Copyright © 2019年 x17062xx. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main(int argc, const char * argv[]) {
    int n;
    double x[1000],y[1000];
    cin >> n;
    for (int i=0; i<n; i++) {
        cin >> x[i];
    }
    for (int i=0; i<n; i++) {
        cin >> y[i];
    }
    for (int p=1; p<=3; p++) {
        double sum =0;
        for (int i=0; i<n; i++) {
            sum+=pow(abs(x[i]-y[i]),(double)p);//p乗 absは絶対値をとる
        }
        sum = pow(sum,1.0/p); //1/p乗
        cout << fixed;
        cout << setprecision(6) << sum << endl;
    }
    double max = 0;
    for (int i=0; i<n; i++) {
        double comp = 0;
        comp = abs(x[i]-y[i]);
        if (comp > max) {
            max = comp; //絶対値の最大を記録
        }
    }
    cout << max << endl;
    return 0;
}
