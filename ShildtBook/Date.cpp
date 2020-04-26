////
////  Date.cpp
////  ShildtBook
////
////  Created by gelserkirchen on 22.04.2020.
////  Copyright © 2020 gelserkirchen. All rights reserved.
////
//
//#include <stdio.h>
//#include <iostream>
//#include <ctime>
//
//using namespace std;
//
//class Timer {
//    int seconds = 0;
//public:
//    // 1. Craate constructors
//    // seconds in string
//    Timer(char *t) {seconds = atoi(t);}
//    // seconds in int
//    Timer(int t) {seconds = t;}
//    // seconds in min + seconds
//    Timer(int min, int sec) {seconds = min*60 + sec;}
//    
//    void run();
//};
//
//// 2. Define function
//
//void Timer::run(){
//    clock_t t1;
//    t1 = clock();
//    while ((clock()/CLOCKS_PER_SEC - t1/CLOCKS_PER_SEC) < seconds) {
//        cout << "\a";
//    }
//}
//
//
//
//int main(){
//    //tm *ptr; // just ordinary pointer to struct tm
//    
//    time_t ct_in_msc = time(0); // it is struct that get current time in milliseconds - time(0) - it is current time
//    cout << "ct_in_msc = " << ct_in_msc << endl;
//    
//    tm *ptr = localtime(&ct_in_msc); // it is just pointer to place where i can get A for all my Q
//    cout << "ptr = " << ptr << endl; // smth like this 0x1000sb7s0d
//    
//    // THEN I CAN DO TWO THINGS, JUST TAKE PTR AND GET FROM THEM HIS PARTS OR GET A FULL ASCII TIME WITH ASCTIME
//    //1)
//    cout << ptr->tm_hour << ':' << ptr-> tm_min << ':' << ptr-> tm_sec << endl;
//    //2)
//    cout << asctime(ptr) << endl; // wed apr 22 07 ....
//    
//    cout << "Second example: " << endl;
//    clock_t t2;
//    cout << "clock_t t2 = " << t2 << endl;
//    t2 = clock();
//    cout << "clock_t t2 after t2 = clock() " << t2 << endl;
//    cout << "CLOCKS_PER_SEC = " << CLOCKS_PER_SEC << endl;
//    double t3 = t2;
//    cout << "t2 / CLOCKS_PER_SEC = " << t3 / CLOCKS_PER_SEC << endl;
//    
//    // 3. Create instance and run them
//    
//    Timer a(10);
//    a.run();
//
//    cout << "Input amount of seconds: ";
//    char str[80];
//    cin >> str;
//    Timer b(str); // init in dynamic
//    b.run();
//    
//    cout << "Input minuts and seconds: ";
//    int min, sec;
//    cin >> min >> sec;
//    Timer c(min, sec);
//    c.run();
//    
//    return 0;
//}
