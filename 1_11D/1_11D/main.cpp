//
//  main.cpp
//  1_11D
//
//  Created by x17062xx on 2019/05/15.
//  Copyright © 2019 x17062xx. All rights reserved.
//

#include <stdio.h>
#include <iostream>
using namespace std;
class Dice4{
public:
    int number[6];
    
    void roll(char dst){
        switch(dst){
            case 'E':
                setNumber(number[3],number[1],number[0],number[5],number[4],number[2]);
                break;
            case 'N':
                setNumber(number[1],number[5],number[2],number[3],number[0],number[4]);
                break;
            case 'S':
                setNumber(number[4],number[0],number[2],number[3],number[5],number[1]);
                break;
            case 'W':
                setNumber(number[2],number[1],number[5],number[0],number[4],number[3]);
                break;
        }
    };
    
    bool isSameDice(int inputed[]){
        char order[25] = "NNNNWNNNWNNNENNNENNNWNNN";
        for(int i = 0; i < 24; i++){
            roll(order[i]);
            for(int j = 0; j < 6; j++){
                if(inputed[j] != number[j])
                    break;
                if(j == 5)
                    return true;
            }
        }
        return false;
    }
    
private:
    void setNumber(int n0,int n1,int n2,int n3,int n4,int n5){
        number[0] = n0;
        number[1] = n1;
        number[2] = n2;
        number[3] = n3;
        number[4] = n4;
        number[5] = n5;
    }
    
};

int main(){
    int n,k,j;
    cin >> n;
    Dice4 array[n];
    for(int i = 0; i < n; i++){
        cin >> array[i].number[0] >> array[i].number[1] >> array[i].number[2] >> array[i].number[3] >> array[i].number[4] >> array[i].number[5];
    }
    for(k = 0; k < n-1; k++){
        for(j = k+1; j < n; j++){
            if(array[k].isSameDice(array[j].number))
                break;
        }
        if(j < n) break;
    }
    if(k == n-1){
        cout << "Yes" <<endl;
    }else{
        cout << "No" <<endl;
    }
}
