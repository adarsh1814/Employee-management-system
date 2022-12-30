#include <iostream>
#include <conio.h>
#include <windows.h> //for sleep function
#include<unistd.h>
using namespace std;

struct emp
{
    string id, name, address;

    int empCont, salary;
};
int total = 0;

emp arr[200];

void empData()
{
    int choice = 0;

    cout << "How many employees data do you want to store ? : " << endl;

    cin >> choice;

    for (int i = total; i < total + choice; i++)
    {
        cout << "Enter the data of employee : " << i + 1 << endl;
        cout << "Enter Employee Name : ";
        cin >> arr[i].name;

        cout << "Enter Employee Id : ";
        cin >> arr[i].id;

        cout << "Enter Employee Address : ";
        cin >> arr[i].address;

        cout << "Enter Employee Contact Number : ";
        cin >> arr[i].empCont;

        cout << "Enter Employee Salary : ";
        cin >> arr[i].salary;
    }
    total = total + choice;
    system("CLS");
}

void showData()
{
    if (total != 0)
    {
        for (int i = 0; i < total; i++)
        {
        	cout<<"Showing Employee Data : ";
        	
            cout << "\n\nData of Employee : " << i + 1 << endl;
            
            cout << "Employee Id : " << arr[i].id << endl;

            cout << "Employee Name : " << arr[i].name << endl;

            cout << "Employee Address : " << arr[i].address << endl;

            cout << "Employee Contact Number: " << arr[i].empCont << endl;

            cout << "Employee Salary : " << arr[i].salary << endl;
        }
    }
    else
    {
        cout << "Your record is empty !";
    }
}
void searchData()
{
    if (total != 0)
    {
        string id;
        cout << "Enter Employee Id which you want to search : ";
        cin >> id;

        for (int i = 0; i < total; i++)
        {
            if (arr[i].id == id)
            {
                cout << "Data of Employee : " << i + 1 << endl;

                cout << "Employee Id : " << arr[i].id << endl;

                cout << "Employee Name : " << arr[i].name << endl;

                cout << "Employee Address : " << arr[i].address << endl;

                cout << "Employee Contact Number: " << arr[i].empCont << endl;

                cout << "Employee Salary : " << arr[i].salary << endl;

                break;
            }
            if (i == total - 1)
            {
                cout << "No such record found !";
            }
        }
    }
    else
    {
        cout << "Your record is empty !"<<endl;
    }
}

void updateData()
{
    if (total != 0)
    {
        string id;

        cout << "Enter id of employee which you want to update" << endl;

        cin >> id;

        for (int i = 0; i < total; i++)
        {
            if (id == arr[i].id)
            {
                cout << " Old data of Employee : " << i + 1 << endl;

                cout << "Employee Name : " << arr[i].name << endl;

                cout << "Employee Id : " << arr[i].id << endl;

                cout << "Employee Address : " << arr[i].address << endl;

                cout << "Employee Contact Number: " << arr[i].empCont << endl;

                cout << "Employee Salary : " << arr[i].salary << endl;

                cout << "\nEnter new data of employee : " << endl;

                cout << "Enter employee name: ";

                cin >> arr[i].name;

                cout << "Enter Employee id: ";

                cin >> arr[i].id;

                cout << "Enter Employee address: ";

                cin >> arr[i].address;

                cout << "Enter Employee contact: ";

                cin >> arr[i].empCont;

                cout << "Enter Employee salary: ";

                cin >> arr[i].salary;

                break;
            }
            if (i == total - 1)
            {
                cout << "No such record found !";
            }
            else
            {
                cout << "Your record is empty";
            }
        }
    }
}

void deleteData()
{

    if (total != 0)
    {
        int press;

        cout << "Press 1 to delete specific record " << endl;

        cout << "Press 2 to delete all record" << endl;

        cin >> press;

        if (press == 1)
        {
            string id;

            cout << "Enter id of employee which you want to delete :" << endl;

            cin >> id;

            for (int i = 0; i < total; i++)
            {
                if (arr[i].id == id)
                {

                    arr[i].name = arr[i + 1].name;

                    arr[i].id = arr[i + 1].id;

                    arr[i].address = arr[i + 1].address;

                    arr[i].empCont = arr[i + 1].empCont;

                    arr[i].salary = arr[i + 1].salary;

                    total--;

                    cout << "Your required record is deleted" << endl;

                    break;
                }
                if (i == total - 1)
                {
                    cout << "No such record found !!";
                }

                else if (press == 2)
                {
                    total = 0;
                    cout << "All record is deleted" << endl;
                }

                else
                {
                    cout << "Invalid Input !!" << endl;
                }
            }
        }
        else
        {
            cout << "Your record is empty " << endl;
        }
    }
}

main()
{
    // welcome section
    cout << "\t\t------------------------------------";
    cout << "\n\t\t| ***Employee Management System*** |";
    cout << "\n\t\t------------------------------------";

    cout << "\n\n\t**SIGN UP** :" << endl;

    // sign up page
    string username, password;

    cout << "\n\t\tCreate New Username : ";
    cin >> username;

    cout << "\n\t\tCreate New Password :";
    cin >> password;

    cout << "\n\t\tYour id is creating please wait..";

    for (int i = 0; i < 4; i++)
    {
        cout << ".";

        Sleep(2000);

    }
    cout << "\n\t\tYour Id created successfully !!";
    Sleep(2000);

// login page
start:

    system("CLS");

    string olduser, oldpass;
    cout << "\n";
    cout << "\t\t------------------------------------";
    cout << "\n\t\t| ***Employee Management System*** |";
    cout << "\n\t\t------------------------------------";
    cout << "\n\n\t** LOGIN :** :" << endl;


    cout << "\n\t\tEnter Your Username : ";

    cin >> olduser;

    cout << "\n\t\tEnter Your Password : ";

    cin >> oldpass;

    // checking wheather credential is true or not

    if (olduser == username && oldpass == password)
    {
        system("CLS");
        char ch;
        while (1)
        {
            cout << "\n\n\t\t------------------------------------";
            cout << "\n\t\t| ***Employee Management System*** |";
            cout << "\n\t\t------------------------------------";
            cout << "\n\nPress [1] to enter details :" << endl;

            cout << "Press [2] to show details :" << endl;

            cout << "Press [3] to search details :" << endl;

            cout << "Press [4] to update details :" << endl;

            cout << "Press [5] to delete details :" << endl;

            cout << "Press [6] to logout details :" << endl;

            cout << "Press [7] to exit details : " << endl;

            ch = getch();

            system("CLS");
             //calling functions :
            switch (ch)
            {
            case '1':

                empData();

                break;

            case '2':

                showData();

                break;

            case '3':

                searchData();

                break;

            case '4':

                updateData();

                break;
            case '5':

                deleteData();

                break;

            case '6':

                goto start;

                break;

            case '7':

                exit(0);

            default:

                cout << "\aInvalid Input !!";

                break;
            }
        }
    }
    else if (olduser != username)
    {
        cout << "\t\t\aInvalid Username ,Please try again !! ";

        Sleep(3000);

        goto start;
    }

    else if (oldpass != password)
    {
        cout << "Invalid Password ,Please try again !! " << endl;
        
        Sleep(3000);

        goto start;
    }

    else
    {
        cout << "\t\t\aInvalid Username and Password";

        Sleep(3000);

        goto start;
    }

    
}
