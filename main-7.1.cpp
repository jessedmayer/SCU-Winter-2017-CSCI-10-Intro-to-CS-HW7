#include <iostream>
#include <cstring>

using namespace std;

string rev (string str){
string r="";
    for (int i=str.length()-1; i>=0; i--){
        r=r+str.at(i);
    }
return r;
}

int main()
{
string str="Hello, my name is Inigo Montoya. You killed my father.  Prepare to die!";

cout<<rev(str)<<endl;

    return 0;
}
