#include <iostream>
#include "lib.h"

using namespace std;
int main() {
    char a;
    cin >>a;
    if (convL(a)){
        cout<<a<<endl;
    }else{
        cout<<"error"<<endl;
    }
    return 0;
}
