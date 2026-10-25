#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <windows.h>

using namespace std;

int main(){
    SetConsoleOutputCP(65001);
    int n;
    
    cout << "数据个数：" << endl;
    if(!(cin>>n))
    return 0;

    vector<int> v;
    set<int> s;

    cout << "请输入数据："<< endl;
    for(int i = 0;i < n;i++){
        int x;
        cin >> x;
        v.push_back(x);
        s.insert(x);
    }

    sort(v.begin(),v.end());
    cout <<"排序输出：";
    for (int x:v)
    {
        cout<< x <<" ";
    }

    cout<<endl;
    
    cout <<"去重输出：";
    for (int x:s){
        cout<< x <<" ";
    }

    cout<<endl;

    return 0;
}