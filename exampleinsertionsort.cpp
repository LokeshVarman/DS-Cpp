int arr[] = {1,-3,4,5,7,8,10};
int intCnt = sizeof(arr) / sizeof(int);
int intToAdd ;
cin>>intToAdd;
int idx = intCnt-1;
while(idx)
{
//cout << arr[idx] << endl;
  arr[idx] = arr[idx-1];}
  --idx;
}
arr[0] = intToAdd;
for(int i=0;i<intCnt;++i)
{
  cout << arr[i] << endl;
}