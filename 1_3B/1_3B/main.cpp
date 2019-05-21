//
//  main.cpp
//  1_3B
//
//  Created by x17062xx on 2019/04/15.
//  Copyright © 2019年 x17062xx. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    using namespace std;
    int x,i=1;
    cin >> x;
    while (x!=0) {
        cout << "Case " << i <<": " << x << endl;
        i++;
        cin >> x;
    }
    return 0;
}
