//
//  main.cpp
//  1_6A
//
//  Created by x17062xx on 2019/04/15.
//  Copyright © 2019年 x17062xx. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int n;
    cin >> n;
    int x[n];
    for (int i=0; i<n; i++) {
        cin >> x[i];
    }
    for (int i=n-1; i>=0; i--) {
        cout << x[i];
        if (i!=0) {
            cout << " ";
        }
    }
    cout << endl;
    return 0;
}
