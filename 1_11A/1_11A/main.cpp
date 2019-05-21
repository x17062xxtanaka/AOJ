//
//  main.cpp
//  1_11A
//
//  Created by x17062xx on 2019/05/13.
//  Copyright © 2019年 x17062xx. All rights reserved.
//

#include<iostream>
#include<string>
using namespace std;
int main(){
    int s[6];
    string dt;
    int b;
    for (int i=0; i<6; i++) {
        cin >> s[i];
    }
 
    cin >> dt;
    
    for (int i =0; i<dt.size(); i++) {
        if(dt[i]=='E'){
            b=s[0];
            s[0]=s[3];
            s[3]=s[5];
            s[5]=s[2];
            s[2]=b;
        }
        if(dt[i]=='W'){
            b=s[0];
            s[0]=s[2];
            s[2]=s[5];
            s[5]=s[3];
            s[3]=b;
        }
        if(dt[i]=='N'){
            b=s[0];
            s[0]=s[1];
            s[1]=s[5];
            s[5]=s[4];
            s[4]=b;
        }
        if(dt[i]=='S'){
            b=s[0];
            s[0]=s[4];
            s[4]=s[5];
            s[5]=s[1];
            s[1]=b;
        }
    }
    
    
    cout << s[0] << endl;
    return 0;
}
