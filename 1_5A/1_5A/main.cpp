//
//  main.cpp
//  1_5A
//
//  Created by x17062xx on 2019/04/15.
//  Copyright © 2019年 x17062xx. All rights reserved.
//

#include <iostream>
using namespace std;
void drawSquare(int w,int h);
int main(int argc, const char * argv[]) {
    int w,h;
    while (1) {
        cin >> w >> h;
        if (w==0&&h==0) {
            break;
        }
        drawSquare(w, h);
    }
    return 0;
}
void drawSquare(int w ,int h){
    for (int i=0; i<w; i++) {
        for (int j=0; j<h; j++) {
            cout <<'#';
        }
        cout<<endl; //改行
    }
    cout<<endl; //改行
}
