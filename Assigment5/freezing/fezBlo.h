#include <string>
#include <iostream>
using std::string;
using std::cin;
using std::cout;

class fezblo{

    private:
    int temperature;

    public:
    fezblo(){
        temperature = 0;
    }
    fezblo(int temp){
        temperature = temp;
    }
    bool isEthyfreezing();
    bool isEthylBoiling();
    bool isOxygenFreezing();
    bool isOxygenBoiling();
    bool isWaterFreezing();
    bool isWaterBoiling();
      
     int getTemperature() 
        { return temperature; }
    
};