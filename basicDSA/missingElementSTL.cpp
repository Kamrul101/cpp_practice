#include <bits/stdc++.h>

using namespace std;

int missingElemVector(vector<int> &v)
{
    int lowIndex = min_element(v.begin(), v.end()) - v.begin();
    int low = v[lowIndex];
    int diff = low - 0;
    for (int i = 0; i < v.size(); i++)
    {
        if ((v[i] - i) != diff)
        {
            return i + diff;
            break;
        }
    }
}

int multipleMissingElemVector(vector<int> &v)
{
    int lowIndex = min_element(v.begin(), v.end()) - v.begin();
    int low = v[lowIndex];
    int diff = low - 0;
    for (int i = 0; i < v.size(); i++)
    {
        if ((v[i] - i) != diff)
        {
            while (v[i] - i > diff)
            {
                cout << i + diff << " ";
                diff++;
            }
        }
    }
}
int multipleMissingElemVectorHash (vector<int> &v){
    int lowIndex = min_element(v.begin(), v.end()) - v.begin();
    int maxIndex = max_element(v.begin(), v.end()) - v.begin();
    int low = v[lowIndex];
    int max = v[maxIndex];
    vector <int> H(max+1,0);
    for(int i =0; i<v.size();i++){
        H[v[i]]++;
    }
    for(int i=low; i<H.size(); i++){
        if(H[i]==0){

        cout<<i<<" ";
        }
    }

}

int main()
{
    vector<int> v = {3, 4, 5, 6, 9, 10, 11};
    // cout<<missingElemVector(v);
    // multipleMissingElemVector(v);
    multipleMissingElemVectorHash(v);
}