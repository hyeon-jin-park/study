#include<iostream>
#include<vector>
#include<utility>
using namespace std;


void change(){

}

void bubble(vector<int>& a){   //가장 큰 수부터 맨 뒤에서 부터 정렬이므로 가장 큰수가 정해지면 그 값은 더이상 바꾸지 않음 // O(n^2)
                               //모든 수를 비교해야 하므로 느린편 

    bool is_swap = false;  //최적화 - 스왑이 일어났는지 확인 (한번도 스왑이 없으면 이미 정렬된 배열)
    for(int i=a.size()-1;i>0;i--){  
        for(int j=0;j<i;j++){  //바로 옆에 있는 원소끼리 비교해서
            if(a[j]>a[j+1]){   //더 큰 수만만
                swap(a[j],a[j+1]);  //뒤로 보내기기
                
                for(int ans:a){  //디버깅용
                    cout << ans << " ";
                }
                cout << endl; //디버깅 줄바꿈
                
                is_swap = true; //스왑이 발생
            }
        }
        if (is_swap==false){  //스왑이 일어나지 않았으므로 이미 정렬됨
            break;
        }
        
    }

}

void select(vector<int> &a){  //배열 전체에서 최소값을 찾고 그 수를 앞으로 보내는 정렬  // O(n^2)
                              //수를 전부 비교하므로 느린편


    for(int i=0;i<a.size();i++){
        int min = i;  //오름차순으로 정렬하려면면 일정하게 증가하는 i부터 순서대로 정렬이므로 최소값을 찾아서 스왑
        for(int j=i+1;j<a.size();j++){
            if(a[min]>a[j]){ //j번째 수가 최소항보다 작으면
                min = j;     //j번째를 최소항으로 초기화
            }
        }
        swap(a[i],a[min]);
        for(int ans:a){  //디버깅용
            cout << ans << " ";
        }
        cout << endl; //디버깅 줄바꿈
    }
}

void insert(vector<int> &a){  //두번째 수부터 앞부분을 비교해서 앞에 자신보다 큰수가 있으면 그 앞에 삽입을 반복 // O(n^2)

    for(int i = 1; i < a.size(); i++){  //두 번째 원소부터 시작하여 앞의 원소들과 비교해 적절한 위치에 삽입 // O(n^2)
        int key = a[i];   //키값(삽입할할 값)을 저장장
        int j = i-1;      //비교연산 할때 조건확인과 반복문을 위한 변수수

        while( j>=0 && a[j] > key ){  //삽입할 값이 앞에 있는 수보다 작으면 앞쪽으로 삽입해야 하므로
            a[j+1] = a[j];   //이전 항을 다음항으로 이동  //가장 앞의 값(삽입할 위치치)은 바뀌지 않음 //shift 기법
            j--;
        }
        a[j+1] = key;    //삽입할 위치에 저장해둔 키값을 입력력
        
        
        for(int ans:a){  //디버깅용용
            cout << ans << " ";
        }
        cout << endl; //디버깅 줄바꿈꿈

    }
}

void quick(vector<int> &a){

    
}

void merge(vector<int> &a){
    
}

void radix(vector<int> &a){
    
}