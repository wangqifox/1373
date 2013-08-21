//
//  main.cpp
//  1373
//
//  Created by wangqi on 13-8-19.
//  Copyright (c) 2013年 wangqi. All rights reserved.
//

#include <iostream>
using namespace std;

int countOne(int num)
{
    int digits = 1;
    int low = 0;
    int high = 0;
    int sum = 0;
    while(num / digits)
    {
        high = num / (digits * 10);
        low = num % (digits);
        int c = (num / digits) % 10;
        if(c == 0)
        {
            sum += high * digits;
        }
        else if(c == 1)
        {
            sum += high * digits;
            sum += low + 1;
        }
        else
        {
            sum += (high + 1) * digits;
        }
        digits *= 10;
    }
    return sum;
}

int main(int argc, const char * argv[])
{

    // insert code here...
//    std::cout << "Hello, World!\n";
    int a , b;
    while(cin >> a >> b)
    {
        if(a > b)
        {
            int temp = a;
            a = b;
            b = temp;
        }
        if(a > 0)
            a--;
        cout << countOne(b) - countOne(a) << endl;
    }
    return 0;
}

