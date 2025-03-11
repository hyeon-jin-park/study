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
    bool is_empty =true;

    linked_list() : head(nullptr), tail(nullptr), is_empty(true) {  //새로 생성한 linked_list의 헤드, 테일을 초기화, 비었는지 확인하는 변수를 선언
    }
    void append(int ele){  //ele는 노드 내부의 element에 삽입될 값
        node* new_node = new node(ele);  //링크는 노드끼리를 연결하기만 하므로 노드 포인터를 생성
        if(is_empty){   //값이 없으면 처음 생성하는 리스트 -> head와 tail을 연결
            head = new_node;  
            tail = new_node;
            is_empty = false;
        }
        else{   //첫번째 원소가 있으면 tail이 가리키는 노드의 next포인터에 새로운 노드를 연결
            tail->next = new_node;
            tail = new_node;  //새로 연결한 노드를 tail에 연결
        }
    }

    void add_front(int ele){  //linked_list 가장장 앞에 값을 추가
        if(is_empty){  //linked_list가 비어있으면 넘긴다
            append(ele);
        }
        else{
            node* new_node = new node(ele); //노드 포인터를 생성
            new_node->next = head;  //새로 추가하는 노드 포인터 next를 head가 가리키는 값을 가리키게 함 
            head = new_node;  //새 노드가 가장 앞으로 오면 그 값을 head로 연결
        }
    }

    void add_back(int ele){  //linked_list 가장 뒤에 값을 추가
        if(is_empty){  //linked_list가 비어있으면 넘긴다
            append(ele);
        }
        else{
            node* new_node = new node(ele);  //노드 포인터를 생성성
            tail->next = new_node;  //new_node의 주소를 tail이 가리키는 노드(기존 linked_list 가장 뒤 원소)의 next에 저장
            tail = new_node;  //new_node 포인터 값을 tail에 저장
        }
                    
    }
};