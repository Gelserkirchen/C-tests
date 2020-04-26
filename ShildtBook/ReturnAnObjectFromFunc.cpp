////
////  ReturnAnObjectFromFunc.cpp
////  ShildtBook
////
////  Created by gelserkirchen on 26.04.2020.
////  Copyright © 2020 gelserkirchen. All rights reserved.
////
//
//#include <stdio.h>
//#include <iostream>
//#include <cstring>
//
//using namespace std;
//class Sample {
//    char *s;
//public:
//    Sample(){ };
//    ~Sample(){ cout << "Освобождение памяти " << endl; };
//    void show() { cout << s << endl; };
//    void set(char *str);
//};
//
//void Sample::set(char *str){
//    s = new char(strlen(str)+1);
//    strcpy(s, str);
//}
//
//Sample input(){
//    Sample tmp;
//    char instr[80];
//    
//    cout << "Введите значение строки" << endl;
//    cin >> instr;
//    tmp.set(instr);
//
//    return tmp;
//}
//
//int main(){
//    Sample ob;
//    ob = input();
//    ob.show();
//}
