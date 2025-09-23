// #include <iostream>
// using namespace std;

// int main(){
/// 1
// {
//     int a, b;
//     cout << "Enter the value of a :" << endl;
//     cin >> a;
//     cout << "Enter the value of b :" << endl;
//     cin >> b;
//     if(a>b){
//         cout<<"a is greater than b";
//     }else{
//         cout<<"b is greater than a";
//     }


//2
// int n ;
// cout<<"Enter a number"<<endl;
// cin>>n;
// if(n>0){
// cout<<"Number is +ev";
// }else if(n<0){
// cout<<"Number is -ev";
// }else{
// cout<<"Number is 0";
// }

//3
// here first if is not dependent of the other if 
// int a=9;
// if(a==9){
// cout<<"Niney";
// }
// if(a>0){
//     cout<<"positive";
// }
// else{
//     cout<<"Negative";
// }

//4 if one condition part is true all the remaining will be skipped
// int a = 9;

// if (a == 9) {
//     cout << "Niney";
// } 
// else if (a > 0) {
//     cout << "positive";
// } 
// else {
//     cout << "Negative";
// }

//5 
// int a =2;
// int b = a+1;
// if((a=3)==b){
//     cout<<a;
// }else{
//     cout<<a+1;
// }


//6
// char ch;
// cout<<"Enter a character : ";
// cin>>ch;

// if(ch>='a' && ch<='z'){
//     cout<<"Lower case";
// }else if(ch>='A' && ch<='Z'){
//     cout<<"Upper case";
// }else if(ch>='0' && ch<='9'){
//     cout<<"Numeric";
// }

// return 0;

// }


#include<iostream>
using namespace std;
#include <iomanip>  // ✅ Needed for setprecision

int main(){

// 7
// int i=1;
// int sum = 0;
// int num;
// cout<<"Enter the number for sum calculation :"<<endl;
// cin>>num;

// while(i<=num){
//     sum = sum+i;
//     i++;
// }
// cout<<"sum :"<<sum;


// 8 sum of all even numbers
// int num;
// cout<<"Enter the number :"<<endl;
// cin>>num;

// int sum = 0;
// int i=2;
// while(i<=num){
//         sum = sum+i;
//         i +=2;
// }
// cout<<"sum :"<<sum;


// 9 f to c table
int sv,ev,step;
cout<<"Enter start value :"<<endl;
cin>>sv;
cout<<"Enter end value :"<<endl;
cin>>ev;
cout<<"Enter step value :"<<endl;
cin>>step;
int f =sv;
double c;
cout<<"Fahrenheit\tCelcuis"<<endl;
while(f<=ev){
 c=5.0/9.0*(f-32);
 cout<<f<<"\t"<<fixed<<setprecision(2)<<c<<endl;
 f=f+step;
}
    return 0;


}