#include <iostream>
#include <cxxopts.hpp>
#include <fibonacci.hpp>

using namespace std;

int main(int argc, char *argv[])
{
    int n;
    try
    {
        // Using the Head only cxxopts project to read GNU style arguments
        cxxopts::Options options("run_fibonacci <number 0-93>", "Finds the Nth fibonacci number until the 93th number. The defautl nth number is 15.");

        options.add_options()("n,number", "The nth fibonacci to find. Max 93, defautl 15.", cxxopts::value<int>()->default_value("15"))("h,help", "Print help");

        options.parse(argc, argv);

        if (options.count("help"))
        {
            std::cout << options.help({""}) << std::endl;
            exit(0);
        }

        n = options["number"].as<int>();

        if (n > 93)
        {
            std::cout << "This program support until the 93th fibanacci sequence number due to the size of the number." << std::endl;
            exit(0);
        }
    }
    catch (const cxxopts::OptionException &e)
    {
        std::cout << "error parsing options: " << e.what() << std::endl;
        exit(1);
    }

    Fibonacci fibo(n);
    cout << "Fibonacci of " << n << " is " << fibo.getResult() << endl;

    return 0;
}
