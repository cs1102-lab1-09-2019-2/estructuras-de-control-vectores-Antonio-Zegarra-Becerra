

#include <iostream>
using std::cout;

int main() {
    int x=0,y=0,z=0;
    for(y = 2; y <= 7; y++){
        for(x = 1; x <= y; x++)
            cout<<x;
        for(z = 0; z <= 7-x; z++)
            cout<<'*';
        cout<<"\n";
    }
    return 0;
}
