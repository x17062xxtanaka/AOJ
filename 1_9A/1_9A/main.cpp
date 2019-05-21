//
//  main.cpp
//  1_9A
//
//  Created by x17062xx on 2019/05/08.
//  Copyright © 2019年 x17062xx. All rights reserved.
//
#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
#include <iterator>
#include <math.h>
#include <iterator>


using namespace std;
int main(){
    string str,s;
    int cnt=0;
    cin >> s;
    for(int i=0,l=s.size();i<l;i++){
        if(s[i]>='A'&&s[i]<='Z')s[i]+=('a'-'A');
    }
    while(1){
        cin >> str;
        if(str=="END_OF_TEXT")break;
        for(int i=0,l=str.size();i<l;i++)
            if(str[i]>='A'&&str[i]<='Z') str[i]+=('a'-'A');
        if(s==str) cnt++;
    }
    cout << cnt << endl;
}
//#include <iostream>
//#include <string>
//using namespace std;
//int main(int argc, const char * argv[]) {
//    string w,t; //w:単語 t:文章
//    int count;
//    int n;
//
//    cin >> w >> t;
//
//    //for (int i=0; i<w.size; <#increment#>) {
//       // <#statements#>
//    // }
//    //if (t.find() != string::npos) {
//
//    //}
//    n = t.find(w);
//    cout << n << endl;
//    return 0;
//}
/*
 using namespace std;
 int main(){
 string w;
 string t;
 cin >> w;
 int i;
 for(i=0;i<w.size();i++) {
 if('A'<=w[i]&&w[i]<='Z') w[i]+='a'-'A';
 }
 int o=0;
 cin >> t;
 while(t!="END_OF_TEXT"){
 
 for(i=0;i<t.size();i++) {
 if('A'<=t[i]&&t[i]<='Z') t[i]+='a'-'A';
 }
 if(w==t) o++;
 cin >> t;
 }
 cout << o << endl;
 }
 */
