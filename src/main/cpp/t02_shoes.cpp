//В обувном магазине продается обувь разного размера. 
// Известно, что одну пару обуви можно надеть на другую, 
// если она хотя бы на три размера больше. 
// В магазин пришел покупатель. 
// Требуется определить, какое наибольшее количество пар обуви сможет предложить ему продавец так,
// чтобы он смог надеть их все одновременно.
//
//Входные данные
//
//Сначала вводится размер ноги покупателя 
// (обувь меньшего размера он надеть не сможет),
// затем количество пар обуви в магазине и размер каждой пары.
// Размер — натуральное число, не превосходящее 100, 
// количество пар обуви в магазине не превосходит 1000.
//
//Выходные данные
//
//Выведите единственное число — максимальное количество пар обуви.
//
//Sample Input:
//
//26
//5
//30 35 40 41 42
//Sample Output:
//
//3

#include "t02_shoes.h"
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int t02_shoes() {
    int PersonalSize,num,SizeShoes,Suitable=0;
    vector <int> n;
    cin>>PersonalSize;
    cin>>num;
    for(int i=0 ; i<num ; num++){
        cin>>SizeShoes;
        n.push_back(SizeShoes);
    }
    sort(n.begin(),n.end());
    int temp;
    for(int i=0 ; i<num ; i++){
        if(n[i]>=PersonalSize){
            Suitable++;
            temp=n[i];
            for(int j=i ; j<num ; j++){
                if(n[j]-temp >= 3)
                    Suitable++;temp=n[j];
            }
            break;
        }
    }
    cout<<Suitable<<endl;
    return 0;
}
