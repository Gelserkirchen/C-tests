//
//
//#include <stdio.h>
//#include <iostream>
//#include <ctime>
//
//using namespace std;
//unsigned int i; // non register
//unsigned int delay;
//
//int main(){
//    register unsigned int j;
//    long start, end;
//    
//    start = clock();
//    for(delay = 0; delay<50; delay++);
//        for(j = 0; j < 640000000; j++);
//    end = clock();
//    cout << "Количество тиков для register-цикла: ";
//    cout << end - start << '\n';
//    
//    start = clock();
//    for(delay = 0; delay<50; delay++);
//        for(i = 0; i < 640000000; i++);
//    end = clock();
//    cout << "Количество тиков для не register-цикла: ";
//    cout << end - start << '\n';
//    
//
//}
//
