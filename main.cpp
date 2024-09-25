#include <stack>
#include <iostream>
#include <string>
#include <queue>
#include <vector>

using namespace std;

struct  Student
{
    string name;
    int age;
};


void addStudent(Student &s, vector<Student>&vec){
    vec.push_back(s);
    cout<<"Student: "<<s.name<<" added succesfully"<<endl;
}

void printStudent(Student &s){
    cout<<"Student name: "<<s.name<<" Age: "<<s.age<<endl;
}


void printStudents(vector<Student>&students){
    for (auto s: students){
        printStudent(s);
    }
}

void findStudent(string name, vector<Student>&students){
    for(auto s: students){
        if(s.name == name){
            printStudent(s);
        }else{
            cout<<"Student is not found!"<<endl;
        }
    }
}



void removeStudentByName(string name, vector<Student> &vec){
    for(auto s : vec){
        if(s.name == name){
            cout<<"Student removed successfully"<<endl;
        }
    }
}




int  main(){

    vector<Student>students;

    Student s1{"Alex", 12};
    Student s2{"Rustam", 16};
    Student s3{"Smith", 15};


    addStudent(s1,students);
    addStudent(s2,students);
    addStudent(s3,students);

    printStudents(students);


    return 0;

}