#include "../experiment"

#include <thread>
namespace cpu_measure_client
{
namespace experiments
{
namespace threads
{

class spawning_thread : experiment
{
public:
    spawning_thread()
    {

    }

    void setup()
    {}

    void start()
    {}

    bool spawn_empty_thread()
    {
        std::thread t([](){});
        t.join
    }
};

}
}
}
