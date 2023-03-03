#include <iostream>
#include <windows.h>

using namespace std;

void HexDecimal(int x, int y, int z)
{
    cout << "X in Decimal: " << dec << x << endl;
    cout << "X in Hex: " << hex << uppercase << x << endl;

    cout << "Y in Decimal: " << dec << y << endl;
    cout << "Y in Hex: " << hex << uppercase << y << endl;

    cout << "Z in Decimal: " << dec << z << endl;
    cout << "Z in Hex: " << hex << uppercase << z << endl;
}

bool BoolExpression(int a, int b)
{
    if(a + 1 >= b)
        return true;
    else
        return false;
}

void SoftwareDevelop(void)
{
    cout << "-----------------------------------\n";
    cout << "-Розробник: Півненко Олександр-----\n";
    cout << "-Це застосунок для обробки масиву--\n";
    cout << "-------© All Rights Reserved-------\n";
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int a = 0; int b = 0; int x, y, z = 0;

    SoftwareDevelop();
    cout << endl;

    cout << "Уведіть, будь ласка, числа x, y, z." << endl;
    cin >> x; cin >> y; cin >> z;

    HexDecimal(x, y, z);
    cout << endl;

    cout << "Уведіть, будь ласка, числа а i b." << endl;
    cin >> a;
    cin >> b;

    if(BoolExpression(a, b) == true)
        cout << "Bool Expression " << dec << "( " << a << ", " << b << " )" << " is true";
    else
        cout << "Bool Expression " << dec << "( " << a << ", " << b << " )" << " is false";

    getchar();
    getchar();

    return 0;
}
