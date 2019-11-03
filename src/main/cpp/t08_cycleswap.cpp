//Циклически сдвиньте элементы списка вправо (A[0] переходит на место A[1], A[1] на место A[2], ..., последний элемент переходит на место A[0]).
//Формат входных данных
//
//        В первой строке вводится количество элементов в массиве. Во второй строке вводятся элементы массива.
//Формат выходных данных
//        Выведите ответ на задачу.
//Sample Input:
//
//5
//1 2 3 4 5
//Sample Output:
//
//5 1 2 3 4

#include "t08_cycleswap.h"
#include <iostream>


using namespace std;

int t08_cycleswap() {
    int i;
    cin >> i;
    int A [i];
    for ( int k = 0 ; k < i ; k++ ){
        cin >>  A [k];
    }
    int temp = A [i-  1];
    for ( int k = i ; k > 0 ; k-- ){
        A [k] = A [k - 1];
    }
    A [0] = temp;
    for ( int k = 0 ; k < i ; k++ ){
        cout << A [k] <<" "<< endl;
    }
    return 0;

}