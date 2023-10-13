#include<bits/stdc++.h>
#include<vector>
#include<string>
using namespace std;

static int count = 1;

class student{
    private:
        int A,B;
        string Full_Name;
    public:

        student(){
            this->A = 5;
            B = 7;
            cout<<"Object Created "<<count<<endl;
        }

        void getName(){
            // cin>>this->Full_Name;
            getline(cin, Full_Name);
        }

        void printName();

        void print(){
            cout<<this->B<<" "<<A<<endl;
        }

        ~student(){
            cout<<"Object removed"<<count<<endl;
        }
};

void student::printName(){
    cout<<endl<<this->Full_Name<<endl;
}

int main(){
    student s1;
    s1.print();
    s1.getName();
    s1.printName();
    student s2;
    s2.print();
    s2.getName();
    s2.printName();
    return 0;
}