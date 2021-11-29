#include<iostream>
#include<cstdlib>
using namespace std;
int* counta(int *a,int *b)
{
int ca=0,cb=0;
int *c =new int(2) ;
for(int i=0;i<3;i++)
{
    if(a[i]>b[i])
    {
        ca++;
    }
    else if(b[i]>a[i]){cb++;}
}
*(c+0)=ca;
*(c+1)=cb;
return c;
}
int main()
{
  int* a = new int(3);
  int *b=new int(3);
 for(int i=0;i<3;i++)
 {

     cin>>*(a+i);
 }
 for(int i=0;i<3;i++)
 {

     cin>>*(b+i);
 }
 int *res=counta(a,b);
 for(int i=0;i<2;i++)
 {
     cout<<*(res+i)<<" ";
 }

  return 0;
}
