#include <iostream>
#include <string>
#include <stack>
using namespace std;


void display_stack_elements(stack<int>my_stack){

    while (!my_stack.empty())
    {
        cout<<my_stack.top()<<endl;
        my_stack.pop();
    }
    
};

void display_stack_string_elements(stack<string>my_stack){
    while (!my_stack.empty())
    {
        cout<<my_stack.top()<<endl;
        my_stack.pop();
    }
    
};



int main(){

    stack<int>new_stack;
    new_stack.push(13);
    new_stack.push(12);
    new_stack.push(14);
    new_stack.push(2);

    display_stack_elements(new_stack);

    stack<string>stack_strings;
    stack_strings.push("Hello World");
    stack_strings.push("Good Morning");
    stack_strings.push("Tom");
    stack_strings.push("Alex");

    display_stack_string_elements(stack_strings);

    return 0;
}