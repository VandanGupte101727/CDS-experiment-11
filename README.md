# CDS-experiment-11

AIM:-to study and implement classes and objects<br>

Software used:- VS code<br>

Theory:-<br>
In C++, the paradigm known as "Object-Oriented Programming" (OOP) is based on the idea that objects are just instances of classes. OOP is centered around four key ideas:

1).Encapsulation is the process of combining methods (functions) that manipulate data with data (attributes) into a single unit known as a class. This presents simply a controlled interface, concealing the internal state of the objects.<br>
2).Inheritance: A mechanism that encourages code reuse by allowing a new class (derived) to inherit attributes and methods from an existing class (base).<br>
3).Polymrphism:The ability to consider objects of multiple classes as objects of a common base class is known as polymorphism, and it is very helpful for writing reusable and adaptable code.<br>
4).Abstraction: Modeling relevant classes for a given problem while disregarding unimportant features in order to simplify complex reality.<br>

CODE:-<br>

A).<br>

    #include<iostream>
    using namespace std;
    class cubiod {
    public:
    double h=10.0;
    double b=17.0;
    double l=27.0;
    };
    int main(){
    cubiod c1;
    double vol=c1.h*c1.b*c1.l;
    cout<<"volume of the cubiod is :"<<vol;    
    }

B).<br>

    #include<iostream>
    using namespace std;
    class cuboid { 
    public:
    double h = 5.0,b = 3.0,l = 8.0;
    double volume()
    {
        double vol = h * b * l;
        cout<<"Volume "<<vol<<endl;
    }

    };
     int main()
    {
    cuboid c1;
    c1.volume();
    }

C).<br>

    # include<iostream>
    using namespace std;
    class cuboid
    {
    private:
    double h = 20.0,b = 13.0,l = 17.0;
    public:
    double volume()
    {
        double vol;
        vol = h * b * l;
        cout<<"Volume "<<vol<<endl;
    }

    };
    int main()
    {
    cuboid c1;
    c1.volume();
    }

D).<br>

    # include<iostream>
    using namespace std;
    class cuboid
    {
    private:
    double h = 17.0,b = 10.0 ,l = 27.0;
    public:
    double volume()
    {
        double vol;
        vol = h * b * l;
        return vol;
    }

    void disp(double vol)
    {
        cout<<"Volume "<<vol<<endl;

    }

    };
    int main()
    {
    cuboid c1;
    double v = c1.volume();
    c1.disp(v);
    }

E).<br>

    # include<iostream>
    using namespace std;
    class cuboid
    {
    public:
    double h,b,l;
    void input(){
        cout<<"enter the length:";
        cin>>l;
        cout<<"enter the breadth";
        cin>>b;
        cout<<"enter the height";
        cin>>h;
     }
    double volume()
    {
        double vol;
        vol = h * b * l;
        return vol;
    }

    void disp(double vol)
    {
        cout<<"Volume "<<vol<<endl;

    }

    };
    int main()
    {
    cuboid c1;
    c1.input();
    double v = c1.volume();
    c1.disp(v);
    }    
    


    


