// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class Engine{
    public:
    Engine(){cout<<"Engine Instantiated"<<endl;}
    ~Engine(){cout<<"Engine deleted"<<endl;}
};
class car{
    Engine _engineInstance;
    public:
    car(){cout<<"car Instantiated"<<endl;}
    ~car(){cout<<"car deleted"<<endl;}
};

int main() {
    car instance;
}
