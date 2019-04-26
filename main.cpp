//
//  main.cpp
//  homework2
//
//  Created by Mac on 2019/3/10.
//  Copyright © 2019年 Mac. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc,char** argv)
{
    int key,key1;
    cout<<"請輸入您的身高,體重"<<endl;
    cout<<"身高為：";
    cin>>key;
    cout<<"體重為：";
    cin>>key1;
    float key2 = (float)key/(float)100;
    float a = (float)key2*(float)key2;
    float nal = (float)key1/(float)a;
    cout<< (float)nal <<endl;
    return 0;
}
