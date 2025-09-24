#include <iostream>
using namespace std;

int main()
{

    // 1

    // 1 2 3 4
    // 1 2 3 4
    // 1 2 3 4
    // 1 2 3 4
    // int n;
    // cout << "Enter the number";
    // cin >> n;
    // int i = 1;
    // while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= n)
    //     { 
    //         cout << i;
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

     //2
    // 3 2 1  
    // 3 2 1   
    // 3 2 1  
    // 3 2 1  
    // int n;
    // cout << "Enter the number";
    // cin >> n;
    // int i = 1;
    // while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= n)
    //     { 
    //         cout << j;
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    //3
    // 1 2 3
    // 4 5 6 
    // 7 8 9

    // int n;
    // cout << "Enter the number";
    // cin >> n;
    // int i = 1;
    // int count=1;
    // while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= n)
    // { 
    //         cout << count;
    //         count++;
    //         j++;
    // }
    // cout << endl;
    // i++;
    // }
    
    //4
    //* 
    //* *
    //* * * 
    //* * * *
    
    // int n;
    // cout<<"Enter number : ";
    // cin>>n;
    // int i=1;
    // while(i<=n){
    //     int j=1;
        // row will continue equals to the cols or i
    //     while(j<=i){
    //     cout<<"*";
    //     j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    //5
    // 1
    // 2 3
    // 4 5 6 
    // 7 8 9 10

    // int n;
    // cout<<"Enter a number : ";
    // cin>>n;

    // int count=1;
    // int i=1;
    // while(i<=n){

    //     int j=1;
    //     while(j<=i){
    //         cout<<count;
    //         count++;
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    //6
    // 1
    // 2 3
    // 3 4 5  
    // 4 5 6 7 
    // 5 6 7 8 9
    // 6 7 8 9 10 11

    // method 1
    // int n;
    // cout<<"Enter a number : ";
    // cin>>n;
    // int count=1;
    // int i=1;
    // while(i<=n){

    //     int j=1;
    //     while(j<=i){
    //         cout<<count;
    //         count++;
    //         j++;
    //     }
    //     count=count-i+1;
    //     cout<<endl;
    //     i++;
    // }

    // method 2
    //   int n;
    // cout<<"Enter a number : ";
    // cin>>n;
    // int i=1;
    // while(i<=n){

    //     int j=1;
    //     int count =i;
    //     while(j<=i){
    //         cout<<count;
    //         count++;
    //         j++;
    //     }
    //     // count=count-i+1;
    //     cout<<endl;
    //     i++;
    // }

    // 7
    // 1
    // 2 1
    // 3 2 1
    // 4 3 2 1 

    // int n;
    // cout<<"Enter number : ";
    // cin>>n;

    // int i=1;
    // while(i<=n){
    //     int count =i;
    //     int j=1;
    //     while(j<=i){
    //         cout<<count<<" ";
    //         count--;
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    //8
    // A A A 
    // B B B
    // C C C
    // D D D
     
    // method 1
    // int n ;
    // cout<<"Enter number : ";
    // cin>>n;
    // int i=1;
    // while(i<=n){
    //     char ch = 'A'+i -1;
    //     int j=1;
    //     while(j<=n){
    //         cout<<ch;
    //         j++;
    //     }
    //     // ch++;
    //     cout<<endl;
    //     i++;
    // }

    // methhod 2
    // int n ;
    // cout<<"Enter number : ";
    // cin>>n;
    // char ch='A';
    // int i=1;
    // while(i<=n){
    //     int j=1;
    //     while(j<=n){
    //         cout<<ch;
    //         j++;
    //     }
    //     ch++;
    //     cout<<endl;
    //     i++;
    // }

    // 9
    //  A B C
    //  A B C
    //  A B C
 
    // method 1
    // int n ;
    // cout<<"Enter number : ";
    // cin>>n;
    // int i=1;
    // while(i<=n){
    //     // dont set it globally instead set it inside of loop 
    //     char ch='A';
    //     int j=1;
    //     while(j<=n){
    //         cout<<ch;
    //         ch++;
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    // method 2
    // int n ;
    // cout<<"Enter number : ";
    // cin>>n;
    // int i=1;
    // while(i<=n){
    //     int j=1;
    //     while(j<=n){
    //         char ch = 'A'+j -1;
    //         cout<<ch;
    //         j++;
    //     }
    //     // ch++;
    //     cout<<endl;
    //     i++;
    // }

    return 0;
}