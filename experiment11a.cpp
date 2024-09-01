#include<iostream>
using namespace std;
class cubiod {
    public:
    double h=10.0;
    double b=17.0;
    double l=27.0;
};
int main(){
    cubiod c1;
    double vol=c1.h*c1.b*c1.l;
    cout<<"volume of the cubiod is :"<<vol;
    
}