// Raquel Figueroa
// Ali Fenton
// David Jia

#include <iostream>
#include <cctype>

char menu();
double  climbing(... );
double scuba(... );
double skyDive(... );
double spelunk();

using namespace std;

int main()
{

    return 0;
}
char menu()
{
    char ans;
    
     cout << "\n"
             << "**Welcome to High Adventure Travel Agency**\n"
             << "       We offer 4 vacation packages:\n"
             << "         A. Devil's Courthouse Adventure Weekend.\n"
             << "         B. Scuba Bahama.\n"
             << "         C. Sky Dive Colorado.\n"
             << "         D. Barron Cliff Spelunk.\n"
             << "\n"
             << "Please enter your preferred vacation package: ";
         
             cin >> ans;
             ans = tolower(ans);
             
             while (ans != 'a' && ans != 'b' && ans != 'c' && ans != 'd')
             {
                cout << "\n"
                     << "Invalid input. Please choose A, B, C, or D: ";
                cin >> ans;
                ans = tolower(ans);
             }
      return ans;
}

