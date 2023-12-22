#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main() {
int j;
string i  ;
    cout << "Press Enter 3 times to reveal your future.";
    for ( j = 0; j <=2; j++)
    {
        cin.get();
    }
    
    srand(time(0));
    int x = rand()%9;

    if(x==0) i = "A"  ;
    else if(x==1) i = "B+" ;
    else if(x==2) i = "B";
    else if(x==3) i = "C+";
    else if(x==4) i = "C";
    else if(x==5) i = "D+";
    else if(x==6) i = "D";
    else if(x==7) i = "F";
    else i = "W";

cout << "You will get " << i << " in this 261102.";
return 0 ;
}

// cout << "Press Enter 3 times to reveal your future.";
// cout << "You will get A in this 261102.";
