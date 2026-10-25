#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <windows.h>

using namespace std;

int main(){
    SetConsoleOutputCP(65001);
    string sentence;
    vector<string> words;
    string word;

    getline(cin,sentence);

    stringstream ss(sentence);
                                     
    while(ss >> word){
        words.push_back(word);
    }

    cout<<"单词个数："<<words.size()<< endl;

    cout<<"逆序输出：";
    for (int i = words.size()-1; i>=0 ; i--){
        cout << words[i];
        if(i>0)cout<<" ";
    }
    cout<<endl;

    return 0;
}