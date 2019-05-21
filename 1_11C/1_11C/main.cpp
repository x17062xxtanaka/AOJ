//
//  main.cpp
//  1_11C
//
//  Created by x17062xx on 2019/05/13.
//  Copyright © 2019年 x17062xx. All rights reserved.
//

#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
    int dice[2][6];
    int vector[3][4]={{0,2,5,3},{0,1,5,4},{1,2,4,3}};
    int i,j,k,l,m,c;
    for(i=0;i<2;i++)
    {
        for(j=0;j<6;j++)
        {
            cin >> dice[i][j];
        }
    }
    
    for(i=0;i<2;i++)
    {
        for(j=0;j<4;j++)
        {
            int temp = dice[1][vector[i][0]];
            for(k=0;k<3;k++)
            {
                dice[1][vector[i][k]] = dice[1][vector[i][k+1]];
            }
            dice[1][vector[i][3]] = temp;
            c = 0;
            
            for(k=0;k<6;k++)
            {
                if(dice[0][k]==dice[1][k])c++; //同じ時カウントを増やす
            }
            //printf("First: dice[1] %d %d %d %d %d %d\n",dice[1][0],dice[1][1],dice[1][2],dice[1][3],dice[1][4],dice[1][5]);
            if(c==6)break;
            
            for(m=0;m<3;m++){
                for(k=0;k<4;k++)
                {
                    int temp = dice[1][vector[m][0]];
                    for(l=0;l<3;l++)
                    {
                        dice[1][vector[m][l]] = dice[1][vector[m][l+1]];
                    }
                    dice[1][vector[m][3]] = temp;
                    c=0;
                    for(l=0;l<6;l++)
                    {
                        if(dice[0][l]==dice[1][l])c++; //同じ時カウントを増やす
                    }
                    //printf("i:0 dice[1] :%d %d %d %d %d %d\n",dice[1][0],dice[1][1],dice[1][2],dice[1][3],dice[1][4],dice[1][5]);
                    if(c==6)break;
                }
                if(c==6)break;
            }
            if(c==6)break;
        }
        if(c==6)break;
    }
    
    if(c==6){
        cout << "Yes" <<endl;
    }
    else {
        cout << "No" <<endl;
    }
    return 0;
}
