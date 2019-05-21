//
//  main.cpp
//  1_8C
//
//  Created by x17062xx on 2019/04/25.
//  Copyright © 2019年 x17062xx. All rights reserved.
//

#include <iostream>
#include <cctype>
#include <string>
using namespace std;

int main(int argc, const char * argv[]) {
    string sentence;
    int alpha[26]={0};

    //getline(cin,sentence);
    while (1) {
        getline(cin,sentence);
    for (int i=0; i<sentence.size(); i++) {
        if (isalpha(sentence[i])) {  //文字かどうか判別
            if(isupper(sentence[i])) { //大文字の時↓
                sentence[i] = (char)tolower(sentence[i]); //小文字を返す
            }
        }
        //cout << sentence[i];
    }
    for(int j=0;j<=(int)sentence.size();j++){
        alpha[sentence[j] -'a']++; //sentenceに値がある時+する
    }
    }
    for(char ch='a';ch<='z';ch++){
        cout<<ch<<" : "<<alpha[ch-'a']<<endl;
    }
    return 0;
}
//#include<iostream>
//#include<string>
//using namespace std;
//int main(){
//    string str;
//    int ab[26]={};
//    int i;
//    while(getline(cin,str)){
//        for(i=0;i<str.size();i++){
//            if(str[i]>='a'&&str[i]<='z') ab[str[i]-'a']++;
//            else if(str[i]>='A'&&str[i]<='Z') ab[str[i]-'A']++;
//        }
//        //cout << str << endl;
//    }
//    for(i=0;i<26;i++){
//        cout << (char)('a'+i) << " : " << ab[i] << endl;
//    }
//    return 0;
//}

