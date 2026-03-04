#include <iostream>
#include <string>
using namespace std;

string ReadText()
{
    string Text;
    cout << "Please enter Text?\n";
    getline(cin, Text);
    return Text;
}

string EncryptText(string Text)
{
    for (int i = 0; i <= Text.length(); i++)
    {
        Text[i] = char((int)Text[i] + 2);
    }
    return Text;
}

string DecryptText(string Text)
{
    for (int i = 0; i <= Text.length(); i++)
    {
        Text[i] = char((int)Text[i] - 2);
    }
    return Text;
}

int main()
{
    string TextAfterEncryption, TextAfterDecryption;
    string Text = ReadText();
    TextAfterEncryption = EncryptText(Text);
    TextAfterDecryption = DecryptText(TextAfterEncryption);
    cout << "\nText Before Encryption : " << Text << endl;
    cout << "Text After Encryption  : " << TextAfterEncryption << endl;
    cout << "Text After Decryption  : " << TextAfterDecryption << endl;
    return 0;
}