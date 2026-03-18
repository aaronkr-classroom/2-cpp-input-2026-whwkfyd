/*#include <iostream>


int main() 
{
    
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
}
*/
#include <iostream> //square
using std::cin;
using std::cout;
using std::endl;

int main()
{
    int size;
    cin >> size;


    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << "*";
        }
        cout << endl;
    }
}