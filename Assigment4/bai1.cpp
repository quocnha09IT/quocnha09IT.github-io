#include <iostream>
using namespace std;

class employee{
    string name;
    string idnumber;
    string department;
    string position;

    public:
    employee(string Name,string IDnumber,string Department,string Position){
        this->name = Name;
        this->idnumber = IDnumber;
        this->department = Department;
        this->position = Position;

    }
    employee(string Name,string Idnumber){
        this->name = Name;
        this->idnumber = Idnumber;
        this->department = "";
        this->position = "";

    }
    employee(){
        this->name = "";
        this->idnumber = "0";
        this->department = "";
        this->position = "";

    }

    string getName(){
        return this->name;
    }
    string setName(string Name){
        this->name = Name;
    }
    
     string getIDnumber(){
        return this->idnumber;
    }
    string setIDnumber(string Idnumber){
        this->idnumber = Idnumber;
    }

     string getDepartment(){
        return this->department;
    }
    string setDepartment(string Department){
        this->department = Department;
    }

     string getPosition(){
        return this->position;
    }
    string setPosition(string Position){
        this->position = Position;
    }
void display(){
        cout << this->name << "\n"<<this->idnumber << "\n"<<this->department << "\n"<<this->position << endl;
    }

  

};

int main()
{
  
  employee epl1("quocnha","90992213","IT","Se");
  employee epl2("vanngo","920013213","IT","ngungay");
  employee epl3("minhquan","9098129392213","IT","nuakhungnuadien");
  epl1.display();
  epl2.display();
  epl3.display();

   
}