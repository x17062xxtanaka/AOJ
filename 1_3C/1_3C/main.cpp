//
//  main.cpp
//  1_3C
//
//  Created by x17062xx on 2019/04/15.
//  Copyright © 2019年 x17062xx. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int x,y,blank;
    while (1) {
        cin >> x >>y;
        if (x==0&&y==0) {
            break;
        }
        if (x >y) {
            blank = y;
            y=x;
            x=blank;
        }
        cout << x <<" "<< y << endl;
    }
    return 0;
}
