#include <iostream>
using namespace std;

void nhapmang(int *a,int n);
void sumAP(int *a,int n);
int main()
{
   
    int *a ;
    a = new int[10];
    int n;
    nhapmang(a,n);
    sumAP(a,n);
  
    

     
}
void nhapmang(int *a,int n){

  cout << "nhap so phan tu cua mang :";
  cin >> n;

  for (int  i = 0; i < n; i++)
  {
    cout << "nhap vao phan tu thu ["<< i <<"]";
    cin >> a[i];
  }
  
 
}
void sumAP(int *a,int n){
int sum;
    for (int i = 0; i < n; i++)
    {
        sum =sum + a[i];
        a++;
    }

      cout << "tong cac phan tu la : " << sum ;  
}