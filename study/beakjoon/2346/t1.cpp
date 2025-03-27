#include<iostream>
#include<vector>
using namespace std;

class node {
public:
    int data;
    int num;
    node* prev;
    node* next;
    node(int x, int y) : prev(nullptr), next(nullptr) {
        num = x;
        data = y;
    }
};

class balloons {
public:
    node* head = new node(0, 0);
    node* tail = new node(0, 0);
    node* curser;
    node* next_curser;
    balloons() {
        curser = nullptr;
        next_curser = nullptr;
    }
    bool empty() {
        return head->next == nullptr;
    }

    void push(int x, int f) {
        node* new_node = new node(x, f);

        if (empty()) {
            head->next = new_node;
            tail->prev = new_node;
            curser = new_node;
            new_node->next = new_node;
            new_node->prev = new_node;
            next_curser = curser;
            return;
        }

        tail->prev->next = new_node;
        new_node->prev = tail->prev;

        tail->prev = new_node;
        new_node->next = tail;


        head->next->prev = tail->prev;
        tail->prev->next = head->next;

    }
    void search(int x) {

        if (x > 0) {
            for (int i = 0; i < x - 1; i++) {
                curser = curser->next;
            }

        }
        else {
            for (int i = 0; i < -x; i++) {
                curser = curser->prev;
            }
        }
    }
    void pop(vector<int>& a) {

        a.push_back(curser->num);
        int move = curser->data;

        next_curser = curser->next;

        if (curser == head) {
            head = head->next;
        }
        if (curser == tail) {
            tail = tail->prev;
        }

        

        curser->prev->next = curser->next;
        curser->next->prev = curser->prev;
        delete curser;
        curser = nullptr;
        curser = next_curser;

        search(move);
       
    }
};


int main() {
    int n = 5;
    balloons a;
    vector<int> b;

    cin >> n;

    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        a.push(i, x);
    }
    for (int i = 1; i <= n; i++) {
        a.pop(b);
    }



    for (int ans : b) {
        cout << ans << " ";
    }

}