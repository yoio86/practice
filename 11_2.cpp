#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(int argc, char* argv[])
{
    if (argc != 2)
    {
        cout << "用法：" << argv[0] << " 文件名" << endl;
        return 1;
    }
    ifstream inFile(argv[1], ios::binary);
    if (!inFile)
    {
        cout << "文件打开失败！" << endl;
        return 1;
    }
    string line;
    int lineNum = 1;
    while (getline(inFile, line))
    {
        cout << lineNum << ". " << line << endl;
        lineNum++;
    }

    inFile.close();
    return 0;
}