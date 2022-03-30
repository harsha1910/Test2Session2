#include <stdio.h>

int input()
{
  int n;
  printf("Enter n\n");
  scanf("%d",&n);
 return n;
  
}

int find_fibo(int n)
{
  int n1=0,n2=1,d;
  if (n==0)
    return 0;
  else
  for (int i=2;i<=n;i++)
    {
      d=n1+n2;
      n1=n2;
      n2=d;
    }
  return n2;
  
}

void output(int n,int fibo)
{
  printf("fibo %d is %d ",n,fibo);
  
}

int main()
{
  int n= input();
  int fibo= find_fibo(n);
  output(n,fibo);
  return 0;
  
}