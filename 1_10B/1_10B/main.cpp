//
//  main.cpp
//  1_10B
//
//  Created by x17062xx on 2019/05/13.
//  Copyright © 2019年 x17062xx. All rights reserved.
//

#include <iostream>
#include <math.h>
#include <iomanip>
using namespace  std;
int main(int argc, const char * argv[]) {
    int a,b,c;
    double rad; //ラジアン
    cin >> a >> b >> c;
    rad = c*M_PI/180; //角度->ラジアン表記
    cout << fixed;
    cout << setprecision(8) << a*b*sin(rad)/2 << "\n" << a+b+(sqrt(a*a+b*b-2*a*b*cos(rad))) << "\n" << b*sin(rad) <<endl;
    return 0;
}
