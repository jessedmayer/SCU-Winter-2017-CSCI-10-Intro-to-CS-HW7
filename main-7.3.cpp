#include <iostream>
#include <cstring>
using namespace std;

bool isdigit (char c){
    if ((c>=48)&&(c<=57)){
        return true;
    }
    else{
        return false;
    }
}

int c_to_digit(char c){
    int n=0;
    if (isdigit(c)){
       n=c-48;
    }
    else{
        n= -1;
    }
    return n;
}

int pow(int n, int ex){
    int ret=1;
    for (int i=0; i<ex; i++){
        ret=ret*n;
    }
    return ret;
}

int s_to_digit(string s){
    int output=0;

    for (int i=0; i<=s.length()-1; i++){
        char c=s.at(i);
        if(isdigit(c)==true){
            output+=c_to_digit(c)*pow(10,s.length()-1-i);
        }else{
            return -1;
        }
    }
        return output;
}


int main()
{
char c='6';
/*
cout<<isdigit('x')<<endl;
cout<<isdigit('Striggdakfhalkjsdfh')<<endl;
cout<<isdigit('4')<<endl;
cout<<isdigit('91')<<endl;
cout<<isdigit('8')<<endl;
cout<<isdigit('0')<<endl;
cout<<isdigit('9')<<endl;
*/
string s="253";
cout<<isdigit(c)<<endl;
cout<<c_to_digit(c)<<endl;
cout<<s_to_digit(s)<<endl;
    return 0;
}
