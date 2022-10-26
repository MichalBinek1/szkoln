#include <iostream>
#include <string>
using namespace std;
bool isPalindrome (int number) {
    int decomposed = number, reversed = 0;
    while (decomposed) {
        reversed = 10 * reversed + (decomposed % 10);
        decomposed /= 10;
    }
    if( reversed == number){
        return true;
    }
    else{

        return false;
    }

}
void palind (int number) {
    int decomposed = number, reversed = 0;   // 101
    bool g = true;
    while (g) {

        reversed = 10 * reversed + (decomposed % 10); //  1 11
        decomposed /= 10;    // 10

    if(number == reversed)
    {
        cout<<"liczba "<< number << "jest palindromem";
        g = false;
    }
    if( decomposed == 0){
         decomposed = number + reversed;
        number = decomposed;
        reversed = 0;
    }
    }

}


int main()
{
    int liczba;
    cout<<"Prosze podac liczbe: ";
    cin >> liczba;
    if(isPalindrome(liczba)==true){
        cout<<"licbza "<<liczba<<" jest palindromem";
    }
    else{
       palind(liczba);

/*
    int decomposed = liczba, reversed = 0;   // 101
    bool g = true;
    while (g) {

        reversed = 10 * reversed + (decomposed % 10); //  1 11
        decomposed /= 10;    // 10

    if(liczba == reversed)
    {
        cout<<decomposed;
        g = false;
    }
    if( decomposed == 0){
         decomposed = liczba + reversed;
        liczba = decomposed;
        reversed = 0;
    }
    }*/
    }

    return 0;
}
