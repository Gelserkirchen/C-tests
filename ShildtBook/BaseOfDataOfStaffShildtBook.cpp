//// БАЗА ДАННЫХ СОТРУДНИКОВ
//
//#include <iostream>
//#include <stdio.h>
//
//using namespace std;
//
//int choice();
//void report();
//void createAstring();
//void menu();
//
//int amountOfPeople = 0;
//char nameOfPeople[10][70];
//double amountOfHours[10];
//double salary[10];
//int choise;
//
//int main() {
//    do {
//        menu();
//        switch (choise) {
//            case 1:
//                choise = 0;
//                break;
//            case 2:
//                createAstring();
//                break;
//            default:
//                report();
//        }
//    } while (choise != 0);
//}
//
//void menu(){
//    cout << "Введите одно значение: " << endl;
//    cout << "1: Выход" << endl;
//    cout << "2: Создать запись в базе данных" << endl;
//    cout << "3: Вывести базу данных" << endl;
//    cin >> choise;
//}
//
//void createAstring()
//{
//    cout << "Введи имя человека: ";
//        
//    cout << "Введи количество отработанных часов: ";
//        cin >> amountOfHours[amountOfPeople];
//    cout << "Введи зарплату человека: ";
//        cin >> salary[amountOfPeople];
//        amountOfPeople++;
//    cout << endl;
//}
//
//void report() {
//    cout << endl;
//    cout << "Вывод данных из базы данных:" << endl;
//    for (int i = 0; i < amountOfPeople; i++) {
//        cout << "Номер: " << i << ", Имя: " << nameOfPeople[i] << ", Зарплата: " << amountOfHours[i] * salary[i] << endl;
//    }
//    cout << endl;
//}
//
//
//
//
