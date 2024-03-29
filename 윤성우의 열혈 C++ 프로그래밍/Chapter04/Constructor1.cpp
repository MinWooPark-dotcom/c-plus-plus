#include <iostream>
using namespace std;

class SimpleClass
{
    private:
        int num1;
        int num2;
    public:
        /* Constructor: 
        1. 클래스의 이름과 함수 이름이 동일하다.
        2. 반환형이 선언되어 있지 않으며, 실제로 반환하지 않는다. 
        3. 함수이므로 오버로딩과 디폴트 값 설정이 가능하다. */
        SimpleClass() 
        {
            num1 = 0;
            num2 = 0;
        }
        SimpleClass(int n)
        {
            num1 = n;
            num2 = 0;
        }
        SimpleClass(int n1, int n2)
        {
            num1 = n1;
            num2 = n2;
        }
        /*
        SimpleClass(int n1=0, int n2=0)
        {
            num1 = n1;
            num2 = n2;
        }
        */

       void ShowData() const
       {
           cout << num1 << ' ' << num2 << endl;
       }
};

int main(void)
{
    SimpleClass sc1;
    sc1.ShowData();

    SimpleClass sc2(100);
    sc2.ShowData();

    SimpleClass sc3(100, 200);
    sc3.ShowData();
    return 0;
}

/*
0 0 
100 0
100 200
*/