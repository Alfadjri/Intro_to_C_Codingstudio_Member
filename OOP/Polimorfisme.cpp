#include<iostream>
using namespace std;
class Animal{
    public : 
        virtual void sound() {
            cout << "Gak ada suara !" << endl;
        };
};

class Dog : public Animal{
    public : 
        void sound() override{
            cout << "Woof" << endl;
        }
};

class Kucing : public Animal{
    public : 
        void sound() override{
            cout << "Meow" << endl;
        }
};


int main(){
    Animal* x1 = new Kucing(); // ini di sebut polimorfisme
    Animal* x2 = new Dog();
    x1->sound();
    x2->sound();
    delete x1;
    delete x2;
    return 0;
}