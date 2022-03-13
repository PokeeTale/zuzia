#include <iostream>

using namespace std;

int main()
{
    int n;
    
    cout << "Ile liczb pierwszych wyświetlić?" << endl;
    cin >> n;
    
    int lp = 0;
    int p = 2;
    int d;
    bool t;
    
    do {
        t = true;
        
        for( d = 2; d < p; d++ )
            
            if( p % d == 0 ) {
            t = false;
            break;
            }
            
        if( t ) {
        cout << p << " ";
        lp++;
        }
        
        p++;
        
    } while (lp < n);
    
    return 0;
}