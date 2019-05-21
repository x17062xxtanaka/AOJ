//
//  main.cpp
//  1_5B
//
//  Created by x17062xx on 2019/04/15.
//  Copyright © 2019年 x17062xx. All rights reserved.
//

#include <iostream>
using namespace std;
void drawFlame(int w,int h);
int main(int argc, const char * argv[]) {
    int w,h;
    while (1) {
        cin >> w >> h;
        if (w==0&&h==0) {
            break;
        }
        drawFlame(w, h);
    }
    return 0;
}
void drawFlame(int w ,int h){
    for (int i=1; i<=w; i++) {
        for (int j=1; j<=h; j++) {
            if (i==1||j==1||i==w||j==h) {
                cout <<'#';
            }else{
                 cout <<'.';
            }
        }
        cout<<endl; //改行
    }
    cout<<endl; //改行
}
