#include<iostream>
//using namespace std;
int main() {
    system("powershell winget update");
    system("powershell winget install Microsoft.OpenJDK.17");
    return 0;
}
