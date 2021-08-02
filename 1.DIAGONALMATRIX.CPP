#include<iostream>
using namespace std;
class Diagonal
{
  private:
  int n;
  int *A;
  public:
  Diagonal(int n)
  {
      this->n=n;
      A=new int [n];
  }
  void setX(int i,int j,int x)
  {
      if(i==j){A[i-1]=x;}
  }
  void display()
  {
      for(int i=1;i<=n;i++)
      {
          for(int j=1;j<=n;j++)
          {
              if(i==j)
              cout<<A[i-1
              ];
              else{cout<<0;}
          }
          cout<<endl;
      }
  }
  ~Diagonal()
  {

      delete []A;
      cout<<"Destructor called";
  }
};
int main()
{
    int n;
   int x;
    cout<<"Enter size of matrix "<<endl;
    cin>>n;

     Diagonal d(n);
     cout<<"Enter elements"<<endl;
     for(int i=1;i<=n;i++)
     {
         for(int j=1;j<=n;j++){cin>>x;
         d.setX(i,j,x);
         }
     }
     d.display();
}
