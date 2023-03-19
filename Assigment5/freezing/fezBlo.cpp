#include"fezBlo.h"

enum Freezing { ETHYL_FR = -173, OXYGEN_FR = -362, WATER_FR = 32 };
enum Boiling { ETHYL_BO = 172, OXYGEN_BO = -306, WATER_BO = 212 };

bool fezblo::isEthyfreezing(){
    if(getTemperature()<= ETHYL_FR){
       return true; 
    }
    return false;
}


bool fezblo::isOxygenFreezing(){
    if(getTemperature()<= OXYGEN_FR)
    {return true; }
    return false;
}

bool fezblo::isWaterFreezing(){
    if(getTemperature()<= WATER_FR){
       return true; 
    }
    return false;
}

bool fezblo::isEthylBoiling(){
    if(getTemperature()>= ETHYL_BO){
       return true; 
    }
    return false;
}

bool fezblo::isOxygenBoiling(){
    if(getTemperature()>= OXYGEN_BO){
       return true; 
    }
    return false;
}
bool fezblo::isWaterBoiling(){
    if(getTemperature()>= WATER_BO){
       return true; 
    }
    return false;
}


