//
//  main.cpp
//  1_9B
//
//  Created by x17062xx on 2019/05/08.
//  Copyright © 2019年 x17062xx. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;
int main(int argc, const char * argv[]) {
    string card;
    int h;
    
    while (1) {
        cin >> card;
        if(card=="-"){
            break;
        }
        cin>>h;
        for(int i=0;i<h;i++){
            int h;
            cin>>h;
            card=card.substr(h)+card.substr(0,h);  //(hから残り全部)+(0からhまで)に入れ替える
        }
        cout << card <<endl;
    }
    return 0;
}

//文字列.substr(a,b)は文字列のa番目の文字からb番目の文字までを指す
//bを指定しない時はaから残り全部を指す
