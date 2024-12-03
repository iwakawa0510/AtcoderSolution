#include <thread>
#include <cstdio> 
#include <cstdint>

uint32_t count_;

void ThreadA()
{ for(int i=0; i<100000; ++ i){
    ++count_;
    }
}
void ThreadB()
{ for(int i=0; i<100000; ++ i){
    ++count_;
    }
}
int main()
{   count_ =0;
    std::thread th_a(ThreadA);
    std::thread th_b(ThreadB);

    th_a.join();
    th_b.join();

    printf("count_:%d\n",count_); 

    return 0;
}