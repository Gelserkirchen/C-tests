////
////  SecondPartOfReturnObj.cpp
////  ShildtBook
////
////  Created by gelserkirchen on 26.04.2020.
////  Copyright © 2020 gelserkirchen. All rights reserved.
////
//
//#include <stdio.h>
//#include <iostream>
//#include <cstdlib>
//
//using namespace std;
//
//class Sample {
//public:
//    int *i;
//    Sample(int i); // standart constructor
//    Sample(const Sample &obj); // constructor of a copy
//    ~Sample(){ std::cout << "Object was destroyed " << i << std::endl; }
//    void show() { std::cout << "I = " << *i << std::endl; };
//    int getIfromSample() { return *i; };
//    
//};
//
//Sample::Sample(const Sample &obj) {
//    i = new int;
//    *i = *obj.i;
//    std::cout << "вызван конструктор копии " << i << std::endl;
//};
//
//Sample::Sample(int p) {
//    std::cout << "Выделение памяти адресуемой указателем p " << std::endl;
//    i = new int; //
//    std::cout << "i = new int " << i << std::endl;
//    *i = p;
//    //std::cout << "*p: " << p << std::endl;
//};
//
//
//void display(Sample ob) {
//    cout <<  "ob.getIfromSample(): " << ob.getIfromSample() << endl;
//}
//
//int main(){
//    Sample obj(10);
//    display(obj);
//    std::cout << "i wiil be killed: " << obj.i << std::endl;
//}
