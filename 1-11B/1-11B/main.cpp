//
//  main.cpp
//  1-11B
//
//  Created by x17062xx on 2019/05/13.
//  Copyright © 2019年 x17062xx. All rights reserved.
//

#include<iostream>
#include<string>
using namespace std;
struct Dice{
    int s[6];
    void roll(char c){
        int b;
        if(c=='E'){
            b=s[0];
            s[0]=s[3];
            s[3]=s[5];
            s[5]=s[2];
            s[2]=b;
        }
        if(c=='W'){
            b=s[0];
            s[0]=s[2];
            s[2]=s[5];
            s[5]=s[3];
            s[3]=b;
        }
        if(c=='N'){
            b=s[0];
            s[0]=s[1];
            s[1]=s[5];
            s[5]=s[4];
            s[4]=b;
        }
        if(c=='S'){
            b=s[0];
            s[0]=s[4];
            s[4]=s[5];
            s[5]=s[1];
            s[1]=b;
        }
        if(c=='R'){ //上下を変えずに回転
            b=s[1];
            s[1]=s[2];
            s[2]=s[4];
            s[4]=s[3];
            s[3]=b;
        }
    }
    int top() {
        return s[0];
    }
    int right(){
        return s[2];
    }
    int left(){
        return s[3];
    }
    int front(){
        return s[1];
    }
};
int main(){
    Dice d;
    for(int i=0;i<6;i++){
        cin >> d.s[i];
    }
    int n;cin >> n;
    while(n--){
        int a,b;
        cin >> a >> b;
        if(d.left()==a) d.roll('E'); //左面がaの時右に回す
        if(d.right()==a) d.roll('W'); //右面がaの時左に回す
        while(d.top()!=a) d.roll('N'); //上面がaでない時上に回す(上面がaになるまで繰り返す)
        while(d.front()!=b) d.roll('R'); //正面がbでないとき上下を変えずに回転(正面がbになるまで繰り返す)
        cout << d.right() << endl; //右側を出力
    }
    return 0;
}
