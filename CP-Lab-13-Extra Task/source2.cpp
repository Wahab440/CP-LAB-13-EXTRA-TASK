#include <iostream>
#include <string>
using namespace std;

struct Customer {
    string name;
    string address;
    string phoneNumber;
};

int main() {
    Customer customer1; 


    cout << "Enter customer name: ";
    getline(cin, customer1.name);

    cout << "Enter customer address: ";
    getline(cin, customer1.address);

    cout << "Enter customer phone number: ";
    getline(cin, customer1.phoneNumber);

    string searchName;
    cout << "\nEnter customer name to display information: ";
    getline(cin, searchName);


    if (searchName == customer1.name) {
        cout << "\nCustomer Information:" << endl;
        cout << "Name: " << customer1.name << endl;
        cout << "Address: " << customer1.address << endl;
        cout << "Phone Number: " << customer1.phoneNumber << endl;
    }
    else {
        cout << "Customer not found." << endl;
    }

    return 0;
}


