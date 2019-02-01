#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        vector<int> tmp;
        int x;
        vector<int>::iterator k;
        while (!(tmp.empty()&&pushed.empty())) {
            while (tmp.empty()||tmp.back() != *popped.begin()) {
                if(pushed.empty())
                    return false;
                x = *pushed.begin();
                tmp.push_back(x);
                k = pushed.begin();
                pushed.erase(k);
            }
            k = popped.begin();
            popped.erase(k);
            k = tmp.end() - 1;
            tmp.erase(k);
        }
        return true;
    }

};

int main ()
{
    Solution solution;
    int m[5] = {1,2,3,4,5};
    vector<int> a;
    //将a的所有元素插入到b中
    a.insert(a.begin(), m, m+5);
    for (int i=0;i<a.size();i++)
        cout<<a.at(i)<<" ";
    cout<<endl;
    int n[5] = {4,3,5,1,2};
    vector<int> b;
    //将a的所有元素插入到b中
    b.insert(b.begin(),n , n+5);
    for (int i=0;i<b.size();i++)
        cout<<b.at(i)<<" ";
    cout<<endl;

    bool i;
    i=solution.validateStackSequences(a,b);
    cout<<i<<endl;



}
 
                
            