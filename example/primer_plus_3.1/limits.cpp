#include <iostream>
#include <climits>
#include <stdio.h>

using namespace std;


int main()
{
    int   int_number(100);  
    short short_number{88};
    short char_number{};
    long  long_number={99};
    wchar_t wchar_name = 'x';
    char16_t
    
    cout << "int_number = "   << int_number    << endl;
    cout << "short_number = " << short_number  << endl;
    cout << "char_number = "  << char_number   << endl;
    cout << "long_number = "  << long_number   << endl;

    cout << "Minimun int vlaue = "  << INT_MIN   << endl;
    cout << "Maximun int vlaue = "  << INT_MAX   << endl;
    cout << "Minimun char vlaue = " << CHAR_MIN  << endl;
    cout << "Maximun char vlaue = " << CHAR_MAX  << endl;

    wcout << L"wchar_t char: = " << wchar_name  << endl;

    FILE* p_file_ino = fopen("test.inotify", "w");
    if(nullptr == p_file_ino) {
        cout << "test.inotify open err " << endl;
        return -1;
    }else {
        cout << "test.inotify open sucess " << endl;
    }
    fclose(p_file_ino);

    return 0;
}