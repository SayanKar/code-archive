#include<bits/stdc++.h>
using namespace std;
int main(){
       ofstream file("Temp.txt");
       string name;
       cout << "Write your name";
       cin >> name;
      file << name;
      file << endl;
      
       file.close();
return 0;
}
