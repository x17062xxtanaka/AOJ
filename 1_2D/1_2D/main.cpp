//
//  main.cpp
//  1_2D
//
//  Created by x17062xx on 2019/04/14.
//  Copyright © 2019年 x17062xx. All rights reserved.
//

#include <iostream>
void compareNum(int w, int h, int x, int y, int r);
using namespace std;
int main(int argc, const char * argv[]) {
    int w,h,x,y,r;
    cin >> w >> h >> x >> y >> r;
    compareNum(w, h, x, y, r);
    return 0;
}
void compareNum(int w, int h, int x, int y, int r){
    if (y <= h-r && x <= w-r && x>=r && y>=r) {
        cout << "Yes" <<endl;
    }else{
        cout << "No" <<endl;
    }
}
