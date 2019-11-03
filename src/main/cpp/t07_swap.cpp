//Переставьте соседние элементы массива (A[0] c A[1], A[2] c A[3] и т.д.). Если элементов нечетное число, то последний элемент остается на своем месте.
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
//2 1 4 3 5

#include "t07_swap.h"
#include <iostream>


using namespace std;

int t07_swap() {
    int i;
    int n = 1;
    cin >> i;
    int A [i];
    for ( int k = 0 ; k < i ; k++ ){
        cin >>  A [k];
    }
    for ( int k = 0, temp ; k < i ; k = k + 2){
        if( k + 1 != i){
            temp = A [k + 1];
            A [k + 1] = A [k];
            A [k] = temp;
        }
    }
    for ( int k = 0 ; k < i ; k++ ){
        cout << A [k] <<" "<< endl;
    }
    return 0;
}
