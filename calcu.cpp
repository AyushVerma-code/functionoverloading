#include<iostream.h>
#include<conio.h>
#include<math.h>

int calc(int a,int b)
{
  return pow(a,b);
}

float calc(int a, float b)
{
  return pow(a,b);
}

float calc(float a,int b)
{
  return pow(a,b);
}

float calc(float a,float b)
{
  return pow(a,b);
}


void main()
{
  clrscr();

  int p,q;
  float r,s;

  cout<<"\nEnter int p : ";
  cin>>p;
  cout<<"\nEnter int q : ";
  cin>>q;

  cout<<"\n\nEnter real r : ";
  cin>>r;
  cout<<"\nEnter real s : ";
  cin>>s;

  cout<<endl<<endl;

  cout<<p<<"^"<<q<<"="<<calc(p,q)<<endl;
  cout<<p<<"^"<<r<<"="<<calc(p,r)<<endl;
  cout<<r<<"^"<<q<<"="<<calc(r,q)<<endl;
  cout<<r<<"^"<<s<<"="<<calc(r,s)<<endl;

  getch();

}
