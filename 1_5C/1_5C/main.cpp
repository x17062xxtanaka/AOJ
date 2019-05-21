//
//  main.cpp
//  1_5C
//
//  Created by x17062xx on 2019/04/15.
//  Copyright © 2019年 x17062xx. All rights reserved.
//

#include <iostream>
using namespace std;
void drawBorder(int w,int h);
int main(int argc, const char * argv[]) {
    int w,h;
    while (1) {
        cin >> w >> h;
        if (w==0&&h==0) {
            break;
        }
        drawBorder(w, h);
    }
    return 0;
}
void drawBorder(int w ,int h){
    for (int i=1; i<=w; i++) {
        for (int j=1; j<=h; j++) {
            if ((i+j)%2==0) {  //i+jの偶数奇数
                cout <<'#';
            }else{
                cout <<'.';
            }
        }
        cout<<endl; //改行
    }
    cout<<endl; //改行
}
