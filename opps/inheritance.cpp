#include <iostream>
using namespace std;

class Animal {
protected:
    string name;
    
public:
    Animal(string n) : name(n) {}
    
    void eat() {
        cout << name << " is eating." << endl;
    }
    
    void sleep() {
        cout << name << " is sleeping." << endl;
    }
};

class Dog : public Animal {
private:
    string breed;
    
public:
    Dog(string n, string b) : Animal(n), breed(b) {}
    
    void bark() {
        cout << name << " is barking!" << endl;
    }
    
    void displayInfo() {
        cout << "Name: " << name << ", Breed: " << breed << endl;
    }
};

class Cat : public Animal {
public:
    Cat(string n) : Animal(n) {}
    
    void meow() {
        cout << name << " is meowing!" << endl;
    }
};

int main() {
    Dog dog("Buddy", "Druve Rathi");
    dog.eat();
    dog.bark();
    dog.displayInfo();
    
    cout << endl;
    
    Cat cat("Whiskers");
    cat.eat();
    cat.meow();
    
    return 0;
}