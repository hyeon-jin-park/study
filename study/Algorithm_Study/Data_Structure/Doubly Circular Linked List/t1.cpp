#include<iostream>
#include<vector>
using namespace std;

class node {
public:
    int data;
    node* prev;
    node* next;
    node(int x) : prev(nullptr), next(nullptr) {
        data = x;
    }
};

class balloons {
public:
    node* head = new node(0);
    node* tail = new node(0);
    node* curser;
    balloons() {
        curser = nullptr;
    }
    bool empty() {
        return head->next == nullptr;
    }

    void push(int x) {
        node* new_node = new node(x);

        if (empty()) {
            head->next = new_node;
            tail->prev = new_node;
            curser = new_node;
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
            for (int i = 0; i < x; i++) {
                curser = curser->next;
            }

        }
        else {
            for (int i = 0; i < -x; i++) {
                curser = curser->prev;
            }
        }
    }
    void pop(vector<int>& a, int x) {
        if (curser == head->next) {
            search(x);
        }


        a.push_back(curser->data);

        node* move = curser;

        curser->prev->next = curser->next;
        curser->next->prev = curser->prev;

    }
};


int main() {
    int n = 5;
    balloons a;
    vector<int> b;

    cin >> n;

    for (int i = 1; i <= n; i++) {
        a.push(i);
    }

    while (n--) {
        int x;
        cin >> x;
        a.pop(b, x);

    }

    for (int ans : b) {
        cout << ans << " ";
    }

}