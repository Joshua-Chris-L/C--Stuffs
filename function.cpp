#include <iostream>
using namespace std;

// int * fun(){
//     int *p = new int[5];
//     for (int i = 0; i < 5; i++)
//     {
//         p[i] = 5*i;

//     }

//     cout<<p<<endl;
//     return p;
// }

// int main(){
//     int *q = fun();

//     for(int i=0; i<5; i++){
//         cout<<q[i]<<endl;
//     }
// }

// class  Rectangle
// {
// private:
//     int length;
//     int breadth;
// public:
//     int area(){
//         return length*breadth;
//     }

//     int perimeter(){
//         return 2*(length + breadth);
//     }
// };

// int main()
// {
//     Rectangle r1;
// }

// class Rectangle
// { 
//     private:
//         int lenght;
//         int breadth;
//     public:
//         Rectangle(int lenth, int breadth) {
//             this -> lenght = lenght;
//             this -> breadth = breadth;
//         }
//     int area(){
//        cout<<lenght*breadth;
//     }
// }

// struct Demo
// {
//     int x;
//     int y;

//     void Display(){
//         cout<<x<<" "<<y<<endl;
//     }
// };

// int main(){
//     Demo d;
//     d.x = 10;
//     d.y = 20;
//     d.Display();
// }

// class Complex
// {
// private:
//     /* data */
//     int real;
//     int img;
// public:
//     Complex(int r=0, int i=0)
//     {
//         real=r;
//         img=i;
//     }

//     void display(){
//         cout<<real<<"+i"<<img;
//     }

//     friend Complex operator+(Complex c1, Complex c2);

// };


// Complex operator+(Complex c1, Complex c2)
// {
//     Complex temp;
//     temp.real = c1.real+ c2.real;
//     temp.img=c1.img+ c2.img;
//     return temp;
// }

// int main()
// {
//     Complex c1(5,3), c2(10, 5), c3;
//     c3 = c1 + c2;
//     c3.display();
// }

// class Rational
// {
// private:
//     int p;
//     int q;
// public:
//     Rational()
//     {
//         p=1;
//         q=1;
//     }

//     Rational(int p, int q)
//     {
//         this->p=p;
//         this->q=q;
//     }

//     Rational(Rational &r)
//     {
//         this->p=r.p;
//         this->q=r.q;
//     }
//     int getP(){return p;}
//     int getQ(){return q;}
//     void setP(int p)
//     {
//         this->p=p;
//     }
//     void setQ(int q)
//     {
//         this->q=q;
//     }
//     Rational operator+(Rational r)
//     {
//         Rational t;
//         t.p= this->p*r.q+this->q*r.p;
//         t.q=this->q*r.q;
//         return t;
//     }

//     friend ostream & operator<<(ostream &os, Rational &r);
// };
// ostream & operator<<(ostream &os, Rational &r)
// {
//     os<<r.p<<"/"<<r.q;
//     return os;
// }

// int main()
// {
//     Rational r1(3,4), r2(2,5), r3;
    
//     r3 = r1 + r2;
//     cout<<"Sum of"<<r1<<" and "<<r2<<"is"<<r3<<endl;
// }

// class Base
// {
//     public:
//         void display()
//         {
//             cout<<"Display of Base"<<endl;
//         }
// };

// class Derived:public Base
// {

// };

// int main()
// {
//     Derived d;
//     d.display();
// }


class Base{
    public:
        Base(){cout<<"Non-param base"<<endl;}
        Base(int x){cout<<"Param of Base "<<x<<endl;}
};

class Derived:public Base
{
public:
    Derived(){cout<<"Non-paaram Derived"<<endl;}
    Derived(int y){cout<<"Param of Derives"<<y<<endl;}
};

int main(){
    Derived d;
}





