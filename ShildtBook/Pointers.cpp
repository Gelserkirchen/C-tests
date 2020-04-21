//// work with pointers
//
//#include <iostream>
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
//    std::cout << "и даже так можно: arr является массивом *(arr+4): " << *(arr+4) << std::endl;
//
//    std::cout << std::endl;
//    std::cout << "Next test tip with ariphmetic operations with pointers" << std::endl;
//
//    char arrayOfString[80] = {'h', 'e', 'l', 'l', 'o'};
//    char *pointerToArray;
//
//    pointerToArray = arrayOfString; // it is the relation between pointers and arrays
//
//    for (int i = 0; arrayOfString[i]; i++) {
//        pointerToArray[i] = toupper(pointerToArray[i]);
//    }
//
//    std::cout << arrayOfString << std::endl;
//
//    // Lesson about comparison of pointers
//    std::cout << std::endl;
//    std::cout << "Lesson about comparison of pointers" << std::endl;
//
//    int arrayOfNumbers[5];
//    int *pointerToStartPointOfArrayOfNumbers = arrayOfNumbers;
//    int *pointerToTheEndOfArrayOfNumbers = &arrayOfNumbers[4];
//
//    std::cout << "Please enter the numbers: " << std::endl;
//    while (pointerToStartPointOfArrayOfNumbers <= pointerToTheEndOfArrayOfNumbers) {
//        std::cin >> *pointerToStartPointOfArrayOfNumbers;
//        pointerToStartPointOfArrayOfNumbers++;
//    }
//
//    pointerToStartPointOfArrayOfNumbers = arrayOfNumbers; // we again begin to point to the start position of array
//    std::cout << std::endl;
//    std::cout << "The result is: " << std::endl;
//    while (pointerToStartPointOfArrayOfNumbers <= pointerToTheEndOfArrayOfNumbers) {
//        std::cout << *pointerToStartPointOfArrayOfNumbers << std::endl;
//        pointerToStartPointOfArrayOfNumbers++;
//    }
//
//
//}
