#include<iostream>
using namespace std;
class Car
{
    public:
    int wheels; //e.g4
    int seat; //e.g 5 or 6
    int doors; //e.g 4 or 5
    string engineType; //v8
    string modleNo;
    float fuelcap;

    void setCarDetails(int swheels,float sfuelcap,int sseats,int sdoors,string sengineType,string smodelNo){
        wheels=swheels;
        fuelcap=sfuelcap;
        seat=sseats;
        doors=sdoors;
        engineType=sengineType;
        modleNo=smodelNo;

    }
    void getCarDetails(){
        cout<<".............start car details........."<<endl;
        cout<<"no of wheels="<<wheels<<endl;
        cout<<"fuel capacity="<<fuelcap<< endl;
        cout<<"no of seats="<<seat<<endl;
        cout<<"no of doors="<<doors<<endl;
        cout<<" no of engineType="<<engineType<<endl;
        cout<<"no of modelNo ="<<modleNo<<endl;
        cout<<".............End car details........."<<endl;

    }
    void getFuelCost(float fprice){
        cout<<"fuel cost="<<(fuelcap*fprice)<<endl;

    }

    
};
int main(){
    Car c1,c2;
    c1.setCarDetails(4,15,6,4,"ak47","d7999");
    c2.setCarDetails(4,12,5,4,"AK48","d6966");
    cout<<"\n.............C1 car details........."<<endl;
    c1.getCarDetails();
    cout<<"...............C2 car details........."<<endl;
    c2.getCarDetails();
    c1.getFuelCost(84);
    c2.getFuelCost(100);
}