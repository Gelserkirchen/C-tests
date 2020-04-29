//
//  OverrideBaseOperators.cpp
//  ShildtBook
//
//  Created by gelserkirchen on 27.04.2020.
//  Copyright © 2020 gelserkirchen. All rights reserved.
//

#include <stdio.h>
#include <iostream>
using namespace std;

class Sample {
    int x, y, z;
public:
    Sample(){ x = y = z = 0; };
    Sample(int a, int b, int c) { x = a; y = b; z = c; };
    Sample operator+(Sample obj);
    Sample operator=(Sample obj);
    Sample operator++();
    Sample operator++(int notused);
    friend Sample operator--(Sample &obj);
    friend Sample operator--(Sample &obj, int notused);
    friend bool operator==(Sample obj, Sample obj2);
    void show();
};

Sample Sample::operator+(Sample obj){
    Sample tmp;
    
    tmp.x = x + obj.x;
    tmp.y = y + obj.y;
    tmp.z = z + obj.z;
    
    return tmp;
};

Sample Sample::operator=(Sample obj){
    x = obj.x;
    y = obj.y;
    z = obj.z;
    
    return *this;
};

Sample Sample::operator++(){
    x++;
    y++;
    z++;
    
    return *this;
};

Sample Sample::operator++(int notused){
    Sample tmp = *this;
    x++;
    y++;
    z++;
    return tmp;
};

Sample operator--(Sample &obj){
    obj.x--;
    obj.y--;
    obj.z--;
    return obj;
};

Sample operator--(Sample &obj, int notused){
    Sample tmp = obj;
    obj.x--;
    obj.y--;
    obj.x--;
    return tmp;
};

bool operator==(Sample obj, Sample obj2){
    if (obj.x == obj2.x && obj.y == obj2.y && obj.z == obj2.z) {
        return true;
    } else return false;
};

void Sample::show(){
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    cout << "z = " << z << endl;
}


int main(){
    Sample a(3, 4, 5);
    Sample b(4, 5, 6);
    b = b + a;
    b.show();
    ++b;
    b.show();
    a = b++;
    a.show();
}
