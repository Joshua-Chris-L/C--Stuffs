#include<iostream>
#include<math.h>
using namespace std;

// int main(){ 

//     cout<<"Hello World. I love Jesus"<<endl;

//     return 0;
// }



// int main()
// {
//   float r, area;

//   cout<<"Enter Radius: ";
//   cin>>r;
//   area = 22.0/7*r*r;

//   cout<< "Area of the circle is: "<< area;

//   return 0;
// }

// int main()
// {
//     int a,b,c;
//     char x= 'A';
//     float root1, root2;
//     cout<<"Enter a, b, c: ";

//     cin>>a>>b>>c;

//     root1 = (-b + sqrt(b*b- 4*a*c))/(2*a);
//     root2 = (-b - sqrt(b*b - 4*a*c))/(2*a);

//     cout<<root1<<""<<root2 << x + 32 <<endl;

//     return 0;
// }

// int main() {

//     cout<<"Menu \n";
//     cout<<"1. Add \n"<<"2. Sub\n"<<"3. Mul\n"<<"4. Div\n";

//     int option;
//     cout<<"Enter your choice: ";
//     cin>>option;
//     int a,b,c;
//     cout<<"Enter 2 number: ";
//     cin>>a>>b;

//     switch (option)
//     {
//     case 1: c = a + b;
//         break;
//     case 2: c = a - b;
//         break;
//     case 3: c = a * b;
//         break;
//     case 4: c = a/b;
//         break;
//     default:
//         break;
//     }

//     cout<<"Result is "<<c<<endl;

//     return 0;

// }


int main(){
    cout<<" Program Calculates the discounted price. Please Input Total Amount: ";
    int totalAmount;
    cin>> totalAmount;

    if (totalAmount < 100)
    {
        cout<< totalAmount<<"\n";
    }else if (totalAmount >= 100 && totalAmount < 500)
    { 
        int discount;
        discount = totalAmount*0.1;
        cout<<totalAmount - discount << "\n";
    }else{
        int discount;
        discount = totalAmount*0.2;
        cout<< totalAmount - discount<<"\n";
    }

    return 0;
}