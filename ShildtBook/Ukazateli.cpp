//// разбро работы с указателями
//
//#include "Ukazateli.hpp"
//
//int main () {
//    int *p;
//    int b = 100;
//    std::cout << "b = " << b << std::endl;
//    p = &b;
//    std::cout << "*p = " << *p << std::endl;
////    *p++; // ЕСЛИ ТАК СДЕЛАТЬ ТО ОН СНАЧАЛА К АДРЕСУ ДОБАВИТЬ +1 а потом обратится в ячейку по этому адресу
////    std::cout << "*p++ = " << *p << std::endl;
//    (*p)++; // А тут сначала обратится в ячейку а затем к тому значению добавить +1
//    std::cout << "(*p)++ = " << *p << std::endl;
//    
//    
//    // второй пример "приведение указателей не очень хорошая идея"
//    
//    double y, x;
//    int *unInt;
//    y = 123.4;
//    unInt = (int *) &y;
//    std::cout << "unInt: " << unInt << std::endl;
//    x = *unInt;
//    
//    std::cout << "Должно быть 123, но говорят что будет выведен мусор: " << x << std::endl;
//    
//    
//    // третий пример
//    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//    int *ukazatel;
//    ukazatel = arr;
//    
//    std::cout << "ukazatel: " << ukazatel << std::endl;
//    std::cout << "ukazatel[4]: " << ukazatel[4] << std::endl;
//    std::cout << "*(ukazatel+4): " << *(ukazatel+4) << std::endl;
//    
//}
