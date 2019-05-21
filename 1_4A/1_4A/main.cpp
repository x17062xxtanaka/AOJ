//
//  main.cpp
//  1_4A
//
//  Created by x17062xx on 2019/04/15.
//  Copyright © 2019年 x17062xx. All rights reserved.
//

#include <iostream>
#include <iomanip>  //std::cout<<fixed や std::cout<<setprecision() を使うための
using namespace std;
int main(int argc, const char * argv[]) {
    int a,b;
    cin >> a >> b;
    cout << fixed;  //小数点の桁数を正確に指定(%fに相当)
    cout<< setprecision(5); //()で桁数を指定
    cout << a/b <<" "<< a%b <<" "<<(double)a/b << endl;
    return 0;
}
