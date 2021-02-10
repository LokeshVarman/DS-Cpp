#include <iostream>
using namespace std;

int hashfunction(int key, int tsize)
{
	return key%tsize;
}

void insertelement(int arr[], int size, int ele)
{
	int index=hashfunction(ele,size);
	arr[index]=ele;
}

int main()
{
	int arr[10]={0,0,0,0,0,0,0,0,0,0};
	int a;
	cout<< "Enter elements to store";
	for(int i=0;i<3;i++)
	{
		cin>>a;
		insertelement(arr,10,a);
	}
	for(int i=0;i<10;i++)
	{
		cout << arr[i]<<endl;
	}
	int etos;
	cout<<"Enter number to serach:";
	cin>>etos;
	//int result=linearseach(arr,10,etos);
  int hashresult=hashfunction(etos, 10);
  if(arr[hashresult]==etos)
	{
		cout<<etos <<"found at"<<hashresult<<endl;
	}
	else{
	cout<< "Not found";
}

return 0;

}
