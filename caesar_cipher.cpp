// Hackoctoberfest 2021
// A C++ program to illustrate Caesar Cipher Technique
#include <iostream>
using namespace std;
 
// This function receives text and shift the letters 
// and returns the encrypted text
string encrypt(string text, int s)
{
    string result = "";
 
    // to traverse text
    for (int i=0;i<text.length();i++)
    {
        
        // Encrypting uppercase text
        if (isupper(text[i]))
            result += char(int(text[i]+s-65)%26 +65);
 
    // Encrypting lowercase text
    else
        result += char(int(text[i]+s-97)%26 +97);
    }
 
    // Return the encrypted string
    return result;
}
 
// Driver program to test the above function
int main()
{   cout << "***** HACKOCTOBERFEST 2021 *****";
    string text="HACKOTOBERFEST";
    int s = 6;
    cout <<"\n";
    cout << "Text : " << text;
    cout << "\nShift: " << s;
    cout << "\nCipher: " << encrypt(text, s);
    return 0;
}