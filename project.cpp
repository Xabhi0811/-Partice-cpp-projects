#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

struct Contact {
    string name;
    string phone;
    string email;
};

vector<Contact> directory;

void addContact() {
    Contact c;
    cout << "Enter name: ";
    cin.ignore();
    getline(cin, c.name);
    cout << "Enter phone number: ";
    getline(cin, c.phone);
    cout << "Enter email: ";
    getline(cin, c.email);
    directory.push_back(c);
    cout << "Contact added successfully.\n";
}

void displayAll() {
    if (directory.empty()) {
        cout << "No contacts in directory.\n";
        return;
    }
    for (const auto& c : directory) {
        cout << "\nName  : " << c.name
             << "\nPhone : " << c.phone
             << "\nEmail : " << c.email << "\n";
    }
}

void searchByName(const string& name) {
    bool found = false;
    for (const auto& c : directory) {
        if (c.name == name) {
            cout << "\nContact Found:\n";
            cout << "Name  : " << c.name << "\n";
            cout << "Phone : " << c.phone << "\n";
            cout << "Email : " << c.email << "\n";
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "No contact found with the name \"" << name << "\"\n";
    }
}

void deleteByName(const string& name) {
    auto it = remove_if(directory.begin(), directory.end(), [&](const Contact& c) {
        return c.name == name;
    });
    if (it != directory.end()) {
        directory.erase(it, directory.end());
        cout << "Contact deleted successfully.\n";
    } else {
        cout << "Contact not found.\n";
    }
}

void modifyContact(const string& name) {
    bool found = false;
    for (auto& c : directory) {
        if (c.name == name) {
            cout << "Enter new phone number: ";
            getline(cin, c.phone);
            cout << "Enter new email: ";
            getline(cin, c.email);
            cout << "Contact updated successfully.\n";
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "Contact not found.\n";
    }
}

int main() {
    int choice;
    string name;

    while (true) {
        cout << "\n--- Telephone Directory Menu ---\n";
        cout << "1. Add Contact\n";
        cout << "2. Display All Contacts\n";
        cout << "3. Search Contact by Name\n";
        cout << "4. Delete Contact by Name\n";
        cout << "5. Modify Contact by Name\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore(); // to clear newline after int input

        switch (choice) {
            case 1:
                addContact();
                break;
            case 2:
                displayAll();
                break;
            case 3:
                cout << "Enter name to search: ";
                getline(cin, name);
                searchByName(name);
                break;
            case 4:
                cout << "Enter name to delete: ";
                getline(cin, name);
                deleteByName(name);
                break;
            case 5:
                cout << "Enter name to modify: ";
                getline(cin, name);
                modifyContact(name);
                break;
            case 6:
                cout << "Exiting program. Goodbye!\n";
                return 0;
            default:
                cout << "Invalid choice! Try again.\n";
        }
    }
}
