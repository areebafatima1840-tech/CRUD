#include <iostream>
using namespace std;

string customer[50];
int total = 0;
// Create
void addCustomer() {
    cout << "Enter name: ";
    cin >> customer[total];
    total++;
    cout << "Added!\n";
}

// Read
void viewCustomers() {
    cout << "\nCustomer List:\n";
    for(int i = 0; i < total; i++) {
        cout << i+1 << ". " << customer[i] << endl;
    }
}

// Update
void updateCustomer() {
    int id;
    cout << "Enter customer number: ";
    cin >> id;

    if(id < 1 || id > total) {
        cout << "Invalid!\n";
        return;
    }

    cout << "Enter new name: ";
    cin >> customer[id-1];
    cout << "Updated!  "<<endl;
}

// Delete
void deleteCustomer() {
    int id;
    cout << "Enter customer number: ";
    cin >> id;

    if(id < 1 || id > total) {
        cout << "Invalid!   "<<endl;
        return;
    }

    for(int i = id-1; i < total-1; i++) {
        customer[i] = customer[i+1];
    }

    total--;
    cout << "Deleted!   "<<endl;
}

int main() {
    int choice;
do{

        cout << "\n1. Add\n2. View\n3. Update\n4. Delete\n0. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;
        switch(choice) {
            case 1:
                addCustomer();
                break;

            case 2:
                viewCustomers();
                break;

            case 3:
                updateCustomer();
                break;

            case 4:
                deleteCustomer();
                break;

            case 0:
                cout << "Exiting...\n";
                break;

            default:
                cout << "Invalid choice "<<endl;
        }
    }
    while(choice !=0);
return 0;
}
