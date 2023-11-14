#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

int findThirdCommaIndex(const char* s) {
    int commaCount = 0;
    for (int i = 0; s[i] != '\0'; ++i) {
        if (s[i] == ',') {
            commaCount++;
            if (commaCount == 3) {
                return i;
            }
        }
    }
    return -1;
}

char* replaceCommasWithStars(const char* s) {
    size_t len = strlen(s);
    char* modifiedString = new char[len * 2 + 1];
    int j = 0;
    for (int i = 0; s[i] != '\0'; ++i) {
        if (s[i] == ',') {
            strcat(modifiedString, "**");
            j += 2;
        }
        else {
            modifiedString[j++] = s[i];
            modifiedString[j] = '\0';
        }
    }
    return modifiedString;
}

int main() {
    char s[101];
    cout << "Enter a string:" << endl;
    cin.getline(s, 100);

    int thirdCommaIndex = findThirdCommaIndex(s);

    if (thirdCommaIndex != -1) {
        cout << "Index of the third comma: " << thirdCommaIndex << endl;

        char* modifiedString = replaceCommasWithStars(s);
        cout << "Modified string (param): " << modifiedString << endl;
        cout << "Modified string (result): " << modifiedString << endl;

        delete[] modifiedString;
    }
    else {
        cout << "The third comma was not found." << endl;
    }

    return 0;
}
