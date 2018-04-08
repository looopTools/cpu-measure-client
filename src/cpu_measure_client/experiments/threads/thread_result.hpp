#include <chrono>

namespace cpu_measure_client
{
namespace experiments
{
namespace threads
{
class thread_result
{
public:
    thread_result(std::chrono::microseconds start,
                  std::chrono::microseconds end,
                  uint32_t amount_of_threads) :
        m_start(start), m_end(end), m_amount_of_threads(amount_of_threads)
    {

    }

    std::chrono::microseconds start()
    {
        return m_start;
    }

    std::chrono::microseconds end()
    {
        return m_end;
    }

    uint32_t amount_of_threads()
    {
        return m_amount_of_threads;
    }


private:

    std::chrono::microseconds m_start;
    std::chrono::microseconds m_end;
    uint32_t m_amount_of_threads;
}
}
}
}
