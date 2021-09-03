#include <iostream>
#include <functional>

using namespace std;

// void PrintData(const int iValue)
// {
//     cout << "Value = " << iValue << "\n";
// }

// int ReturnIA(int iA)
// {
//     return iA + 6;
// }

// void PrintReference(int iVal)
// {
//     iVal += 2;
//     cout << "Function Val = " << iVal << "\n";
//     cout << "Dia chi: " << &iVal << "\n";
// }

function<void()> PrintString()
{
    string strFullName("Nguyen Nhat Tuan");
    return [=] {
        cout << "Ho ten: " << strFullName << "\n";
        };
}

int main()
{
    auto funcPointer = PrintString();
    funcPointer(); // Xuat ra ho ten thong quan bien co kieu auto tro toi bien con tro ham.
    PrintString()(); // Xuat ra ho ten voi truc la bien con tro ham.

    // int iA = 10;
    // cout << "Ham PrintData.\n";
    // PrintData(iA);
    /*
    []()->int{}
    [] => Khai bao ham.
    () => Truyen danh sach tham so vao ham.
    */
//    cout << "Ham lambda.\n";
//     [](int iValue){
//         ++iValue;
//         cout << "Value = " << iValue << "\n";
//     }(8);

    // auto iTemp = [](int iA) -> int {
    //     return iA + 6;
    // }(10);
    // auto iTemp = ReturnIA(10);
    
    // cout << "Temp = " << iTemp << "\n";

    // By Reference: [&]
    // By Value: [=]
    //int iVal = 6;
    // [&]{
    //     iVal += 2;
    //     cout << "Lambda Function Val = " << iVal << "\n";
    //     cout << "Dia chi: " << &iVal << "\n";
    // }();

    // [=]() mutable {
    //     iVal += 2;
    //     cout << "Lambda Function mutable Val = " << iVal << "\n";
    //     cout << "Dia chi: " << &iVal << "\n";
    // }();

    // int iVal2 = 8;
    // [iVal, &iVal2]() mutable {
    //     iVal += 2;
    //     iVal2 += 3;
    //     cout << "Lambda Val = " << iVal << "\n";
    // }();

    // cout << "Val = " << iVal << "\n";
    // cout << "Val2 = " << iVal2 << "\n";
}