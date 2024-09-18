
// Afrobotics.com 2024.
// Author : David Phume.
// This code is a 3d map of the robot environment.

// Main concept of Programming
// Class - A class is a block of code from which an objects can be created from, it can also be thought of a custom data type.
// Object - An object is an instance of a class. It can also be thought of as a variable with a custom data type.
// Polymorphsm is when a dirived class uses functionalities from the base class in it's own way.
// inheritance is when a dirived class inherits functionalities from the base class.
// Abstraction is a concept in programming where the unnessessary details are hidden and funtionality is simplified.
// Encapsulation is a concept in object oriented programming used to hide and protect data.

// Other concepts and elements
// Composition is when a class is used within another class.
// Pointer is a varaible that holds a momory address as it's value.




#include <iostream>
using namespace std;


class animal{

public:
virtual void action( string name ,int sound , int run ,int jump ){

    cout << name <<" sound : " << sound <<endl;
     cout << name <<" run : " << run <<endl;
    cout << name << " jump : " << jump <<endl;
    cout << " ---------- " <<endl;
}


};

class lion : public animal{

public:
void action (string name ,int sound , int run ,int jump ){
    cout << name <<" sound : " << sound <<endl;
     cout << name <<" run : " << run <<endl;
    cout << name << " jump : " << jump <<endl;
    cout << " ---------- " <<endl;
}


};

class monkey : public animal{
public:
    void action(string name , int sound , int run ,int jump ){

    cout << name <<" sound : " << sound <<endl;
     cout << name <<" run : " << run <<endl;
    cout << name << " jump : " << jump <<endl;
    cout << " ---------- " <<endl;
}


};


int main (){


animal *animal1;
animal *animal2;
lion myLion;
monkey myMonkey;
animal1 = &myLion;
animal2 = &myMonkey;

animal1->action("lion", 5 , 8, 6);
animal2->action("monkey" , 3 , 4 ,8);



    return 0;
}
