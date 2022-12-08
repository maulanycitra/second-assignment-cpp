#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int bil;
    do
    {
        for (bil=1;bil<=30;bil++)
            if (bil%2==0)cout << bil << ", ";
    }
    while (bil<=30);
    getch();
}
