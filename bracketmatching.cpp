#include <bits/stdc++.h>
#include<unordered_map>
using namespace std;

string ltrim(const string &);
string rtrim(const string &);
unordered_map<char, int>m={{'[',-1},{'{',-2},{'(',-3},{']',1},{'}',2},{')',3}};
string isBalanced(string s) {
    stack<char> v;
    for(char value:s){
        if(m[value]<0)
        {
            v.push(value);
        }
        else{
            if(v.empty())return "NO";
            else{
                char top=v.top();
                if(m[value]+m[top]!=0)return "NO";
                v.pop();
            }
        }
    }
    if(v.empty())return "YES";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string t_temp;
    getline(cin, t_temp);

    int t = stoi(ltrim(rtrim(t_temp)));

    for (int t_itr = 0; t_itr < t; t_itr++) {
        string s;
        getline(cin, s);

        string result = isBalanced(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
