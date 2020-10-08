#include <iostream>
#include <string>
#include <string.h>
using namespace std;

int main()
{
    char arr[30][30];
    int m,n;
    cout<<"Enter the number of elements in the array"<<endl;
    cout<<" Row-wise ";
    cin>>m;
    cout<<" Column-wise ";
    cin>>n;

    for(int i = 0;i<n;i++)
    {
         for(int j = 0;j<m;j++)
         {
             cin>>arr[i][j];
         }
    }

     for(int i = 0;i<n;i++)
    {
         for(int j = 0;j<m;j++)
         {
             cout<<arr[i][j];
         }
         cout<<endl;
    }
    cout<<"Enter the keyword ";
    string keyWord;
    cin>>keyWord;
    string ansString;
     for(int i = 0;i<n;i++)
    {
        int k=0;
         for(int j = 0;j<m;j++)
         {
             if(keyWord[k] == arr[i][j])
             {
                 //ansString.push_back(arr[i][j]) ;
                 ansString = ansString + arr[i][j];
                 k++;
             }
         }
    }

    cout<<ansString<<endl;
    if(ansString == keyWord)
        cout<<"word present row wise"<<endl;
    ansString = "";
     for(int i = 0;i<n;i++)
    {
       int k=0;
         for(int j = 0;j<m;j++)
         {
             if(keyWord[k] == arr[j][i])
             {
                 //ansString.push_back(arr[i][j]) ;
                 ansString = ansString + arr[j][i];
                 k++;
             }
         }
    }
    cout<<ansString<<endl;
    if(ansString == keyWord)
        cout<<"word present column wise"<<endl;
         ansString = "";

       int k=0;
       int i = 0;
         for(int j = 0;j<m;j++)
         {
             if(keyWord[k] == arr[j][i])
             {
                 //ansString.push_back(arr[i][j]) ;
                 ansString = ansString + arr[j][i];
                 k++;
                 i++;
             }
         }


    cout<<ansString<<endl;
    if(ansString == keyWord)
        cout<<"word present diagonal wise"<<endl;








    return 0;
}
