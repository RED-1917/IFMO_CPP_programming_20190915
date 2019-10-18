//Даны три целых числа. Найдите наибольшее из них (программа должна вывести ровно одно целое число). Под наибольшим в этой задаче понимается число, которое не меньше, чем любое другое.
//Формат входных данных
//        Вводятся три числа.
//Формат выходных данных
//        Выведите ответ на задачу.
//Sample Input:
//
//1
//2
//3
//Sample Output:
//
//3

#include "t01_max3.h"
#include <iostream>

using namespace std;

int t01_max3() {
int a,b,c;
 cin>>a;
 cin>>b;
 cin>>c;
 if((a>=b && b>=c)||(a>=c && c>=b)){
     cout<<a<<endl;
 }
 else if((b>=a && a>=c)||(b>=c && c>=a)){
     cout<<b<<endl;
 }
 else if((c>=a && a>=b)||(c>=b && b>=a)){
     cout<<c<<endl;
 }
 return 0;
};