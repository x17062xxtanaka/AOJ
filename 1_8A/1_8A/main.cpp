//
//  main.cpp
//  1_8A
//
//  Created by x17062xx on 2019/04/22.
//  Copyright © 2019年 x17062xx. All rights reserved.
//

/*int isalpha(char ch): ch がアルファベットなら true を返す
int isdigit(char ch): ch が数字なら true を返す
int islower(char ch): ch が小文字なら true を返す
int isupper(char ch): ch が大文字なら true を返す
int tolower(char ch): ch の小文字を返す
int toupper(char ch): ch の大文字を返す
 */
#include <iostream>
#include <cctype>
#include <string>
using namespace std;
int main(int argc, const char * argv[]) {
    char alpha;
    while(1){
        cin.get(alpha);  //cin.getで一行読み取り
        
        if(alpha=='\n') { //改行で終了
            break;
        }
        if(isalpha(alpha)){  //アルファベッドかどうか判定
            if(islower(alpha)) { //小文字の時↓
                cout << (char)toupper(alpha); //大文字を返す (char)で型指定
            }
            if(isupper(alpha)) { //大文字の時↓
                cout << (char)tolower(alpha); //小文字を返す
            }
        }else{
            cout << alpha; //アルファベッド以外の文字はそのまま出力
        }
    }
    cout << "\n";
    return 0;
}
