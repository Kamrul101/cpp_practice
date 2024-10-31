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

struct Node
{
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
    for(int i= 1;i<v.size();i++){
        Node* temp  = new Node(v[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

int sumOfNodes(Node* head){
    Node* temp  = head;
    int sum = 0;
    while(temp){
        sum+=temp->data;
        temp = temp->next;
    }
    return sum;
}

int main() {
    optimize();
    vector<int> v = {1,2,3,4,5,6,7};
    Node* head = convertArray2LL(v);
    cout<<sumOfNodes(head)<<endl;
    
}