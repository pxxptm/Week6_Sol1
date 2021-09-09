#include<iostream>
#include<string>
using namespace std;

main()
{
    string s;
    cout << "Input String : ";
    cin >> s;

    int i;
    for(i=s.length()-1;i>=0;i--)
    {
        if(s[i]=='a') cout << "0";
        else if(s[i]=='e') cout << "1";
        else if(s[i]=='i') cout << "2";
        else if(s[i]=='o') cout << "3";
        else if(s[i]=='u') cout << "4";
        else cout << s[i];
    }
    cout << "aca";
    return 0;
}
