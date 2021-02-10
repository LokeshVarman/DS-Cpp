#include<iostream>
using namespace std;

int linearseach(int list[], int size, int elementtosearch)
{
    for(int i=0;i<size;i++)
    {
        if(list[i]==elementtosearch)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int arr[10]={5,8,7,4,6,34,8,4,89,5};
    int etos;
    cout<<"Enter number to serach:";
    cin>>etos;
    int result=linearseach(arr,10,etos);
    if(result!=-1)
    {
        cout<<etos <<"found at"<<result<<endl;
    }
    else{
        cout<< "Not found";
    }

    return 0;

}