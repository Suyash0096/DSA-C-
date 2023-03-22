#include <iostream>
using namespace std;
int main() {
  /*int age;
  // taking input from user
  cin >> age;
  // if conditional statement

  if (age >= 18) {
    cout << "Voter";
  }
  // else statement
  else {
    cout << "Not eligible";
  }
  */
 /* int marks;
  cin>>marks;
  if(marks>=90){
    cout<<"A";
    }
  else if(marks>=80){
    cout<<"B";
    }
  else if(marks>=60){
    cout<<"C";
    }
  else {
    cout<<"FAil";
  }*/
  //first example question
  /*int bronum;
  cin>>bronum;
  if(bronum==0){
    cout<<"Baat ban jaayegi";
  }
  else{
    cout<<"baat nahi banegi";
  }
  */
  /*for(int i=100;i>0;i=i/2){
    //table of 2
    cout<<i<<endl;
  }
  */
  //for(int i=0;(i>=0 && i<=10);i=i+1){
   // cout<<i<<endl;
  //}
 // for(int i=0;i<5;i++){
   // cout<<i<<endl;
  //}
 /* int n;
  if(cout<<"y"){
    cout<<"x";
  }*/
  //pattern 
  //solid rectangle

  //outer loop(row observation)
  /* for(int row=0;row<3;row++){
     //inner loop (column observation)
     for(int col=0;col<5;col++){
       cout<<"*  ";
       
     }
     cout<<endl;
   }
  */
  // Square pattern
  /*int n;
  cin>>n;
  for(int row=0;row<n;row++){
     //inner loop (column observation)
     for(int col=0;col<n;col++){
       cout<<"*  ";
       
     }
     cout<<endl;
   }*/
  
 /* for(int i=0;i<3;i++){
    
      //first row or last row->5 stars
      if(i == 0 || i==2){
        for(int j=0;j<5;j++){}
        cout<<"*  ";
        }
      }
       else {
        cout<<"*";
        for(int k=0;k<3;k++){
          cout<<" ";
        }
        cout<<endl;
      }*/
  // half pyramid
  // n=n+1 star are going to be printed 
  //int n;
  //cin>>n;
  //for(int row=0;row<n;row++){
    //for(int col=0;col<row+1;col++){
      //cout<<"*";
      
    //}cout<<endl;
  //}
  // inverted half pyramid
 /* int n;
  cin>>n;
  //n=n-row
  for(int row=0;row<n;row++){
    for(int col=0;col<n-row;col++){
      cout<<"*";
      
    }cout<<endl;
  }*/
  //numeric half pyramid
   int n;
  cin>>n;
 
  for(int row=0;row<n;row++){
    for(int col=0;col<row+1;col++){
      cout<<col+1;
      
    }cout<<endl;
  }
  
          
  
    
  

  return 0;
    
}
