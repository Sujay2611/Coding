//
//  main.cpp
//  OOPS
//
//  Created by sujay2611 on 02/10/20.
//  Copyright © 2020 sujay2611. All rights reserved.
//

#include <iostream>
using namespace std;
class a
{
public:
    int k=3;
    string c;
    void display()
    {
        cout<<"Hello world "<<c<<endl;
    }
    int add()
    {
        return k+q;
    }
    
private:
    int q=3;
    
};

class test
{
public:
    int q;
    test()
    {
        cout<<"default constructor"<<endl;
    }
    test(int k)
    {
        k=q;
        cout<<"Parametrized constructor"<<endl;
    }
    
};

class t1
{
public:
    void func(int k)
    {
        cout<<"func 1"<<endl;
    }
    void func(double k)
    {
        cout<<"func 2"<<endl;
    }
    void func(int x,int y)
    {
        cout<<"func 3"<<endl;
    }
    
};

class base
{
public:
    virtual void f1()
    {
        cout<<"in base f1"<<endl;
    }
    void f2()
    {
        cout<<"in base f2"<<endl;
    }
};

class derived:public base
{
public:
    void f1()
    {
        cout<<"in derived f1"<<endl;
    }
    void f2()
    {
        cout<<"in derived f2"<<endl;
    }
};

class animal
{
public:
    animal()
    {
        cout<<"animal"<<endl;
    }
    int c=2;
};

class mammal
{
public:
    mammal()
    {
        cout<<"mammal"<<endl;
    }
    int d;
};

//multiple inheritence - possible in c++ but not in java
class dog:public animal,public mammal
{
    
};

int main(int argc, const char * argv[]) {
    // insert code here...
    /*
    a obj1;
    obj1.c="yes";
    obj1.k=4;
    obj1.display();
    cout<<obj1.add()<<endl;
    */
    
    /*
    test a1;
    test a2(12);
    */
    
    
    /*
    t1* obj1=new t1();
    obj1->func(2);
    t1 obj2;
    obj2.func(2.0);
    */
    
    /*
    base* o1=new derived();
    o1->f1();
    //function in derived class overrides corrosponding virtual function in base class is runtime polymorphism.
    o1->f2();
    */
    
    dog a;
    a.d=2;
    cout<<a.c<<" "<<a.d<<endl;
    return 0;
}
