//
//  Leksema (token)
//  ShildtBook
//
//  Created by gelserkirchen on 19.04.2020.
//  Copyright © 2020 gelserkirchen. All rights reserved.
//

#include <stdio.h>
#include <cstring>
#include <iostream>
#include <cstring>

using namespace std;

int main(){
    char firstString[80];
    char token[80];
    char *pToFirstString, *pToToken;
    string s;
    
    std::cout << "Пожалуйста введите строку: " << std::endl;
    getline(cin, s);
    strcpy(firstString, s.c_str());
    
    pToFirstString = firstString; // copy a pointer to array of char
    
    
    while (*pToFirstString) {
        pToToken = token;
        while (!isspace(*pToFirstString) && *pToFirstString) {
            *pToToken = *pToFirstString;
            pToFirstString++;
            pToToken++;
        }
        
        *pToToken = '\0';
        *pToFirstString++;
        
        //std::cout << "Вывод: " << std::endl;
        std::cout << token << std::endl;
    }
    
    
    
    
}
