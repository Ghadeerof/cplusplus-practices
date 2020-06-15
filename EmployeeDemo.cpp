#include <iostream>
#include <cstring>

using namespace std;

const int n = 3;
int j = 0;

struct Birthdate {
    int d, m, y;
};

struct Employee{
    int id;
    char fname[50];
    char lname[50];
    Birthdate date;
    double salary;
};

void readEmp(Employee &);
void readAllEmp(Employee []);
void sort(Employee []);
void print(Employee []);
void findYear(Employee [],int,int []);
char *findName(Employee []);

int main() {
    Employee employees[n];
    
    readAllEmp(employees);
    
    sort(employees);
    
    print(employees);
    
    int year;
    cout<<"Enter year: "; cin>>year;
    int res[n];
    
    findYear(employees,year,res);
    
    cout<<"Number of employees : ";
    for(int k =0; k < j; k++)
        cout<<res[k]<<" ";

    cout<<endl;
    
    cout<<"Employee's name has minimum salary is : "<<findName(employees)<<endl;

    return 0;
}

void readEmp(Employee &e){
    cout<<"Enter ID: "; cin>>e.id;
    cout<<"Enter FName: "; cin>>e.fname;
    cout<<"Enter LName: "; cin>>e.lname;
    cout<<"Enter Salary: "; cin>>e.salary;
    cout<<"Enter date (d,m,y): ";
    cin>>e.date.d>>e.date.m>>e.date.y;
}

void readAllEmp(Employee e[]){
    for(int i = 0; i < n; i++){
        cout<<"#Emp_"<<i+1<<endl;
        readEmp(e[i]);
    }
}

void print(Employee e[]) {
    for(int i = 0; i < n; i++){
        cout<<"#"<<i+1<<endl;
        cout<<"ID: "<<e[i].id<<endl;
        cout<<"FName: "<<e[i].fname<<endl;
        cout<<"LName: "<<e[i].lname<<endl;
        cout<<"Birth date: "<<e[i].date.d<<"/"
            <<e[i].date.m<<"/"<<e[i].date.y<<endl;
        cout<<"Salary: "<<e[i].salary<<endl;
    }
}

void sort(Employee e[]){
    Employee hold;
    
    for(int pass = 1; pass <= n; pass++){
    
        for(int i = 0; i < n - pass; i++){
            if(e[i].salary < e[i+1].salary){
                hold = e[i];
                e[i] = e[i+1];
                e[i+1] = hold;
            }
        }
    }
}

void findYear(Employee e[], int y, int res[]){
    for(int i = 0; i < n; i++)
        if(e[i].date.y == y){
            res[j] = e[i].id;
            j++;
        }
}

char* findName(Employee e[]){
    double min = e[0].salary;
    char name[50];
    strcpy(name,e[0].fname);

    for(int i = 1; i < n ; i++)
        if(e[i].salary < min){
            min = e[i].salary;
            strcpy(name,e[i].fname);
        }
    
    char* result = new char[50];
    strcpy(result,name);
    
    return result;
}
