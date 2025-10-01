#include <iostream>
#include <fstream>
#include <cstring>
#include <iomanip>
#include <cstdlib>

using namespace std;

class emp {
private:
    int empno;
    char name[20];
    float sal;

public:
    void read();
    void show();
    void add();
    void disp_all();
    void menu();
    void search_empno();
    void search_empname();
    void del_empno();
    void del_empname();
    void modi_empno();
    void rand_disp();
    void heading();
    void line1();
    int check_empno(int e);
    int check_sal(float s);
};

int emp::check_empno(int e) {
    return e > 0;
}

int emp::check_sal(float s) {
    return s > 0;
}

void emp::read() {
    int z = 0;
    while (true) {
        cout << "Enter empno: ";
        cin >> empno;
        z = check_empno(empno);
        if (z == 0)
            cout << "Invalid empno, enter again\n";
        else
            break;
    }
    cout << "Enter name: ";
    cin >> name;
    while (true) {
        cout << "Enter salary: ";
        cin >> sal;
        z = check_sal(sal);
        if (z == 0)
            cout << "Invalid salary, enter again\n";
        else
            break;
    }
}

void emp::show() {
    cout << setw(10) << empno << setw(20) << name << setw(20) << sal << endl;
}

void emp::add() {
    fstream abc;
    emp e;

    abc.open("emp2.dat", ios::in);
    if (abc.fail()) {
        abc.open("emp2.dat", ios::out);
    } else {
        abc.close();
        abc.open("emp2.dat", ios::app);
    }

    e.read();
    abc.write((char*)&e, sizeof(e));
    abc.close();
}

void emp::line1() {
    for (int i = 1; i <= 60; i++) {
        cout << "-";
    }
    cout << endl;
}

void emp::heading() {
    line1();
    cout << "    E m p l o y e e  M a n a g e m e n t  S y s t e m\n";
    cout << "    ================================================\n";
    line1();
    cout << setw(10) << "EMP NO" << setw(20) << "NAME" << setw(20) << "SALARY" << endl;
    line1();
}

void emp::disp_all() {
    fstream abc;
    emp e;
    abc.open("emp2.dat", ios::in);
    if (abc.fail()) {
        cout << "Unable to open the file\n";
        return;
    }
    heading();
    abc.read((char*)&e, sizeof(e));
    while (!abc.eof()) {
        e.show();
        abc.read((char*)&e, sizeof(e));
    }
    line1();
    abc.close();
}

void emp::search_empno() {
    fstream abc;
    emp e;
    int te, z = 0;
    cout << "Enter empno to search: ";
    cin >> te;
    abc.open("emp2.dat", ios::in);
    if (abc.fail()) {
        cout << "Unable to open the file\n";
        return;
    }
    heading();
    abc.read((char*)&e, sizeof(e));
    while (!abc.eof()) {
        if (te == e.empno) {
            z = 1;
            e.show();
        }
        abc.read((char*)&e, sizeof(e));
    }
    line1();
    abc.close();
    if (z == 0)
        cout << "Record not found\n";
}

void emp::search_empname() {
    fstream abc;
    emp e;
    int z = 0;
    char tn[20];
    cout << "Enter employee name to search: ";
    cin >> tn;
    abc.open("emp2.dat", ios::in);
    if (abc.fail()) {
        cout << "Unable to open the file\n";
        return;
    }
    heading();
    abc.read((char*)&e, sizeof(e));
    while (!abc.eof()) {
        if (_stricmp(tn, e.name) == 0) {
            z = 1;
            e.show();
        }
        abc.read((char*)&e, sizeof(e));
    }
    line1();
    abc.close();
    if (z == 0)
        cout << "Record not found\n";
}

void emp::del_empno() {
    fstream abc, temp;
    emp e;
    int te, z = 0;
    cout << "Enter empno to delete: ";
    cin >> te;
    abc.open("emp2.dat", ios::in);
    temp.open("temp.dat", ios::out);
    if (abc.fail()) {
        cout << "Unable to open the file\n";
        return;
    }
    heading();
    abc.read((char*)&e, sizeof(e));
    while (!abc.eof()) {
        if (te == e.empno) {
            z = 1;
            e.show();
        } else {
            temp.write((char*)&e, sizeof(e));
        }
        abc.read((char*)&e, sizeof(e));
    }
    line1();
    abc.close();
    temp.close();
    if (z == 0)
        cout << "Record not found\n";
    else {
        remove("emp2.dat");
        rename("temp.dat", "emp2.dat");
    }
}

