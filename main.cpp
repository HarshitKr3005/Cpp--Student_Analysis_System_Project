#include<iostream>
#include<math.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

int i=0;
struct sinfo 
{
    char fname[50];
    char lname[50];
    int roll;
    float cgpa;
    int cid[10];
} st[55];
void add_student()
{
    cout<<"Add the students details\n";
    cout<<endl;
    cout<<"Enter the first name of student\n";
    cin>>st[i].fname;
    cout<<"Enter the last name of student\n";
    cin>>st[i].lname;
    cout<<"Enter the roll number\n";
    cin>>st[i].roll;
    cout<<"Enter the CGPA obtained\n";
    cin>>st[i].cgpa;
    cout<<"Enter the course ID of each course\n";
    for(int j=0;j<5;j++)
    {
        cin>>st[i].cid[j];
    }
    i=i+1;
}

void find_rl()
{
    int x;
    cout<<"Enter the Roll Number of the student\n";
    cin>>x;
    for (int j = 1; j <= i; j++) {
        if (x == st[i].roll) {
            cout<<"The Students Details are\n";
            cout<<"The First name is\n"<<st[i].fname;
            cout<<"The Last name is\n"<<st[i].lname;
            cout<<"The CGPA is\n"<<st[i].cgpa;
            cout<<"Enter the course ID of each course\n";
        }
        for (int j = 0; j < 5; j++) {
            cout<<"The course ID are %d\n"<<st[i].cid[j];
        }
        break;
    }
}

void find_fn()
{
    char a[50];
    cout<<"Enter the First Name of the student\n";
    cin>>a;
    int c = 0;
  
    for (int j = 1; j <= i; j++) {
        if (!strcmp(st[j].fname, a)) {
  
            cout<<"The Students Details are\n";
            cout<<"The First name is\n"<<st[i].fname;
            cout<<"The Last name is\n"<<st[i].lname;
            cout<<"The Roll Number is\n "<<st[i].roll;
            cout<<"The CGPA is\n"<<st[i].cgpa;
  
            for (int j = 0; j < 5; j++) 
            {
                cout<<"The course ID are %d\n"<<st[i].cid[j];
            }
            c = 1;
        }
        else
            cout<<"The First Name not Found\n";
    }
}

void find_c()
{
    int id;
    cout<<"Enter the course ID \n";
    cin>>id;
    int c = 0;
  
    for (int j = 1; j <= i; j++) {
        for (int d = 0; d < 5; d++) {
            if (id == st[j].cid[d]) {
  
                cout<<"The Students Details are\n";
                cout<<"The First name is %s\n"<<st[i].fname;
                cout<<"The Last name is %s\n"<<st[i].lname;
                cout<<"The Roll Number is %d\n "<<st[i].roll;
                cout<<"The CGPA is %f\n"<<st[i].cgpa;
  
                c = 1;
  
                break;
            }
            else
                cout<<"The First Name not Found\n";
        }
    }
}

void tot_s()
{
    cout<<"The total number of student is %d\n"<<i;
    cout<<" you can have a max of 50 students\n";
    if(i<50)
    {
        cout<<"you can have more students\n", (50 - i);
        
    }
}
  
void del_s()
{
    int a;
    cout<<"Enter the Roll Number for which you want to delete\n";
    cin>>a;
    for (int j = 1; j <= i; j++) {
        if (a == st[j].roll) {
            for (int k = j; k < 49; k++)
                st[k] = st[k + 1];
            i--;
        }
    }
    cout<<"The Roll Number is removed Successfully\n";
}
  
void up_s()
{
  
    cout<<"Enter the roll number to update the entry : ";
    long int x;
    cin>>x;
    for (int j = 0; j < i; j++) {
        if (st[j].roll == x) {
            cout<<"1. first name\n"
                   "2. last name\n"
                   "3. roll no.\n"
                   "4. CGPA\n"
                   "5. courses\n";
            int z;
            cin>>z;
            switch (z) {
            case 1:
                cout<<"Enter the new "
                       "first name : \n";
                cin>>st[j].fname;
                break;
            case 2:
                cout<<"Enter the new "
                       "last name : \n";
                cin>>st[j].lname;
                break;
            case 3:
                cout<<"Enter the new "
                       "roll numnber : \n";
                cin>>st[j].roll;
                break;
            case 4:
                cout<<"Enter the new CGPA : \n";
                cin>>st[j].cgpa;
                break;
            case 5:
                cout<<"Enter the new courses \n";
                cin>>st[j].cid[0]>>st[j].cid[1]>>st[j].cid[2]>>st[j].cid[3]>>st[j].cid[4];
                break;
            }
            cout<<"UPDATED SUCCESSFULLY.\n";
        }
    }
}
int main()
{
    int choice, count;
    while (i = 1) {
        cout<<"The Task that you "
               "want to perform\n";
        cout<<"1. Add the Student Details\n";
        cout<<"2. Find the Student "
               "Details by Roll Number\n";
        cout<<"3. Find the Student "
               "Details by First Name\n";
        cout<<"4. Find the Student "
               "Details by Course Id\n";
        cout<<"5. Find the Total number"
               " of Students\n";
        cout<<"6. Delete the Students Details"
               " by Roll Number\n";
        cout<<"7. Update the Students Details"
               " by Roll Number\n";
        cout<<"8. To Exit\n";
        cout<<"Enter your choice to "
               "find the task\n";
        cin>>choice;
        switch (choice) {
        case 1:
            add_student();
            break;
        case 2:
            find_rl();
            break;
        case 3:
            find_fn();
            break;
        case 4:
            find_c();
            break;
        case 5:
            tot_s();
            break;
        case 6:
            del_s();
            break;
        case 7:
            up_s();
            break;
        case 8:
            exit(0);
            break;
        }
    }
}
    




