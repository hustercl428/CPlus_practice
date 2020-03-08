#include<bitset>
#include<iostream>
#include<limits>
using namespace std;

int main()
{
    enum e_color{red, green, blue, black, white, numofColors};
    bitset<numofColors> used_color;
    //置位
    used_color.set(red);
    used_color.set(green);

    cout<<"bitfiled of used colors "<<used_color<<endl;
    if(used_color.any())
    {
        for(int i = 0; i < numofColors; ++i)
        {
            if(used_color[(e_color)i])
            {
                cout<<" the color "<< i <<" is used"<<endl;
            }
        }
    }
    //count()返回值为1的个数
    cout<<"number of used colors is "<<used_color.count()<<endl;
    cout<<"bitfiled of unused colors is "<<~used_color<<endl;

    //十进制-二进制
    cout<<bitset<std::numeric_limits<unsigned short>::digits>(267)<<endl;

    //二进制-十进制
    cout<<bitset<100>(string("1000111000")).to_ulong()<<endl;
    return 0;
}