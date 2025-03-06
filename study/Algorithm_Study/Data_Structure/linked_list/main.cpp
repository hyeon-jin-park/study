#include<iostream>
using namespace std;

class node{     //노드를 생성
    public:
    int element;   //노드 내부 원소
    node * next;  //다음 원소의 주소를 가리키는 포인터

    node(int ele){
        element = ele;  //노드를 만들면서 원소를 받는다
        next = nullptr; //다음 원소를 연결 전까지 초기화
    }
};

class linked_list{
    public:
    node* head;
    node* tail;

    linked_list(){
        head = nullptr;  //새로 생성한 linked_list의 헤드를 초기화
    }
    void append(int ele){  //ele는 노드 내부의 element에 삽입될 값
        node* new_node = new node(ele);  //링크는 노드끼리를 연결하기만 하므로 노드 포인터를 생성
        if(head == nullptr){   //head에 값이 없으면 처음 생성하는 리스트 -> head와 tail을 연결
            head = new_node;  
            tail = new_node;
        }
        else{   //첫번째 원소가 있으면 tail이 가리키는 노드의 next포인터에 새로운 노드를 연결
            tail->next = new_node;
            tail = new_node;  //새로 연결한 노드를 tail에 연결
        }
    }

    void add_front(int element){

    }
};

int main(){
    
    
}