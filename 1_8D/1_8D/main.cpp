//
//  main.cpp
//  1_8D
//
//  Created by x17062xx on 2019/04/26.
//  Copyright © 2019年 x17062xx. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    string sentence,sentence2;
    cin >> sentence >> sentence2;
    //getline(cin,sentence);
    sentence = sentence +sentence;// 二回分にする
    //cout << sentence << endl;
    if (sentence.find(sentence2) != string::npos) { //sentence2がsentenceに含まれていたらnopsを返す
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    
    return 0;
}
