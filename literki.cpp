#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
using namespace std;

int main()
{
    string s = "";
    char k;
    k = getch();
    while((int)k!=27) {
        s = s+k;
        k = getch();
    }
    cout<<s<<endl;
    char ch = 'a';
    int A[26] = {0};
    for(int i=0;i<26;i++) {
        for(int j=0;j<s.length();j++) {
            if(s[j]==ch) A[i]++;
        }
        cout<<ch<<" : "<<A[i]<<endl;
        ch = ch + 1;
    }
    return 0;
}

