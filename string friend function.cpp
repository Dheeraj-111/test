// #include<iostream>

// using namespace std;
// void binarysearch(string);
// int main()
// {
//     // string str="badcxzewzz";
//     string str;
//     getline(cin,str);
//     char temp;
//     int n=str.length();
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<n-i-1;j++)
//         {
//             if(str[j]>str[j+1])
//             {
//                 temp=str[j];
//                 str[j]=str[j+1];
//                 str[j+1]=temp;
//             }
//         }
//     }
    
//     cout<<str<<endl;
//     binarysearch(str);
//     return 0;
// }

// void binarysearch(string str)
// {
//     char ch='z';
//     int mid,low=0,high=str.length();
//     while(low<high)
//     {
//         mid=(low+high)/2;
//         if(str[mid]==ch)
//         {
//             cout<<"found"<<endl;
//             break;
//         }
//         else if(ch>str[mid])
//         {
//             low=mid+1;
//         }
//         else{
//             high=mid-1;
//         }
//     }
//     cout<<"Not found";
// }




#include<iostream>
using namespace std;
class sort {
    string str;
    char temp;
    int siz;
    public:
    void set_data();
    friend void sorting(sort);
};
void sort::set_data()
{
    cout<<"Enter string:- ";
    getline(cin,str);
    siz=str.length();
}
void sorting(sort st)
{
    int n=st.siz;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(st.str[j]>st.str[j+1])
            {
                st.temp=st.str[j];
                st.str[j]=st.str[j+1];
                st.str[j+1]=st.temp;
            }
        }
    }
    
    cout<<st.str<<endl;
}
int main()
{
    sort st;
    st.set_data();
    sorting(st);
    
    return 0;
}