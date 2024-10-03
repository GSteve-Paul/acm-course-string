#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

#define _macro_cat(a,b) a##b
#define macro_cat(a,b) _macro_cat(a,b)
#define RUN_FUNC() macro_cat(code, CODENB)()

void code1()
{
		//CODE 1
		cout << "CODE 1:\n";
    string s1;
    string s2 = "QWERTYuiop";
    string s3(s2);
    string s4(5, 'a');
}

void code2()
{
		//CODE 2
		cout << "CODE 2:\n";
    string s1, s2;
    cin >> s1 >> s2;
    cin.get();
    string s3;
    getline(cin, s3);
    cout << "s1 = " << s1 << endl
        << "s2 = " << s2 << endl
        << "s3 = " << s3 << endl;
}

void code3()
{
		//CODE 3
		cout << "CODE 3:\n";
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s1, s2;
    cin >> s1 >> s2;
    cin.get();
    string s3;
    getline(cin, s3);
    cout << "s1 = " << s1 << "\n"
        << "s2 = " << s2 << "\n"
        << "s3 = " << s3 << "\n";
}

void code4()
{
		//CODE 4
		cout << "CODE 4:\n";
    string s = "NENU";
    cout << s.size() << " " << s.length() << "\n";

    if (-1 >= s.size())
        cout << "???" << "\n";

    for (int i = s.length() - 10; i >= 0; i--)
        cout << s[i] << " ";
}

void code5()
{
		//CODE 5
		cout << "CODE 5:\n";
    string s = "aaa";
    string ss(3, 'b');
    string scat = s + ss;
    bool cmpres = s < ss;
    cout << "s + ss = " << scat << "\n";
    cout << "s is smaller then ss : " << boolalpha << cmpres << "\n";
}

void code6()
{
		//CODE 6
		cout << "CODE 6:\n";
    string s = "abcdefg";
    cout << s.find('c') << "\n";
    cout << boolalpha << (s.find('c', 3) == string::npos) << "\n";
    s.insert(3, "hhh");
    cout << s << "\n";
    s.erase(3, 3);
    cout << s << "\n";
    reverse(s.begin(), s.end());
    cout << s << "\n";
}

void code7()
{
		//CODE 7
		cout << "CODE 7:\n";
    string s = "Northeast Normal University";
    for (size_t i = 0; i < s.length(); i++)
        cout << s[i];
    cout << "\n";

    for (char ch : s)
        cout << ch;
    cout << "\n";
}

int main()
{
    RUN_FUNC();
    return 0;
}
