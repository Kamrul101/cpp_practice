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
    Node* next;
    Node(int data1, Node* next1){
        data = data1;
        next = next1;
    }
    Node(int data1){
        data = data1;
        next = nullptr;
    }
};

Node* convertArray2LL(vector<int> &v){
    Node* head = new Node(v[0]);
    Node* mover = head;
    for(int i=1;i<v.size();i++){
        Node* temp = new Node(v[i]);
        mover->next = temp;
        mover= temp;
    }
    return head;
}

Node* insertHead(Node* head,int k){
    Node* temp  = new Node(k,head);
    // temp->next = head;
    return temp;
}
Node* insertTail(Node* head, int k){
    if(head==NULL) return new Node(k);
    Node* temp = head;
    while(temp->next!=nullptr){
        temp = temp->next;
    }
    Node* newNode = new Node(k);
    temp->next = newNode;
    return head;
}

Node* insertPos(Node* head, int elem,int k){
    if(head==NULL){
        if(k==1) return new Node(elem);
        else return head;
    }
    if(k==1) return new Node(elem,head);
    int cnt = 0;
    Node* temp = head;
    while(temp!=nullptr){
        cnt++;
        if(cnt==k-1){
            Node* newNode = new Node(elem);
            newNode->next = temp->next;
            temp->next = newNode;
            break;
        }
        temp=temp->next;
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
    vector<int> v = {1,2,3,4,5,6};
    Node* head = convertArray2LL(v);
    head = insertHead(head, 100);
    head = insertTail(head, 100);
    head = insertPos(head,15,9);
    display(head);

    
}