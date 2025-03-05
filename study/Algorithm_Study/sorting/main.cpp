#include<iostream>
#include"my_sorting.h"
using namespace std;

//정렬 알고리즘 공부용

int main(){
    int num;
    vector<int> a;
    cout << "몇 개를 정렬 하고 싶니? ";
    cin >> num;

    cout << "그럼 정렬하고 배열을 적어봐... ";
    
    for(int i=0;i<num;i++){  //배열에 숫자를 저장
        int tmp;
        cin >> tmp;
        a.push_back(tmp);
    }

    int type;
    cout << "어떤 정렬방식을 사용할래?" << endl << "1.버블 정렬  2.선택 정렬  3. 삽입 정렬  4.퀵 정렬  5.병합 정렬  6.기수 정렬" <<endl <<"몇번? ";
    cin >> type;

    switch (type)
    {
    case 1:
        bubble(a);
        break;
    case 2:
        select(a);
        break;
    case 3:
        insert(a);
        break;
    case 4:
        quick(a);
        break;
    case 5:
        merge(a);
        break;
    case 6:
        radix(a);
        break;
    
    default:
        break;
    }
    
    for(int ans:a){
        cout << ans << " ";
    }


}