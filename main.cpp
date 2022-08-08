#include <iostream>

using namespace std;

int main()
{
    float gpa;
    gpa=3.8;
    string gender="female";

        if (  gpa>=3.6 ){
            if (gender == "female"){
                cout << "qualify";
            } else {
                cout << "unqualified";
            }
        } else {
            cout << "unqualified";
        }


    return 0;
}