void emp::del_empname() {
    fstream abc, temp;
    emp e;
    int z = 0;
    char tn[20];
    cout << "Enter name to delete: ";
    cin >> tn;
    abc.open("emp2.dat", ios::in);
    temp.open("temp.dat", ios::out);
    if (abc.fail()) {
        cout << "Unable to open the file\n";
        return;
    }
    heading();
    abc.read((char*)&e, sizeof(e));
    while (!abc.eof()) {
        if (_stricmp(tn, e.name) == 0) {
            z = 1;
            e.show();
        } else {
            temp.write((char*)&e, sizeof(e));
        }
        abc.read((char*)&e, sizeof(e));
    }
    line1();
    abc.close();
    temp.close();
    if (z == 0)
        cout << "Record not found\n";
    else {
        remove("emp2.dat");
        rename("temp.dat", "emp2.dat");
    }
}

void emp::modi_empno() {
    fstream abc, temp;
    emp e;
    int te, z = 0;
    cout << "Enter empno to modify: ";
    cin >> te;
    abc.open("emp2.dat", ios::in);
    temp.open("temp.dat", ios::out);
    if (abc.fail()) {
        cout << "Unable to open the file\n";
        return;
    }
    heading();
    abc.read((char*)&e, sizeof(e));
    while (!abc.eof()) {
        if (te == e.empno) {
            z = 1;
            cout << "Old details:\n";
            e.show();
            cout << "Enter new details:\n";
            e.read();
        }
        temp.write((char*)&e, sizeof(e));
        abc.read((char*)&e, sizeof(e));
    }
    line1();
    abc.close();
    temp.close();
    if (z == 0)
        cout << "Record not found\n";
    else {
        remove("emp2.dat");
        rename("temp.dat", "emp2.dat");
    }
}

void emp::rand_disp() {
    fstream abc;
    emp e;
    long reclen = 0, totrec = 0, filelen = 0;
    int n;
    abc.open("emp2.dat", ios::in);
    if (abc.fail()) {
        cout << "Unable to open the file\n";
        return;
    }
    abc.seekg(0, ios::end);
    reclen = sizeof(e);
    filelen = abc.tellg();
    totrec = filelen / reclen;
    cout << "Total records: " << totrec << endl;
    cout << "Enter the record number to display: ";
    cin >> n;
    if (n <= 0 || n > totrec) {
        cout << "Invalid record number\n";
    } else {
        abc.seekg((n - 1) * sizeof(e), ios::beg);
        abc.read((char*)&e, sizeof(e));
        cout << "Emp No: " << e.empno << "\nName: " << e.name << "\nSalary: " << e.sal << endl;
    }
    abc.close();
}

void emp::menu() {
    cout << "\n\n=== Employee Management Menu ===\n";
    cout << "1. Add Record\n";
    cout << "2. Display All Records\n";
    cout << "3. Search by Employee Number\n";
    cout << "4. Search by Name\n";
    cout << "5. Delete by Employee Number\n";
    cout << "6. Delete by Name\n";
    cout << "7. Modify by Employee Number\n";
    cout << "8. Random Display of Record\n";
    cout << "0. Exit\n";
    cout << "Enter your choice: ";
}

int main() {
    int op = 1;
    emp e1;
    while (op != 0) {
        e1.menu();
        cin >> op;
        cin.ignore();
        system("cls");
        switch (op) {
        case 1: e1.add(); break;
        case 2: e1.disp_all(); break;
        case 3: e1.search_empno(); break;
        case 4: e1.search_empname(); break;
        case 5: e1.del_empno(); break;
        case 6: e1.del_empname(); break;
        case 7: e1.modi_empno(); break;
        case 8: e1.rand_disp(); break;
        case 0: cout << "Exiting program...\n"; exit(0);
        default: cout << "Invalid choice. Try again.\n"; break;
        }
        cout << "\nPress Enter to continue...";
        cin.get();
        system("cls");
    }
    return 0;
}
