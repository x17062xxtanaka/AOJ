//
//  main.cpp
//  1_10C
//
//  Created by x17062xx on 2019/05/13.
//  Copyright © 2019年 x17062xx. All rights reserved.
//

#include<iostream>
#include<math.h>
#include<stdio.h>
#include <iomanip>
using namespace std;
int main(){
    int n,i;
    double s[1000]={},sum=0,a=0;
    cin >> n;
    while(n!=0){
        for(i=0;i<n;i++){
            cin >> s[i];
            sum+=s[i];
        }
        for(i=0;i<n;i++){
            a+=((sum/n)-s[i])*((sum/n)-s[i])/n; //分散a^2=平均値との差の二乗/nの合計
        }
        cout << fixed;
        cout << setprecision(8) << sqrt(a) << endl;
        cin >> n;
        sum=0;a=0; //カウントリセット
    }
    
    return 0;
}
