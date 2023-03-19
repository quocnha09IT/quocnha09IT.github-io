#include "circel.h"


main(){
   
    double rad;
    cout << "nhap so radius :";
    cin>>rad;
    circle cir(rad);
    cout<< cir.getRad() <<"\n";
    cout<< cir.getArea() <<"\n";
    cout<< cir.getDiamater()<<"\n";
    cout<< cir.getCircum()<<"\n";
    
}