#include <iostream>

using namespace std;

class Point{
    public:
        int x, y;

    Point();
    Point(int a, int b){
        x = a;
        y = b;
    }

    void getPoint(){
        cout << "[" << x << "," << y <<"]" << endl;
    }
    Point operator+(Point p){
        x = x + p.x;
        y = y + p.y;
        return Point(x,y);
    }
};

int main(){
    Point p1(10,2);
    Point p2(2,3);

    Point p3 = p1 + p2;
    p3.getPoint();

    Point p4 = p1.operator+(p2);
    p4.getPoint();
}