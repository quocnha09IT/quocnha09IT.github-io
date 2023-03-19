#include"fezBlo.h"

void isfez(fezblo);
void isblo(fezblo);
main(){

    int temperature = 0;

    cout << "nhap vao nhiet do :";
    cin >> temperature;

    fezblo temp(temperature);
    isfez(temp);
    isblo(temp);


   
    return 0;
}

void isfez(fezblo temp){
    cout << "chat nay dong bang o " ;
    if(temp.isEthyfreezing())
    {
        cout<<"\n Ethy";
    }
    if(temp.isOxygenFreezing())
    {
        cout<<"\nOxi";
    }
    
    if(temp.isWaterFreezing())
    {
        cout<<"\n nuoc";
    }

}
void isblo(fezblo temp){
    cout << "chat nay tan chay o " << temp.getTemperature();
    if(temp.isEthylBoiling())
    {
        cout<<"\n Ethy";
    }
    if(temp.isOxygenBoiling())
    {
        cout<<"\nOxi";
    }
    
    if(temp.isWaterBoiling())
    {
        cout<<"\n nuoc";
    }

}