#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> a={1,13,16,99,4};
    sort(a.begin(),a.end());
    bool present=binary_search(a.begin(),a.end(),4);
     cout<<present<<endl;
    present=binary_search(a.begin(),a.end(),5);
    cout<<present<<endl;
    for(int x:a)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    a.push_back(200);
    a.push_back(23);
     for(int &x:a)
    {
        x+=2;
    }
    for(int x:a)
    {
        cout<<x<<" ";
    }
   /* vector<int>::iterator it=lower_bound(a.begin(),a.end(),155);
    vector<int>::iterator it2=upper_bound(a.begin(),a.end(),16);
    cout<<endl<<*it<<" "<<*it2;
    */
    auto it=lower_bound(a.begin(),a.end(),22);
    cout<<endl<< *it;
    return 0;
}
