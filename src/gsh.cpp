#include <iostream>
#include <cstring>
#include <stdlib.h>

using namespace std;

int main ()
{
    string input;
    while(input!="exit")
    {
        cout<<"gsh >>";
        getline(cin,input);
        //convert to const*
        system((const char*)input.c_str());
        
    }
}