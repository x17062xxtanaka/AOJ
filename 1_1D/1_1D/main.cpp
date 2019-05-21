//
//  main.cpp
//  1_1D
//
//  Created by x17062xx on 2019/04/14.
//  Copyright © 2019年 x17062xx. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    using namespace std;
    int S;
    cin >> S;
    cout << S/3600 <<":"<< (S%3600)/60 <<":"<< S%60 << endl;
    return 0;
}
