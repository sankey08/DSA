#include<iostream>
using namespace std;

template <typename T,typename V> //For multiple types

class Pair{

    T x;
    V y;

    public:
        void setX(T x){
            this->x = x;
        }
        T getX(){
            return x;
        }
        void setY(V y){
            this->y = y;
        }
        V getY(){
            return y;
        }
};

int main(){

    // Pair<int> p1;
    // p1.setX(10);
    // p1.setY(20);
    // cout<< " X " << p1.getX() << " and " << " Y " << p1.getY() << endl;
    
    // Pair<double> p2;
    // p2.setX(10.42);
    // p2.setY(20.32);
    // cout<< " X " << p2.getX() << " and " << " Y " << p2.getY() << endl;

    // Pair<int,double> p1;
    // p1.setX(2);
    // p1.setY(211.56);
    // cout<< " X " << p1.getX() << " and " << " Y " << p1.getY() << endl;

    Pair<Pair<int,int>,int> p1;
    p1.setY(10);

    Pair<int,int> p4;
    p4.setX(20);
    p4.setY(30);
    p1.setX(p4);

    cout << p1.getX().getX() << " " << p1.getX().getY() << endl;

    return 0;
}
