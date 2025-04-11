#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {

    string str1 = "Hello";
    string str2 = "World";
    string str3;

    cout << "Length of str1: " << str1.length() << endl;

    cout << "Size of str2: " << str2.size() << endl;

    str3 = str1.append(" " + str2);
    cout << "After append: " << str3 << endl;

    int result = str1.compare(str2);
    if (result == 0) {
        cout << "str1 and str2 are equal" << endl;
    } else if (result < 0) {
        cout << "str1 is less than str2" << endl;
    } else {
        cout << "str1 is greater than str2" << endl;
    }

    cout << "Is str3 empty? " << (str3.empty() ? "Yes" : "No") << endl;

    str3.erase(5, 6);
    cout << "After erase: " << str3 << endl;

    size_t pos = str3.find("lo");
    if (pos != string::npos) {
        cout << "'lo' found at position: " << pos << endl;
    } else {
        cout << "'lo' not found" << endl;
    }

    str3.insert(5, " C++");
    cout << "After insert: " << str3 << endl;

    str3.replace(6, 3, "Programming");
    cout << "After replace: " << str3 << endl;

    string subStr = str3.substr(6, 11);
    cout << "Substring: " << subStr << endl;

    cout << "Before swap - str1: " << str1 << ", str2: " << str2 << endl;
    str1.swap(str2);
    cout << "After swap - str1: " << str1 << ", str2: " << str2 << endl;

    transform(str3.begin(), str3.end(), str3.begin(), ::toupper);
    cout << "Uppercase: " << str3 << endl;

    transform(str3.begin(), str3.end(), str3.begin(), ::tolower);
    cout << "Lowercase: " << str3 << endl;

    reverse(str3.begin(), str3.end());
    cout << "Reversed: " << str3 << endl;

    string numStr = to_string(12345);
    cout << "Number as string: " << numStr << endl;

    int num = stoi(numStr);
    cout << "String as number: " << num << endl;

    cout << "First character: " << str3[0] << endl;
    cout << "Second character: " << str3.at(1) << endl;

    str3.clear();
    cout << "After clear, str3 is: " << (str3.empty() ? "empty" : "not empty") << endl;

    return 0;
}
