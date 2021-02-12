#include<iostream.h>
#include<conio.h>
#include<math.h>

float area(float p)
{
  return 3.1416*p*p;
}

float area(int p)
{
  return p*p;
}

float area(float p,float q)
{
  return p*q;
}

float area(int p,int q)
{
  return (0.5*p*q);
}

float area(float p,float q,float r)
{
  float s;
  s=(p+q+r)/2;
  return sqrt(s*(s-p)*(s-q)*(s-r));
}

void main()
{
  clrscr();
  int p,q,ch;
  float a,b,r;

  char choice;

  do
  {
    cout<<"\nSelect one of the following ";
    cout<<"\n\n1.Area of square ";
    cout<<"\n3.Area of rectangle ";
    cout<<"\n4.Area of right triangle ";
    cout<<"\n5.Area of triangle ";

    cout<<"\n\n\nEnter your choice ";
    cin>>ch;

    switch(ch)
    {
      case 1: cout<<"\n\nEnter side of square ";
	      cin>>p;
	      cout<<"\nArea is "<<area(p);
	      break;

      case 2: cout<<"\n\nEnter radius of circle ";
	      cin>>a;
	      cout<<"\nArea is "<<area(a);
	      break;

      case 3: cout<<"\n\nEnter length of rectangle ";
	      cin>>a;
	      cout<<"\nEnter the breadth of the rectangle ";
	      cin>>b;
	      cout<<"\nArea is "<<area(a,b);
	      break;

      case 4: cout<<"\n\nEnter base of triangle ";
	      cin>>p;
	      cout<<"\nEnter the height of triangle ";
	      cin>>q;
	      cout<<"\nArea is "<<area(p,q);
	      break;

     case 5: cout<<"\n\nEnter sides of the triangle ";
	      cin>>a>>b>>r;
	      cout<<"\nArea is "<<area(a,b,r);
	      break;

      default: cout<<"\n\nINVALID ";

    }

    cout<<"\nWant to enter again.... ";
    cin>>choice;
  }
  while(choice=='y' || choice=='Y');
  getch();
}
