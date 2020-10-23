// standard macro names
// Its compilation began Nov 1 2005 at 10:12:29.
// The compiler gives a __cplusplus value of 1
#include <iostream>
using namespace std;
 int main()
 {
    cout << "This is the line number " << __LINE__;
    cout << " of file " << __FILE__ << ".\n";
    cout << "Its compilation began " << __DATE__;
    cout << " at " << __TIME__ << ".\n";
    cout << "The compiler gives a __cplusplus value of " << __cplusplus;
    return 0;
 }
