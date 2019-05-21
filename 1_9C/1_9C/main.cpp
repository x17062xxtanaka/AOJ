//
//  main.cpp
//  1_9C
//
//  Created by x17062xx on 2019/05/08.
//  Copyright © 2019年 x17062xx. All rights reserved.
//

#include<iostream>
#include<string>
using namespace std;
int main(){
    int n,i;
    cin >> n;
    string s1,s2;
    int t=0,h=0;
    
    for(i=0;i<n;i++){
        cin >> s1 >> s2;
        if(s1.compare(s2)==0) { //元の文と比較する文が同じなら０辞書順で早ければ0より大きい数を返す
            t++;h++;
        }else if(s1.compare(s2)>0){
            t+=3;
        }else {
            h+=3;
        }
    }
    cout << t << " " << h << endl;
}
