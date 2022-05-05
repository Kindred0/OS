#include <iostream>
#include <thread>
using namespace std;
class sample 
{
    public: 
    sample()
    {
        cout << "Thread Created" ;
    }
};

int main()
{
    thread Thread(sample);
    Thread.join();
    return 0;
}