#include<iostream.h>
#include<conio.h>
int a[10],max,min,mid,max1=0,min1=0;
void max_min(int i,int j, int &max,int &min)
{
 if(i==j)
 {
  max=a[i];
  min=a[i];
 }
 else if(i==j-1)
 {
  if(a[i]>a[j])
  {
   max=a[i];
   min=a[j];
  }
  else
  {
   max=a[j];
   min=a[i];
  }
 }
 else
 {
  mid=(i+j)/2;
  max_min(i,mid,max,min);
  max_min(mid+1,j,max1,min1);
  if(max1>max)
   max=max1;
  if(min1<min)
   min=min1;
 }
}
void main()
{
 clrscr();
 int i;
 cout<<"Enter elements : ";
 for(i=0;i<10;i++)
  cin>>a[i];
 max=a[0];
 min=a[0];
 max_min(0,9,max,min);
 cout<<"Maximum : "<<max<<"\n";
 cout<<"Minimum : "<<min<<"\n";
 getch();
}