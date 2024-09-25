#include <iostream>
#include <string>
#include <queue>

using namespace std;


void print_queue_elements(queue<int>q){

    while (!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
    
};

int size_of_queue(queue<int>q){
    return q.size();
};


int main(){

    queue<int>my_queue;
    my_queue.push(6);
    my_queue.push(1);
    my_queue.push(4);

    print_queue_elements(my_queue);

    int size = size_of_queue(my_queue);
    cout<<"Size: "<<size<<endl;

    return 0;
}