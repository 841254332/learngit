//
//  main.cpp
//  test
//
//  Created by luojiahua on 16/9/7.
//  Copyright © 2016年 luojiahua. All rights reserved.
//

#include <iostream>
using namespace std;
void swap(int &m, int &n){
    int temp;
    temp = m;
    m = n;
    n = temp;
}
int main() {
    // insert code here...
    int a, b;
    int *p1, *p2;
    a = 1;
    b = 2;
    p1 = &a;
    p2 = &b;
//    cout<<p1<<endl;
//    p1=p2;
//    cout<<p1<<endl;
    swap(a, b);
    cout<<a<<","<<b<<endl;
//    cout<<p1<<endl;
//    cout<<&p1<<endl;
//    cout<<*p1<<endl;
    return 0;
}
