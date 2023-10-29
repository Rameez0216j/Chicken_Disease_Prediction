#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    vector<int> v;
    int t = n - 1;
    bool flag = true;
    while(t)
    {
        int k;
        cin>>k;
        v.push_back(k);
        t--;
    }
    sort(v.begin(), v.end());
    for(int i = 0; i < n - 1; i ++)
    {
        
        if(v[i] != (i * 2) + 1)
        {
            flag = false;
            cout<<v[i]-2<<endl;
            break;
        }
    }
    if(flag)
        cout<<v[n - 2] + 2<<endl;
    return 0;
}