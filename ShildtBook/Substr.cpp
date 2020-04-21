//
//  Substr.cpp
//  ShildtBook
//
//  Created by gelserkirchen on 20.04.2020.
//  Copyright © 2020 gelserkirchen. All rights reserved.
//

#include <stdio.h>
#include <cstring>
#include <iostream>

int find_substr(char *pStr, char *pSubstr);

double &linkFunction (); // link
double val = 100; // link

int main(){
    // First example - find Substr
    char firstString [80];
    strcpy(firstString, "Hello my dear friend I really miss you");
    std::cout << find_substr(firstString, "you") << std::endl;
    
    // Second example - linkFunction = 99.1
    std::cout << std::endl << "Second example: function with a link" << std::endl;
    std::cout << "first iteration: " << linkFunction() << std::endl;
    double newVal = linkFunction();
    std::cout << "newVal: " << newVal << std::endl;
    linkFunction() = 99.1;
    std::cout << "second iteration after linkFunction() = 99.1: now it's: " << linkFunction() << std::endl;
    
}


int find_substr(char *pStr, char *pSubstr) {
    for (int i = 0; pStr[i]; i++) {
        char *p1 = &pStr[i];
        char *p2 = pSubstr;
        
        while (*p2 && *p1 == *p2) {
            p1++;
            p2++;
        }
        if (!*p2) return i;
    }
    
    return -1;
}


double &linkFunction(){
    return val; // return a link to a val
}

