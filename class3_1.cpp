#include<iostream>
using namespace std;
int main(){
    int sum;
    sum=0;
    for(int i=0;i<=5;i++){
        cout<<"res"<<"="<<sum<<"+"<<i<<"=>"<<(sum+i)<<endl;
        sum=+i;
    }
    return 0;
}