// ПУЗЫРЬКОВАЯ СОРТИРОВКА

//
//#include <iostream>
//using namespace std;
//
//int main() {
//
//    cout << "before shaking" << endl;
//
//    int array[10], tmp;
//    for (int i = 0; i < 10; i++) {
//        array[i] = rand();
//        cout << array[i] << endl;
//    }
//
//    for (int i = 1; i < 10; i++) {
//        for(int j = 9; j > i - 1; j--){
//            if (array[j] < array[j - 1]) {
//                tmp = array[j - 1];
//                array[j - 1] = array[j];
//                array[j] = tmp;
//            }
//        }
//    }
//    
//    cout << endl;
//    cout << "after shaking" << endl;
//
//
//    for (int i = 0; i < 10; i++) {
//            cout << array[i] << endl;
//        }
//
//
//
//    return 0;
//}
//
//
