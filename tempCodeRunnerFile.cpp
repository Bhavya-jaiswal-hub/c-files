// #include<iostream>
#include<bits/stdc++.h>
// using library bits/stdc++.h --> this library containy all the library
using namespace std;//if you dont write  std before using the function then write this statement and you don't need to wrtie the std before the function
//  void printname( string name) {
//     cout << "Hey !"<< name;
//  }
//   int sum(int num1, int num2) 
//    {
//      int num;
//     num=num1+num2;
//      return num;
//    }
 
 int main(){

   // std::cout <<"Hey bhavya!" << "\n" ;
   // std::cout <<"Hey bhavya";
   // use << this arrow for print the output 
   // use >> this arrown for taking the input from the user
     
   //   cout <<"Hey bhavya!" << "\n" ;
   //   cout <<"Hey bhavya";
   //   cout <<"\n"; 

   //    int x,y;
   //    cin >> x >>y; 
   //    cout << "the value of x:" << "\n" <<  x <<  "\n" << " the value of y:" << "\n" << y; 
   //  string str;
   // //   cin << str;
   //   getline(cin,str);
   //    cout << str;
      // you know that  string is consider the letters are written together without space is called if you want to write the whole paragraph with space then you have to use the getline function

// char ch = 'Bhavya' ;
// cout << ch ;
// write a program that takes age as an input and tells if age is >= 18 than you are an adult if less than
//     you are not an adult
//    int age;
//    cin >> age;
//    if (age>=18)
//    {
//       cout << "you are an adult";
//    }
//    else
//    {
//       cout << "you are not an adult";
//    }
   // if else work similar to the c languge in the  cpp
   // if you use multiple if and if you use multiple else if statement then using multiple else if statement is the better choice
//    because it reduces the time complexity
// nested if else works similar to the c language in the c++
//  int day;
//    cin >> day;
//    switch(day) {
   
//     case 1:
//     cout << "Monday";
//     break;
//    case  2:
//     cout << "Tuesday";
//     break;
   
      
//     case 3 :  
//        cout << "wednesday";
//        break;
//     case 4:
// cout << "Thursday";
// break;
//    case  5:
//    cout << "Friday";
//    break;
//     case 6 :     
// cout << "Saturday";
// break;
//      case 7 : 
//     cout <<" sunday";

//       default: 
//        cout << "Invalid";

//  
// array in the c++ is same as the c language   
//  int arr[5];
//    cin >> arr[0] >> arr[1]>> arr[2] >> arr[3] >> arr[4] ; 
//         cout << arr[0] ;
         
//           for ( int  i = 0; i <=4; i++)
//           {
//             cout << arr[i] << "\n" ;
//           }
   //   string s = "Bhavya";
   //      int len = s.size();
   //       s [len-2] = 'r' ;
   //       cout << s ;
      //  string name ;
      //    cin >> name;
      //    printname(name);   /* This is parameterised function */ 
      // write a function which gives the sum of the two numbers
          int num1, num2;
          cin >> num1 >> num2;
         //  int res = sum(num1,num2);
           
         //   cout << res;
         // int minimum = min(num1,num2);  this min is the inbuild function in the c++ for giving the minumum of two numbers
         //  cout << minimum;
          int maximum = max(num1,num2) ;
         
         cout << maximum;
            



           
           



          

      return 0;
 }