#include<iostream>
#include<vector>
#include<iterator>
#include<algorithm>
using namespace std;
int main()
{
    printf("欢迎来到 vscode!!!\n");
    int a = 12;
    int b =13;
    int sum = a + b;
    printf("a is %d, b is %d, sum is %d\n", a, b, sum);

    int array[10] = {1,2,12, 3, 6, 90, 7, 9, 20,30};
    cout<<"befor sort:"<<endl;
    for(int i = 0; i < 10; ++i)
    {
        cout<<array[i]<<" ";
    }
    cout<<endl;
    for(int i = 0; i < 10; ++i)
    {
        bool isExChanged = false;
        for(int j = 0; j < 10 -i-1; ++j)
        {
            if(array[j] > array[j+1])
            {
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
                isExChanged = true;
            }
        }
        if(!isExChanged)
        {
            break;
        }
    }
    cout<<"after sort:"<<endl;
    for(int i = 0; i < 10; ++i)
    {
        cout<<array[i]<<" ";
    }
    cout<<endl;
    
    /*
    using std::istream_iterator;
    using std::ostream_iterator;

    //读
    std::vector<int> int_vec((istream_iterator<int>(std::cin)), (istream_iterator<int>()));
    //写
    unique_copy(int_vec.begin(), int_vec.end(), (std::ostream_iterator<int>(std::cout, " ")));
    cout<<"\n";
    for(auto item : int_vec)
    {
        printf("%i ", item);
    }
    printf("\n");
    */
    return 0;
}