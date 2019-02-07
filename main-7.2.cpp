#include <iostream>

using namespace std;

string remove_vowels (string s){
    string output="";
    for(int i=0; i<s.length()-1;i++){
        if(s.at(i)!='a' && s.at(i)!='e' && s.at(i)!='i' && s.at(i)!='o' && s.at(i)!='u' && s.at(i)!='A' & s.at(i)!='E' && s.at(i)!='I' && s.at(i)!='O' && s.at(i)!='U'){
            output+=s.at(i);
        }
    }
    return output;
}

int main()
{
    string test1="Hi, my name Inigo Montoya, you killed my father.  Prepare to die!";
    cout<<remove_vowels(test1);

    return 0;
}
