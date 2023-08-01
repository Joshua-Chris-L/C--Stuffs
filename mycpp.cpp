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


// int main(){
//     cout<<" Program Calculates the discounted price. Please Input Total Amount: ";
//     int totalAmount;
//     cin>> totalAmount;

//     if (totalAmount < 100)
//     {
//         cout<< totalAmount<<"\n";
//     }else if (totalAmount >= 100 && totalAmount < 500)
//     { 
//         int discount;
//         discount = totalAmount*0.1;
//         cout<<totalAmount - discount << "\n";
//     }else{
//         int discount;
//         discount = totalAmount*0.2;
//         cout<< totalAmount - discount<<"\n";
//     }

//     return 0;
// }

// int main(){
//     int n,r;
//     cout<<"enter a number";
//     cin>>n;

//     while (n!=0)
//     {
//         r = n%10;
//     }
//     cout<<r;

//     return;
// }

// int main(){

//     int A[] = {2,3,4,8,9,10,19};

//     // for (int i=0; i<6; i++)
//     //     cout<<A[i]<<endl;
    
//     for(int x:A)
//         cout<<x<<endl;
//     return 0;
// }

// int main(){
//     int A[7] = {-4,-5,-61,-7,-8,-9};
//     int n = 7, sum = 0;

//     // for(int i=0; i<7 ; i++){
//     //     sum +=A[i];
//     // }

//     // cout<<"Sum is "<< sum <<endl;

//     int max = A[0];
//     for (int i = 0; i < 6; i++)
//     {
//        if (A[i] > max)
//        {
//           max = A[i];
//        } 
//     }
    
//     cout<<max<<endl;

//     return 0;
// }


// int main()
// {
//     for (int i = 1; i <=5; i++)
//     {
//         for (int j = 1; j <= 6-i; j++)
//         {
//             cout<<"* ";
//         }
//         cout<<endl;
//     }

//     return 0;
// }

// int main(){
//     int A[2][3] = {{2,2,3}, {3,3,3} }; 
//     int B[2][3] = {{1,1,1}, {2,2,2}};
//     int C[2][3];

//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             C[i][j] = A[i][j] + B[i][j];
//         }
//     }
    
//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             cout<<C[i][j]<<endl;
//         }
        
//     }
// }
#include<cstring>

int main(){

    // char s1[100];
    // char s2[100];

    // cout<<"Enter your name ";
    // cin.get(s1, 100);
    // cout<<"Welcome"<<s1<<endl;

    // cin.ignore();
    // cout<<"Enter your name again";
    // cin.get(s2, 100);
    // cout<<"Welcomre"<<s2<<endl;

    // char s3[100]= "235";
    // char s4[100] = "54.78";

    // long int x= strtol(s3, NULL, 10);
    // float y= strtol(s4, NULL, 10);

    // cout<<x<<endl<<y<<endl;

    // char s1[20] = "x=10; y=20;z=35";
    // char *token = strtok(s1, "=?");

    // while (token!=NULL)
    // {
    //     cout<<token<<endl;
    //     token=strtok(NULL,"=?");
    // }

    // string str;
    // cout<<"Enter a string ";
    // getline(cin, str);

    // cout<<str<<endl;



    // string s = "Welcome Joshua";
    // char str[10];

    // s.copy(str, 7);
    // cout<<str<<endl;

    // string str = "How are you doing";
    // cout<<str.rfind("ow")<<endl;

    // string str = " Hello World";
    // cout<<str.find_last_of("l");

    // string str1 = "hello";
    // string str2 = "evening";

    // cout<<str1.compare(str2);
    // cout<<endl;

    // string str = "Holiday";
    // string str1 = "Hello";
    // string str2 = " World";

    // str[3] = 'M'; //reading into it

    // cout<<str[4]<<endl; //writing into it
    // cout<<str1 + str2<<endl;
    
    // string str ="today";

    // for (int i = 0; str[i]!='\0'; i++)
    // {
    //     str[i] = str[i] - 32;
    //     /* code */
    // }
    
    // string::reverse_iterator it;

    // for(it=str.rbegin(); it!=str.rend(); it++)
    // {
    //     cout<<*it;
    // }

    // cout<<str;
    // cout<<endl;

    // string str = "holiday";
    // string rev = "";
    // int len = str.length();
    // rev.resize(len);

    // for (int i = 0, j=len-1; i < len; i++, j--)
    // {
    //     rev[i] = str[j];
    // }
    
    // if(str.compare(rev) ==0){
    //     cout<<"The string is a Palindrone";
    // }else{
    //     cout<<"The string is not a Palindrone"<<endl;
    // }

    // functions
    
//    return 0;
// }


//using namespace std;

// float add(float x, float y)
//     {
//         float z;
//         z = x+y;

//         return z;
//     }

// void main()
//     {
//         float x=2.3, y=7.9,z;
//         z=add(x,y);

//         return 0;
//     }


































