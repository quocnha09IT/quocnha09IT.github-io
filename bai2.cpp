#include <iostream>

using namespace std;


int main()
{
    
    cout << "Benh nhan ngoai tru hay noi tru ? \n neu noi tru nhap '1' neu ngoai tru nhap '2'\n";

    int n;
    cin >> n;
     int songay,tygia,chiphi,dichvu,tongtien;
    switch (n)
   {
   case 1:
    cout << "benh nhan la noi tru  \n";
   
    cout << "nhap vao so ngay o :"; cin >> songay;
    cout << "nhap vao ty gia :"; cin >> tygia;
    cout << " nhap vao chi phi :"; cin >> chiphi;
    cout << "nhap vao phi dich vu :"; cin >> dichvu;

    tongtien = songay+tygia+chiphi+dichvu;
    cout << "tong tien la : ";
    cout << tongtien;
    break;
    
    case 2:
    cout << "benh nhan la ngoai tru \n";
    cout << " nhap vao chi phi :"; cin >> chiphi;
    cout << "nhap vao phi dich vu :"; cin >> dichvu;

    tongtien = chiphi+dichvu;
    cout << "tong tien la : ";
    cout << tongtien;
    break;
   
   
   default:
     cout << "nhap k hop le" << endl;
   
   }
  
    
}
