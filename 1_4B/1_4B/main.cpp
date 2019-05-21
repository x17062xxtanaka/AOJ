//
//  main.cpp
//  1_4B
//
//  Created by x17062xx on 2019/04/15.
//  Copyright © 2019年 x17062xx. All rights reserved.
//

#include <iostream>
#include <math.h>
#include <iomanip>  //std::cout<<fixed や std::cout<<setprecision() を使うための
using namespace std;
int main(int argc, const char * argv[]) {
    double r;
    cin >> r;
    cout << fixed;  //小数点の桁数を正確に指定(%fに相当)
    cout<< setprecision(6); //()で桁数を指定
    cout << r*r*M_PI <<" "<< 2*r*M_PI << endl;
    return 0;
}
