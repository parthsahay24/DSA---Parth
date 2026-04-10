/*Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:


5 5 5 5 5 5 5 5 5 
5 4 4 4 4 4 4 4 5 
5 4 3 3 3 3 3 4 5 
5 4 3 2 2 2 3 4 5 
5 4 3 2 1 2 3 4 5 
5 4 3 2 2 2 3 4 5 
5 4 3 3 3 3 3 4 5 
5 4 4 4 4 4 4 4 5 
5 5 5 5 5 5 5 5 5


Constraints:
1 <= n <= 100
*/

#include<iostream>
using namespace std;

void pattern(int n){
    //your code here
    //author 1: Parth
    for (int i=0;i<2*n-1;i++){//this loop for the 9 rows which we have-> 2*5-1=9
      for(int j=0;j<2*n-1;j++){//this loop for the 9 columns in each row -> eg:- at 5th row , column elements are-> 5 4 3 2 1 2 3 4 5
        int top_distance_of_presentElement=i;//explaination -> just like left distance
        int left_distance_of_presentElement = j;//to calculate distance from 0 to j (excluding jth element because we are calculating distance) , (j-0+1)-1 -> +1 because we are including 0th element. -1 because we are excluding jth element. 
        int right_distance_of_presentElement = 2*n-2-j;// (0) _ _ _ (j) _ _ _ _ _ _ _ (2n-2) since it is starting from 0, to calculate distance between j to 2n-2 = ( 2n-2-j +1)-1 .similarly as above , wrote this just to clarify.
        int bottom_distance_of_presentElement = 2*n-2-i;//similarly as distance of element from right

        int minimum_of_all_above = min(min(left_distance_of_presentElement,right_distance_of_presentElement),min(top_distance_of_presentElement,bottom_distance_of_presentElement));

        cout<< n - minimum_of_all_above << " ";
      }
      cout<<endl;
    }

}
int main(){
  int size=5;
  pattern(size);
  return 0;
}
