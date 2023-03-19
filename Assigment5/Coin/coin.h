#include <string>

class Coin
{
    private:
      string  sideUp;               
        int  cntHeads;              
        int  cntTails;               

    public:
        Coin::Coin() : sideUp(""), cntHeads(0), cntTails(0)    
        {
           initRNG();
           toss();
           sideCount();
        }

        void initRNG();                
        void toss();                     
        void sideCount();                    

        std::string getSideUp()
        { return sideUp; }

        int Coin::getCntHeads()       
        { return cntHeads; }
       
        int Coin::getCntTails() 
        { return cntTails; }
};