#include<iostream>
using namespace std;
class B;
class A{
    int x;
public:
    void set(int a){x=a;}
    friend void max(A,B);
};

class B{
    int y;
public:
    void sety(int a1){y=a1;}
    friend void max(A,B);
};

void max(A a,B b){
    if(a.x>b.y){
        cout<<"Big value is "<<a.x<<endl;
    }else{
        cout<<"Small value is "<<b.y<<endl;
    }
}



int main()
{
    A obj;
    obj.set(114);
    B obj1;
    obj1.sety(112);

    max(obj,obj1);
    return 0;
}
