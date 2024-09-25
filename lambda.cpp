#include <vector>
#include <iostream>
#include <string>
#include <functional>
#include <map>

using namespace std;

void printArr(vector<int>&nums){
    for(const auto n :nums){
        cout<<n<<" ";
    }
}

double addition(double a, double b){
    return a+b;
}

double substitution(double a, double b){
    return a-b;
}

int main(){
    
   map<string, function<double(double, double)>>calculator;

   calculator["addition"] = addition;
   calculator["substitution"] = substitution;

    calculator["multiplication"] = [](double x, double y) -> double {
        return x * y;
   };

   double res = calculator["addition"](1, 2);
   double mul = calculator["multiplication"](4, 5);

   cout<<"Addition: "<<res<<" "<<"Multiplication: "<<mul<<endl;


}

