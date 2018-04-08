namespace cpu_measure_client
{
namespace experiments
{
    class experiment
    {
    public:
        virtual void setup() = 0;
        virtual void start() = 0;
    };
}
}
