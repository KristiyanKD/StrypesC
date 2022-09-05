#include <iostream>
#include <string>
using namespace std;

typedef string tString;

class cWindow
{
protected:
    int Left;
    int Right;
    int Top;
    int Bottom;
public:
    cWindow()
        : Left(0), Right(0), Top(0), Bottom(0)
    {}
    cWindow(const cWindow& other)
    {
        this->Left = other.Left;
        this->Right = other.Right;
        this->Top = other.Top;
        this->Bottom = other.Bottom;
    }
};

class cHint : public cWindow
{
private:
    tString sCaption;
public:
    cHint()
    {
        this->Left = 0;
        this->Right = 0;
        this->Top = 0;
        this->Bottom = 0;
        this->sCaption = "";
    }
};

class cBitButton : public cWindow
{
private:
    tBitmap aBitmap;
public:
    cBitButton() = default;
};

int main()
{

    return 0;
}