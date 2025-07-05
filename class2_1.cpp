
#include <iostream>
using namespace std;
class Car{
    public :
    int wheels; // e.s 4
    int seats; // e.g 5 or 6
    int doors;// e.g 4 or 5
    char engineType[10]; // v8
    char modelNo[10]; //A34
    float fuelCap;


    
    void setCarDetails(int swheels,float sfuelCap){
        wheels=swheels;
        fuelCap=sfuelCap;
        
    }
    void getCarDetails(){
        cout<<"No of wheels="<<wheels << endl;
    }
    void getFuelCost(float fprice){
        cout<<"fuel cost="<<(fuelCap*fprice) << endl;
        
    }
};

int main(){
    Car c1,c2;//c1 holds the 5 deff value 
    c1.setCarDetails(4,15);
    c1.getCarDetails();
    c2.setCarDetails(3,23);
    c2.getCarDetails();
    c1.getFuelCost(84);
    c2.getFuelCost(10);
}