#include <iostream>
using namespace std;

class object{

private:
    string name="0";
    double mass=0;
    double position[3] = {0,0,0};
    double xCoordinate = position[0];
    double yCoordinate = position[1];
    double zCoordinate = position[2];
    
public:
    object(string conName,double conMass,double conX,double conY,double conZ){
        name=conName;
        mass=conMass;
        xCoordinate=conX;
        yCoordinate=conY;
        zCoordinate=conZ;
    }
    double provideX(){
        return xCoordinate;
    }
    double provideY(){
        return yCoordinate;
    }
    double provideZ(){
        return zCoordinate;
    }

};



int main(){

    object Earth("terra",10000, 1,2,3);

    cout << Earth.provideZ() <<endl;
    return 0;
}   