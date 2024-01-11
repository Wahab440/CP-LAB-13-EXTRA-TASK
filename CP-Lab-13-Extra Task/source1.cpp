#include <iostream>
#include <string>
using namespace std;
struct Product {
    string name;
    double price;
    int quantity;
};
int main() {
    Product product1; 

    cout << "Enter product name: ";
    getline(cin, product1.name);

    cout << "Enter product price: RS.";
    cin >> product1.price;

    cout << "Enter quantity in stock: ";
    cin >> product1.quantity;
    cin.ignore();
    cout << "\nProduct Information:" << endl;
    cout << "Name: " << product1.name << endl;
    cout << "Price: RS." << product1.price << endl;
    cout << "Quantity in stock: " << product1.quantity << endl;

    return 0;
}



