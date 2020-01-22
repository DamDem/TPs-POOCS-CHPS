#include <vector>

#include "../headers/DataGen.h"

int main(int argc, char const *argv[])
{
    std::vector<double> theta = {14.5, 6.3};

    DataGen data(10, 10, 5, -1000, 1000);

    data.gen_poly(theta);

    data.draw();

    return 0;
}
