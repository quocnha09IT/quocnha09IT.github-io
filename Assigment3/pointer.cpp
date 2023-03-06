#include <iostream>
using namespace std;

void swap(int *&a,int *&b);
int main()
{
  int a,b;
  cout << "nhap a : ";
  cin >> a;
  cout << "nhap b : ";
  cin >> b;
  swap(a,b);
  cout << "a = " << a << "\n  b = " << b;      
}
void swap(int *&a,int *&b){
  int temp;
  temp = *a;
  *a=*b;
  *b=temp;
}