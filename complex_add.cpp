//adding 2 complex numbers using operator overloading
#include<iostream>
using namespace std;

class complex{
    int r, img;
    public:
        complex(int a = 0, int b = 0) 
        {   r = a;
            img = b;
        }
        complex operator+(complex const &obj){
            complex c;
            c.r = r + obj.r;
            c.img = img + obj.img;
            return c;
        }
        void print(){ cout << r << " +i" << img; }
};
int main(){
    complex c1(10, 5), c2(2, 4);
    complex c3 = c1 + c2;
    c3.print();
}