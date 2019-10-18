//Шахматный конь ходит буквой “Г” — на две клетки по вертикали в любом направлении и на одну клетку по горизонтали, или наоборот. Даны две различные клетки шахматной доски, определите, может ли конь попасть с первой клетки на вторую одним ходом.
//
//Формат входных данных
//        Программа получает на вход четыре числа от 1 до 8 каждое, задающие номер столбца и номер строки сначала для первой клетки, потом для второй клетки.
//Формат выходных данных
//        Программа должна вывести YES, если из первой клетки ходом коня можно попасть во вторую или NO в противном случае.
//Sample Input 1:
//
//1
//1
//1
//4
//Sample Output 1:
//
//NO
//        Sample Input 2:
//
//1
//1
//8
//8
//Sample Output 2:
//
//NO

#include "t08_chess_knight.h"
#include <iostream>

using namespace std;

int t08_chess_knight() {
int a,b,c,d;
    cin>>a;
    cin>>b;
    cin>>c;
    cin>>d;
    bool t1=((a-c)==2)||((a-c)==-2);
    bool t2=((b-d)==2)||((b-d)==-2);
    bool t3=((a-c)==1)||((a-c)==-1);
    bool t4=((b-d)==1)||((b-d)==-1);
    if((t1 && t3)||(t1 && t4)||(t2 && t3)||(t2 && t4))
    {
        cout<<"YES"<<endl;
    }else
        {
        cout<<"NO"<<endl;
        }
    return 0;
};