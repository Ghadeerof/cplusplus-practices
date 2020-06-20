#include <iostream>
#include <cstring>

using namespace std;

const int n = 4; // students
const int m = 5; // grades

struct Student{
    int id;
    char fname[50];
    char lname[50];
    float grades[m];
    float avg;
};

void read(Student &);
void readAll(Student []);
void printStudents(Student []);
void printTopThree(Student []);
void printName(Student []);
void sort(Student []);

int main() {
    Student students[n];
    
    readAll(students);
    cout<<"*******************"<<endl;
    printStudents(students);
    printTopThree(students);
    cout<<"*******************"<<endl;
    printName(students);
    return 0;
}

void read(Student &s){
    float sum = 0;
    
    cout<<"Enter ID: "; cin>>s.id;
    cout<<"Enter First Name: ";cin>>s.fname;
    cout<<"Enter Last Name: ";cin>>s.lname;
    cout<<"Enter your grades"<<endl;
    for(int i = 0; i < m; i++){
        cout<<"Enter #"<<i+1<<"grade: ";
        cin>>s.grades[i];
        sum += s.grades[i];
    }
    s.avg = sum/m;
}

void readAll(Student s[]){
    cout<<"Enter Students Info...\n";
    for(int i = 0 ; i < n; i++)
        read(s[i]);
}

void printStudents(Student s[]){
    cout<<"*********^************\n";
    for(int i = 0 ; i < n; i++){
        cout<<"ID: "<<s[i].id<<endl;
        cout<<"Fist Name: "<<s[i].fname<<endl;
        cout<<"Last Name: "<<s[i].lname<<endl;
        cout<<"All Grades..."<<endl;
        
        for(int j = 0 ; j < m; j++)
            cout<<s[i].grades[j]<<" ";
        
        cout<<"\nAverage: "<<s[i].avg;
        cout<<"\n*********^************\n";
    }
}

void printTopThree(Student s[]){
    sort(s);
    int top = 3;
    for(int j = 0; j < top; j++){
        cout<<"Student #"<<s[j].id<<" , First Name : "<<s[j].fname<<endl;
    }
}

void printName(Student s[]){
    for(int i = 0; i < n; i++){
        if(strncmp(s[i].fname,"b",1) == 0){
            cout<<"First Name: "<<s[i].fname
            <<", Average : "<<s[i].avg<<endl;
        }        
    }
}

void sort(Student s[]){
    Student hold;
    for(int pass = 1; pass <= n; pass++){
        for(int i = 0; i < n - pass; i++){
            if(s[i].avg < s[i+1].avg){
                hold = s[i];
                s[i] = s[i+1];
                s[i+1] = hold;
            }
        } 
    }        
}
