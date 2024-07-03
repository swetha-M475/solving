#include<iostream>
using namespace std;
int main()
{
  int a[2][2]={1,2,3,4},b[2][2]={5,6,7,8},c[2][2];
  int i,j;
  for(i=0;i<2;i++)
   {
    for(j=0;j<2;j++)
      {
        c[i][j]=a[i][j]+b[i][j];
      }
   }
cout<<"THE ADDED MATRIX IS"<<endl;
for(i=0;i<2;i++)
{
  for(j=0;j<2;j++)
{
 cout<<c[i][j]<<'\t';
}
cout<<endl;
}
return 0;
}
