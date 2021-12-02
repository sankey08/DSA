#include<iostream>
using namespace std;

extern int a,b,c;

int g = 5; //global var

static int count = 10;

int main(){

// Data Types
//  cout<<sizeof(int)<<endl;
//  cout<<sizeof(double)<<endl;
//  cout<<sizeof(float)<<endl;ṇ
//  cout<<sizeof(bool)<<endl;
//  cout<<sizeof(char)<<endl;
//  cout<<sizeof(wchar_t)<<endl;

// Enum Type
// enum color {red,green,blue,yellow} ;

// Redeclaring/using variable 
// int a = 20,b=25,c=30;
// cout<<a+b+c;

//LOcal var value will always take preference
// int g = 10;

//Static Members/Variable
// int i =5;
// while(count--){
//     i++;
//     cout<<" i is "<<i<<endl;
//     cout<<"count is "<<count<<endl;
// }

//Operators
// cout<<sizeof(a)<<endl;
// int n = 9;
// int res = (n==9)?1:0;
// cout<<res<<endl;
// int j = (n+2,n*5,n-10);
// cout<<j<<endl;

/*Switch
C++ specifies that at least 256 levels of nesting be allowed for switch statements.
*/ 

// int a=10,b=20;

// switch (a)
// {
//     case 100:
//         cout<<"Outer Switch case 100"<<endl;
//         break;
//     case 10:
//         cout<<"Outer Switch case 10"<<endl;
//         //break;

//     switch (b)
//     {
//         case 20:
//             cout<<"Inner Switch case 20"<<endl;
//             break;
//     }

//     default:
//         break;
// }

// cout<<a<<endl;
// cout<<b<<endl;

/* Parameter names are not important in function declaration only their type is required, 
so following is also valid declaration − 

Function declaration is required when you define a function in one source file and you call that function in another file.
In such case, you should declare the function at the top of the file calling the function.

Function Arguments
If a function is to use arguments, it must declare variables that accept the values of the arguments. 
These variables are called the formal parameters of the function.

While calling a function, there are two ways that arguments can be passed to a function −
By Value
By Reference 
By Pointers

By default, C++ uses call by value to pass arguments.
*/
// int max(int,int);

cout<<max(2,5)<<endl;

//Arrays
//Single dimensional
int numbers[] = {1,4,2,67,21};
string names[] = {"sanket","avdhoot","raj","potnis","tagare"};

//Multidimensional Array
int tables[2][2] = {
    {0,1},
    {2,3}
};

int a[3][4] = {  
   {0, 1, 2, 3} ,   /*  initializers for row indexed by 0 */
   {4, 5, 6, 7} ,   /*  initializers for row indexed by 1 */
   {8, 9, 10, 11}   /*  initializers for row indexed by 2 */
};

//accessing Multidimensional arrays
for (int i = 0; i < 3; i++)
{
    cout<<"Outer Loop i : "<<i<<endl;
    for (int j = 0; j < 4; j++)
    {
        cout<<"Element at "<<i<<"and"<<j<<"is "<<a[i][j]<<endl;
        cout<<"Inner Loop j : "<<j<<endl;
    }  
}

/*
C++ provides following two types of string representations −
    The C-style character string ----> char greeting[6] = {'H', 'e', 'l', 'l', 'o', '\0'};

    The string class type introduced with Standard C++ ----> string str1 = "Hello";


*/

/* 
    Thus, if all unused pointers are given the null value and you avoid the use of a null pointer, you can avoid the accidental misuse of an uninitialized pointer. 
    Many times, uninitialized variables hold some junk values and it becomes difficult to debug the program.

    int *var  =  NULL; In case you are not gonna use the pointer

*/

/*

References are often confused with pointers but three major differences between references and pointers are −

    1)You cannot have NULL references. You must always be able to assume that a reference is connected to a legitimate piece of storage.

    2)Once a reference is initialized to an object, it cannot be changed to refer to another object. 
    Pointers can be pointed to another object at any time.

    3)A reference must be initialized when it is created. Pointers can be initialized at any time.

*/
// Struct & typedef

}

// int max(int a,int b){
//     int result;
//     if(a>b){
//         cout<<"a is bigger than b"<<endl;
//     }
//     else{
//         cout<<"b is bigger than a"<<endl;
//     }
//     return result;
// }