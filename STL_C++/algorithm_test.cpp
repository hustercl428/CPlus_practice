#include<algorithm>
#include<vector>
#include<iostream>
#include<iterator>
using namespace std;

int main(){
    vector<int> vct_int;
    for(int i = 0; i < 10; ++i)
    {
        vct_int.push_back(i);
        if(i%3 == 0)
        {
            vct_int.push_back(3);
        }
        //cout<<"the "<<i<<" number is "<<vct_int[i]<<endl;
    }
    for(auto item : vct_int)
    {
        cout<< item << " ";
    }
    cout<<endl;

    vector<int>::iterator pos = find(vct_int.begin(), vct_int.end(), 4);
    if(pos != vct_int.end())
    {
        cout<<"pos is "<<*pos<<endl;
    }

    int i_num = 0;
    pos = vct_int.begin();
    while(pos != vct_int.end())
    {
       if(*pos == 3)
       {
           i_num++;
       }
       pos = find(++pos, vct_int.end(), 3);
    }
    cout<<"the num of 3 in the vector is "<<i_num<<endl;

    vector<int>::iterator pos1;
    pos1 = find_if(vct_int.begin(), vct_int.end(), bind2nd(greater<int>(), 4));
    if(pos1 != vct_int.end())
    {
        cout<<"the first num greater than 4 is "<<*pos1 <<endl;
    }
    else
    {
        cout<<"no num greater than 4"<<endl;
    }

    transform(vct_int.begin(), vct_int.end(), vct_int.begin(), negate<int>());
    for(auto item : vct_int)
    {
        cout<< item << " ";
    }
    cout<<endl;

    vector<int> vct_int2;
    transform(vct_int.begin(), vct_int.end(), vct_int.begin(), back_inserter(vct_int2), plus<int>());
    for(auto item : vct_int2)
    {
        cout<< item << " ";
    }
    cout<<endl;

    replace_if(vct_int2.begin(), vct_int2.end(), bind2nd(greater<int>(),-5), 0);
    for(auto item : vct_int2)
    {
        cout<< item << " ";
    }
    cout<<endl;

    vector<int> vct_int3;
    remove_copy(vct_int2.begin(), vct_int2.end(), back_inserter(vct_int3), -6);
    for(auto item : vct_int3)
    {
        cout<< item << " ";
    }
    cout<<endl;

    sort(vct_int2.begin(), vct_int2.end());
    copy(vct_int2.begin(), vct_int2.end(), (std::ostream_iterator<int>(cout, " ")));
    cout<<endl;
    vector<int>::iterator pos3 = unique(vct_int2.begin(), vct_int2.end());
    copy(vct_int2.begin(), pos3, (std::ostream_iterator<int>(cout, " ")));
    cout<<endl;
    return 0;
}