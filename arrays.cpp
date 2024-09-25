#include <iostream>
#include <string>

using namespace std;


struct Student{
    string name;
};


int max_element(int arr[], int size){
   int max = arr[0];


    for(int i=0;i<size;i++){
      if(arr[i]>max){
        max = arr[i];
      }
   }

   return max;
};

int min_element(int arr[], int size){
   int min = arr[0];
   
   for(int i=0;i<=size;i++){
     if (arr[i] < min){
        min = arr[i];
     };
   };
   
   return min;
};


int target_element(int arr[], int size, int target){

    for(int i=0;i<=size;i++){
        if(arr[i] == target){
            return i;
        }
    }
    return -1;
};

int main(){
  
   int nums[] = {1, 2, 3, 4, 5};
   
   cout<<target_element(nums, 5, 3)<<endl;
   

   for(int i=0;i<=4;i++){
      cout<<"Index: "<<i<<" Number: "<<nums[i]<<endl;
   };

 

   cout<<"Maximum: "<<max_element(nums, 5)<<endl;
   cout<<"Minimum: "<<min_element(nums, 5)<<endl;
   

  


   Student s1{"Alex"};
   Student s2{"John"};
   Student s3{"Tom"};
   Student s4{"Rustam"};


   Student students[4] = {s1, s2, s3, s4};


   for (Student s : students){
    cout<<s.name<<endl;
   };

   
}