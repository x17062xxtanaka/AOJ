//
//  main.cpp
//  1_3D
//
//  Created by x17062xx on 2019/04/15.
//  Copyright © 2019年 x17062xx. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int a,b,c,count=0;
    cin >>a>>b>>c;
    for (int i=a; i<=b; i++) {
        if (c%i==0) {
            count++;
        }
    }
    cout << count <<endl;
    return 0;
}
