#include <iostream>
#include <cstring>
using namespace std;

class Girl; // Girl이라는 이름이 클래스 이름임을 알림

class Boy
{
    private:
        int height;
        friend class Girl; // Girl 클래스에 대한 friend 선언
    public:
        Boy(int len): height(len)
        { } // constructor
        void ShowYourFriendInfo(Girl &frn);
};

class Girl
{
    private:
        char phNum[20];
    public:
        Girl(const char * num)
        {
            strcpy(phNum, num);
        }
        void ShowYourFriendInfo(Boy &frn);
        friend class Boy; // Boy 클래스에 대한 friend tjsdjs
};

void Boy::ShowYourFriendInfo(Girl &frn)
{
    cout << "Her phone number: " << frn.phNum << endl;
}

void Girl::ShowYourFriendInfo(Boy &frn)
{
    cout << "His height: " << frn.height << endl;
}

int main(void)
{
    Boy boy(180);
    Girl girl("01012345678");
    boy.ShowYourFriendInfo(girl);
    girl.ShowYourFriendInfo(boy);
    return 0;
}