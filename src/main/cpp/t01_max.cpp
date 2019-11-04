//Найдите индексы первого вхождения максимального элемента.
//
//Формат входных данных
//        Программа получает на вход размеры массива n и m, 
// затем n строк по m чисел в каждой. n и m не превышают 100.
//
//Формат выходных данных
//        Выведите два числа: номер строки и номер столбца, 
// в которых стоит наибольший элемент в двумерном массиве. 
// Если таких элементов несколько, то выводится тот, у которого меньше номер строки, 
// а если номера строк равны то тот, у которого меньше номер столбца.
//
//Sample Input:
//
//3 4
//0 3 2 4
//2 3 5 5
//5 1 2 3
//Sample Output:
//
//1 2

#include "t01_max.h"
#include <iostream>


using namespace std;

int t01_max() {
    int i,j,x=0,y=0,max;
    cin>>i>>j;
    int A[i][j];
    for(int h=0;h<i;h++){
        for(int k=0;k<j;k++){
            cin>>A[h][k];
        }
    }
    for(int h=0;h<i;h++){
        for(int k=0;k<j;k++){
            if(A[h][k]>max){
                x=h,y=k;
                max=A[h][k];
            }
        }
    }
    cout<<x<<" "<<y<<endl;
    return 0;
    return 0;
}
