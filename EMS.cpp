#include <bits/stdc++.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
using namespace std;

struct emp
{
    string name, id, address;
    int contact, salary;
};

emp e[1000];   // array to store employee data
int total = 0; // tells total no. of employee

void enterData()
{
    int choice;
    cout << "\nHow many employee data do you want to enter?" << endl;
    cin >> choice;
    for (int i = total; i < total + choice; i++)
    {
        cout << "Enter data of Employee " << i + 1 << endl;
        cout << "Employee Name:-   ";
        cin >> e[i].name;
        cout << "ID:-            ";
        cin >> e[i].id;
        cout << "Address:-       ";
        cin >> e[i].address;
        cout << "Contact:-       ";
        cin >> e[i].contact;
        cout << "Salary:-        ";
        cin >> e[i].salary;
    }
    total += choice;
}

void show()
{
    if (total != 0)
    {
        for (int i = 0; i < total; i++)
        {
            cout << "Data of employee " << i + 1 << endl;
            cout << "Employee Name:-      " << e[i].name << endl;
            cout << "ID:-                 " << e[i].id << endl;
            cout << "Address:-            " << e[i].address << endl;
            cout << "Salary:-             " << e[i].salary << endl;
            cout << "Contact:-            " << e[i].contact << endl;
        }
    }
    else
        cout << "\aYour record is empty!!!" << endl;
}

void search()
{
    if (total != 0)
    {
        string id;
        cout << "Enter ID of required data:- ";
        cin >> id;
        for (int i = 0; i < total; i++)
        {
            if (id == e[i].id)
            {
                cout << "Data of employee " << i + 1 << endl;
                cout << "Employee Name:-      " << e[i].name << endl;
                cout << "ID:-                 " << e[i].id << endl;
                cout << "Address:-            " << e[i].address << endl;
                cout << "Salary:-             " << e[i].salary << endl;
                cout << "Contact:-            " << e[i].contact << endl;
                break;
            }
            if (i == total - 1)
                cout << "No such record exists in the system" << endl;
        }
    }
    else
        cout << "\aYour record is empty!!!" << endl;
}

void update()
{
    if (total != 0)
    {
        string id;
        cout << "Enter the ID to be updated:- ";
        cin >> id;
        for (int i = 0; i < total; i++)
        {
            if (id == e[i].id)
            {
                cout << "Previous data" << endl;
                cout << "Data of employee " << i + 1 << endl;
                cout << "Employee Name:-      " << e[i].name << endl;
                cout << "ID:-                 " << e[i].id << endl;
                cout << "Address:-            " << e[i].address << endl;
                cout << "Salary:-             " << e[i].salary << endl;
                cout << "Contact:-            " << e[i].contact << endl;

                cout << "\nEnter new data" << endl;
                cout << "Enter data of Employee " << i + 1 << endl;
                cout << "Employee Name:-   ";
                cin >> e[i].name;
                cout << "ID:-            ";
                cin >> e[i].id;
                cout << "Address:-       ";
                cin >> e[i].address;
                cout << "Contact:-       ";
                cin >> e[i].contact;
                cout << "Salary:-        ";
                cin >> e[i].salary;
                break;
            }
            if (i == total - 1)
                cout << "No such record exists in the system" << endl;
        }
    }
    else
        cout << "\aYour record is empty!!!" << endl;
}

void deleteData()
{
    if (total != 0)
    {
        char user;
        cout << "Press 1 to delete Full record" << endl;
        cout << "Press 2 to delete Specific record" << endl;
        user = getch();
        if (user == '1')
        {
            total = 0;
            cout << "All records are deleted...!!!" << endl;
        }
        else if (user == '2')
        {
            string id;
            cout << "Enter the ID to be deleted:- ";
            cin >> id;
            for (int i = 0; i < total; i++)
            {
                if (id == e[i].id)
                {
                    for (int j = i; j < total; j++)
                    {
                        e[j].name = e[j + 1].name;
                        e[j].id = e[j + 1].id;
                        e[j].address = e[j + 1].address;
                        e[j].contact = e[j + 1].contact;
                        e[j].salary = e[j + 1].salary;
                        total--;
                        cout << "Your required data is deleted" << endl;
                        break;
                    }
                }
                if (i == total - 1)
                    cout << "No such record exists in the system" << endl;
            }
        }
    }
    else
        cout << "\aYour record is empty!!!" << endl;
}

int main()
{
    cout << "\n\n\t\t\t\t EMPLOYEE MANAGEMENT SYSTEM \t\t\t\t" << endl;
    cout << "\n\n\t\t Sign Up" << endl;
    string username, password;
    cout << "\n\t\t Enter Username:     ";
    getline(cin, username);
    cout << "\n\t\t Enter Password:     ";
    cin >> password;
    cout << "\n\t\t Your ID is being created please wait";
    for (int i = 0; i < 3; i++)
    {
        cout << ".";
        Sleep(1000);
    }
    cout << "\n\t\t Your ID is created successfully" << endl;
    system("CLS");

start:
    system("CLS");
    cout << "\n\n\t\t\t\t Employee Management System \t\t\t\t" << endl;
    cout << "\n\n\t\t Login" << endl;
    string username1, password1;
    cout << "Username:  ";
    cin >> username1;
    cout << "Password:  ";
    cin >> password1;
    if (username1 == username && password1 == password)
    {
        system("CLS");
        char user;
        while (1)
        {
            cout << "\n\nPress 1 to enter data" << endl;
            cout << "Press 2 to show data" << endl;
            cout << "Press 3 to search data" << endl;
            cout << "Press 4 to update data" << endl;
            cout << "Press 5 to delete data" << endl;
            cout << "Press 6 to logout data" << endl;
            cout << "Press 7 to exit data" << endl;
            user = getch();
            system("CLS");
            switch (user)
            {
            case '1':
                enterData();
                break;
            case '2':
                show();
                break;
            case '3':
                search();
                break;
            case '4':
                update();
                break;
            case '5':
                deleteData();
                break;
            case '6':
                goto start;
                break;
            case '7':
                cout << "You have logged out!!! Please Login to continue...";
            default:
                cout << "\aInvalid Input" << endl;
                break;
            }
        }
    }
    else if (username1 != username)
    {
        cout << "Your Username is invalid" << endl;
        Sleep(1000);
        goto start;
    }
    else if (password1 != password)
    {
        cout << "Your Password is invalid" << endl;
        Sleep(1000);
        goto start;
    }
    return 0;
}