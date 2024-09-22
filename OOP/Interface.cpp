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
    Dog myDog;
    myDog.sound();
    Kucing kucing;
    kucing.sound();
    Animal myAnimal;
    myAnimal.sound();
    return 0;
}