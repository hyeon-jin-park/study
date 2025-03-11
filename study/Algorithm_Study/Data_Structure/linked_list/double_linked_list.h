#include<iostream>

using namespace std;

class node{     //노드를 생성
    public:
    int element;   //노드 내부 원소
    node * next;  //다음 원소의 주소를 가리키는 포인터
    node * prev; //이전 원소의 주소를 가리키는 포인터 
};

class double_linked_list{
public:
    node* header;
    node* trailer;

    double_linked_list() {  //초기 생성시 header와 trailer가 서로를 가리키는 상태로 초기화(내부에 element값은 없는 상태)
        header = new node;  //header랑 trailer에 새로운 노드를 할당 <-할당 하기 전에는 이름만 있고 내부에 값이 없는 상태임
        trailer = new node;

        header->next = trailer;
        trailer->prev = header;
    }

    ~double_linked_list(){  //객체 삭제시 메모리를 해제
        while(!is_empty()){  //리스트에 값이 있으면 객체 삭제시 메모리를 전부 해제제 
            erase(header->next);
        }
        delete header;
        delete trailer;
    }

    bool is_empty(){  //리스트가 비어있는지 확인 
        return (header->next == trailer);
    }

    node* begin(){  //가장 첫번째 값
        return header->next;
    }
    node* end(){  //가장 마지막 값 
        return trailer->prev;
    }

    void add(node*p,int ele){  //p주소 앞에 새로운 노드를 추가
        if(p == header){  //header는 실제 값을 갖는 주소가 아니므로 header앞에는 추가할 수 없음
            return;
        }

        node* new_node = new node;

        new_node->element=ele; //새 노드에 값을 대입
        
        p->prev->next = new_node;  //new_node에 앞쪽 원소와 포인터를 연결
        new_node->prev = p->prev;

        p->prev = new_node;  //new_node에 뒤쪽 원소와 포인터를 연결
        new_node->next = p;

    }

    void erase(node* p){  //p의 앞뒤 원소를 연결하고 p를 삭제
        
        if(p==header || p==trailer){  //내부에 원소가 없어도 header와 trailer는 삭제하지 않음
            return;
        }
        
        p->prev->next = p->next;
        p->next->prev = p->prev;
        delete p;  //삭제한 p의 메모리를 해제 
    }

};