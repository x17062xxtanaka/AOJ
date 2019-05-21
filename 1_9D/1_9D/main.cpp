//
//  main.cpp
//  1_9D
//
//  Created by x17062xx on 2019/05/12.
//  Copyright © 2019年 x17062xx. All rights reserved.
//

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str;
    cin >> str;
    int q,i;
    cin >> q;
    string s1,s2;
    int a,b;
    for(i=0;i<q;i++){
        //cout << str << endl;
        cin >> s1 >> a >> b;
        if(s1 == "print"){
            cout << str.substr(a,b-a+1) << endl;  //substr(a,b)でa番目から長さb文を文字列を取得
        }else if(s1 == "reverse"){
            string s3 = str.substr(a,b-a+1);
            reverse(s3.begin(),s3.end()); //reverse(始まり、終わり);で指定区間内を入れ替え
            str = str.substr(0,a)+s3+str.substr(b+1,str.size()-a-1);
        }else{
            cin >> s2; //入れ替える文字列
            str=str.substr(0,a)+s2+str.substr(b+1,str.size()-a-1);
        }
    }
}
