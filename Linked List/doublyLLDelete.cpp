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

Node* DeleteHead(Node* head){
    if(head==NULL || head->next==NULL) return NULL;
    Node* temp = head;
    head = head->next;
    head->back=nullptr;
    temp->next=nullptr;
    delete temp;
    return head;
    
}

Node* DeleteTail(Node* head){
    if(head==NULL || head->next==NULL) return NULL;
    Node* tail = head;
    while (tail->next!=NULL)
    {
        tail=tail->next;
    }
    Node* prev = tail->back;
    tail->back=nullptr;
    prev->next=nullptr;
    delete tail;
    return head;
    
}

Node* DeleteKthNode(Node* head,int k){
    if(head==NULL) return NULL;
    int cnt=0;
    Node* temp = head;
    while(temp!=NULL){
        cnt++;
        if(cnt==k) break;
        temp=temp->next;
    }
    Node* prev = temp->back;
    Node* front = temp->next;
    if(prev==NULL && front==NULL){
        return NULL;
    }
    else if(prev==NULL){
        return DeleteHead(head);
    }
    else if(front==NULL){
        return DeleteTail(head);
    }
    prev->next = front;
    front->back=prev;
    temp->next=nullptr;
    temp->back=nullptr;
    delete temp;
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
    // head = DeleteHead(head);
    // head = DeleteTail(head);
    head = DeleteKthNode(head,4);
    display(head);

}