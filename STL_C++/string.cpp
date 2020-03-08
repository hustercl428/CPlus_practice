#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(int argc, char** argv)
{
    const string delims(" \t,.;");
    string line;

    vector<string> vct_word;

    //分割单词
    while(getline(cin, line))
    {
        if(line.empty())
        {
            break;
        }
        string::size_type begIdx, endIdx;

        //查找第一个单词的开始
        //返回line中第一个不属于delims的字符
        begIdx = line.find_first_not_of(delims);

        while(begIdx != string::npos)
        {
            endIdx = line.find_first_of(delims,begIdx);
            if(endIdx == string::npos)
            {
                endIdx = line.length();
            }

            //逆序输出单词
            vct_word.push_back(line.substr(begIdx, endIdx-begIdx));
            for(int i = endIdx-1; i >= static_cast<int>(begIdx); --i)
            {
                cout << line[i];
            }
            cout << " ";

            begIdx = line.find_first_not_of(delims, endIdx);
            cout << endl;
        }
    }
    for(auto item : vct_word)
    {
        cout<<item<<" ";
    }
    cout<<endl;
}