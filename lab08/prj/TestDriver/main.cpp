#include <iostream>
#include <iomanip>
#include <windows.h>
#include <math.h>
#include "ModulesPivnenko.hpp"

using namespace std;

void CheckResults(bool input){
    if(input == true)
        cout << "PASSED";
    else
        cout << "FAILED";
}

bool CompareResults(float a, float b){
    int i_a = a * pow(10, 2);
    int i_b = b * pow(10, 2);

    if(i_a == i_b)
        return true;
    else
        return false;
}

void TestCase(int x, int y, int z, int CaseNum, float Etalon){
    cout << endl << CaseNum << "-й тест-кейс." << endl;
    float FirstTest = s_calculation(x, y, z);
    cout << "Значення еталонне та отримане = " << fixed << setprecision(4) << FirstTest << ":" << Etalon << endl;

    bool CompRes = CompareResults(FirstTest, Etalon);

    CheckResults(CompRes);
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    TestCase(1, 1, 1, 1, 6.4344);

    TestCase(2, 1, 1, 2, 12.4344);

    TestCase(2, 3, 2, 3, 28.7273);

    TestCase(2, -2, 2, 4, 28.4095);

    TestCase(0, 0, 0, 5, 4.1415);

    TestCase(-1, 0, 0, 6, 4.1415);

    TestCase(5, 1, 1, 7, 246.4344);

    TestCase(10, 1, 1, 8, 59052.4336);

    TestCase(3, 3, 3, 9, 347.9168);

    TestCase(7, 5, 1, 10, 2189.0203);

    getchar();

    return 0;
}
