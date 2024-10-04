#include <iostream>
#include <fstream>
#include <ctime>
using namespace std;

void main_menu()
{
    cout << "Selamat Data di buku tamu" << endl;
    cout << "1. List tamu" << endl;
    cout << "2. Add tamu" << endl;
};

void add_tamu()
{
    time_t timetmp;
    string value;
    time(&timetmp);
    std::string waktu = ctime(&timetmp);
    fstream append_list("./list_tamu.txt", fstream::app);
        if (!append_list.is_open())
        {
            cout << "File Terjadi masalah" << endl;
            return;
        }
        cout << "Masukan nama Tamu : ";
        cin.ignore();
        getline(cin, value);
        waktu.pop_back();
        value = waktu +" : "+ value + +"\n";
        append_list << value;
}

void list_tamu()
{
    fstream read_list("./list_tamu.txt", fstream::in);
    if (!read_list.is_open())
    {
        cout << "Saat ini anda tidak memiliki tamu" << endl;
        return;
    }
    string line;
    cout << "List tamua saat ini :" << endl;
    while (getline(read_list, line))
    {
        cout << line << endl;
    }
    
}

int main()
{
    //  mau check dulu ada gak user
    int menu;
    
    main_menu();
    cin >> menu;
    switch (menu)
    {
    case 1:
        list_tamu();
        break;
    case 2:
        add_tamu();
        break;
    }
    return 0;
}