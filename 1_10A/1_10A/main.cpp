//
//  main.cpp
//  1_10A
//
//  Created by x17062xx on 2019/05/13.
//  Copyright © 2019年 x17062xx. All rights reserved.
//

#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
int main(int argc, const char * argv[]) {
    double x1,y1,x2,y2;
    cin >> x1 >> y1 >> x2 >> y2;
    std::cout << std::fixed;
    double s = sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
    cout << setprecision(8) << s <<endl;
    return 0;
}
