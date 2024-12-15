#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
// const int mx =2e5+123;
// int a[mx];

struct Node{
    int data;
    Node *next;
    Node* back;

    Node(int data1, Node* next1, Node* back1){
        data = data1;
        next = next1;
        back = back1;
    }
    Node(int data1){
        data = data1;
        next = nullptr;
        back = nullptr;
    }
};

Node* covertArr2DLL(vector<int> &v){
    Node* head = new Node(v[0]);
    Node* prev = head;
    for(int i=1;i<v.size();i++){
        Node* temp = new Node(v[i]);
        temp->back = prev;
        prev->next = temp;
        prev = temp;
    }
    return head;
}
void display(Node* head){
    Node* temp  = head;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
int main() {
    optimize();
    vector<int> v = {1,2,3,4};
    Node* head = covertArr2DLL(v);
    display(head);

}