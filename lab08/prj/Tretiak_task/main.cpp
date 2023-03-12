#include <iostream>
#include <locale>
#include <iomanip>
#include "ModulesTretiak.h"
using namespace std;

void showInfo();
float inputNum();
char inputSymb();
bool getLogicValue(char a, char b);
float decimalSys(int x, int y, int z);
float hexSys(int x, int y, int z);
int main()
{
    setlocale(LC_ALL, "ukr");
    showInfo();
    cout << "������ x, y, z(�����): " << endl;
    cout << "x -> ";
    float x = inputNum();
    cout << "y -> ";
    float y = inputNum();
    cout << "z -> ";
    float z = inputNum();
    cout << "������ a, b(�������): " << endl;
    cout << "a -> ";
    char a = inputSymb();
    cout << "b -> ";
    char b = inputSymb();
    cout << "��������� �������� ������: " << boolalpha  <<  getLogicValue(a,b)<< endl;
    decimalSys(x, y, z);
    hexSys(x,y,z);
    cout << "��������� �������" << endl;
    cout<< s_calculation(x, y, z) << endl;
    return 0;
}

void showInfo(){
    cout << "=====��������� ������ ������=====" << "\n" << "======�� ����� �������� �======" << endl ;
}
float inputNum(){
    float bufferNum;
    cin >> bufferNum;
    return bufferNum;
}
char inputSymb(){
    char bufferSymb;
    cin >> bufferSymb;
    return bufferSymb;
}
bool getLogicValue(char a, char b){
    return a + 3 <= b;
}
float decimalSys(int x, int y, int z){
    cout << "����� � ��������� ������ ��������" << endl;
    cout << dec << x <<endl;
    cout << dec << y <<endl;
    cout << dec << z <<endl;
}
float hexSys(int x, int y, int z){
    cout << "����� � �������������� ������ ��������" << endl;
    cout << hex << x << endl;
    cout << hex << y << endl;
    cout << hex << z << endl;
}
