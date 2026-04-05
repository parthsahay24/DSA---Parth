/*Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:



*        *
**      **
***    ***
****  ****
**********
****  ****
***    ***
**      **
*        *


Print the pattern in the function given to you. 

just a practice question for brushing up your skills and reasoning abilities. */


//Author: Lohitaksh Sinha


#include<iostream>
using namespace std;

void lohitaksh(int n){
  
  // main loop

  for(int i =1; i<=n; i++){
  
    // first part

    for(int j=1; j<=i; j++){
      cout<<"*";
    }

    // second part

    for(int k=2*(n-i); k>0; k--){
      cout<<" ";
    }

    // third part

    for(int l=1; l<=i; l++){
      cout<<"*";

    }

    cout<<endl;
    
  }
    
  //  Decreasing part
  
  // main loop

  for(int i=n-1; i>0; i--){

    for(int j=i; j>0; j--){
      cout<<"*";
    }

    for(int k=0; k<2*(n-i); k++){
      cout<<" ";
    }

    for(int l=i; l>0; l--){
      cout<<"*";
    }
    cout<<endl;
  }
  
}

int main(){
  int size;
  cout<<"Enter the size of pattern"<<endl;
  cin>>size;
  lohitaksh(size);
  Parth(size);
  return 0;
}

//Parth's code

void Parth(int n){

  for (int i = 0; i < n; i++){
    for (int j = 0; j <= i; j++){
      cout << "*";
    }
    for (int j = 0; j < 2 * (n - i - 1); j++){
      cout << " ";
    }
    for (int j = 0; j <= i; j++){
      cout << "*";
    }
    cout << endl;
  }
  for (int i = 0; i < n - 1; i++){

    for (int j = 0; j < n - i - 1; j++){
      cout << "*";
    }
    for (int j = 0; j <= 2 * (i) + 1; j++){
      cout << " ";
    }

    for (int j = 0; j < n - i - 1; j++){
      cout << "*";
    }
    cout << endl;
  }
}

//headers already added

