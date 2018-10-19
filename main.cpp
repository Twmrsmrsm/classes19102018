#include <iostream>

class point {
private:
    int X;
    int Y;
public:
    void setX (int x){
        if (x>=-100 && x<=100)
            X=x;
        else
            std::cout<<"incorrect X\n";
    }
    void setY (int y){
        if (y>=-100 && y<=100)
            Y=y;
        else
            std::cout<<"incorrect Y\n";
    }
    void print() {
        std::cout << '(' << X << ';' << Y << ')' << '\n';
    }
};
int main() {
    point a;
    a.setX(61);
    a.setY(12);
    a.print();
    return 0;
}