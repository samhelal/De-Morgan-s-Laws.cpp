#include <iostream>
using namespace std;

int main()
{

    // A. !(x < 5) && !(y >= 7)    =      !(x < 5) || !(y >= 7)
    // B. !(a == b) || !(g != 5)   =      !((a == b) && (g != 5))
    // C. !((x <= 8) && (y > 4))   =      !(x <= 8) || !(y > 4)
    // D. !((i > 4) || (j <= 6))   =      !(i > 4) && !(j <= 6)

    int x(0), y(0), a(0), b(0), g(0), i(0), j(0);

    // a

    cout << "chek if : !(x < 5) && !(y >= 7) = !(x < 5) || !(y >= 7)" << endl;
    cout << " Enter X :";
    cin >> x;
    cout << " Enter Y ";
    cin >> y;
    if (!(x < 5) || !(y >= 7))
    {
        cout << " True \n";
    }
    else
    {
        cout << " try again \n";
    }

    // b

    cout << "chek if : !(a == b) || !(g != 5) = !((a == b) && (g != 5))" << endl;
    cout << " Enter a :";
    cin >> a;
    cout << " Enter b ";
    cin >> b;
    cout << " Enter g ";
    cin >> g;

    if (!((a == b) && (g != 5)))
    {
        cout << " True \n";
    }
    else
    {
        cout << " try again \n";
    }

    // c

    cout << "chek if : !((x <= 8) && (y > 4)) = !(x <= 8) || !(y > 4)" << endl;
    cout << " Enter X :";
    cin >> x;
    cout << " Enter Y ";
    cin >> y;

    if (!(x <= 8) || !(y > 4))
    {
        cout << " True \n";
    }
    else
    {
        cout << " try again \n";
    }

    // d

    cout << "chek if : !((i > 4) || (j <= 6)) = !(i > 4) && !(j <= 6)" << endl;
    cout << " Enter i :";
    cin >> i;
    cout << " Enter j ";
    cin >> j;
    if (!(i > 4) && !(j <= 6))
    {
        cout << " True \n";
    }
    else
    {
        cout << " try again \n";
    }
}
