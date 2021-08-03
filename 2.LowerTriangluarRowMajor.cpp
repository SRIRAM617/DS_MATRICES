#include<iostream>
using namespace std;
class Lowertri
{
    int n;
    int *A;
public:
    Lowertri(int n)
    {
        this->n=n;
        A=new int [(n*(n+1)/2)];
    }
    void setElement(int i,int j,int element)
    {
        if(i>=j)
        {
            A[((i*(i-1))/2)+(j-1)]=element;
        }

    }
    void display()
    {
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                if(i>=j)
                cout<<A[(((i*(i-1))/2)+(j-1))]<<" ";
                else
                    cout<<"0 ";
            }
            cout<<endl;

        }
    }
};
int main()
{
    int sizee;

  int x;
  cout<<"Enter size"<<endl;
  cin>>sizee;
  Lowertri d(sizee);
  cout<<"Enter the elements"<<endl;
  for(int i=1;i<=sizee;i++)
  {
      for(int j=1;j<=sizee;j++)
      {
          cin>>x;
          d.setElement(i,j,x);
      }
  }
  d.display();

}
