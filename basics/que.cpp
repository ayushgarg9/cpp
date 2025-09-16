#include <iostream>
#include <cmath>
using namespace std;

class POINT {
    int coord[2];
public:
    POINT(int x=0, int y=0) {
        coord[0]=x; coord[1]=y;
    }
    void read() {
        cin>>coord[0]>>coord[1];
    }
    friend double distance(POINT p1, POINT p2) {
        return sqrt(pow(p1.coord[0]-p2.coord[0],2) +
                    pow(p1.coord[1]-p2.coord[1],2));
    }
};

int main() {
    POINT p1(2,3), p2(5,7);
    cout<<"Distance = "<<distance(p1,p2);
}
