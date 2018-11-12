#include <iostream>
#include <utility>
#include <cmath>

using namespace std;

class Gen
{
    std::pair<double ,double> xy;
    int fit;
    float llh;
public:
    Gen(std::pair<double, double> a, int f, float lh)
            : xy(a),fit(f),llh(lh)
    {
        cout << "Constructor for GEN has been called!!!111!11!1!!\n";
    }
    ~Gen();
};

class chrm
{
    int x,y;
public:
    chrm()
    {
        cout << "Constructor for CHRM has been called!!!111!11!1!!\n";
    }
    ~chrm();
};

class popul
{
    int pts[4];
public:
    popul()
    {
        cout << "Constructor for POPUL has been called!!!111!11!1!!\n";
    }
    ~popul();
};

float get_val(int x, int y)
{
    return sin(x*exp(-y*y))/(1 + x*x + y*y);
}

double random(const double& l, const double& r)
{
    return (l+static_cast<double>(rand())/(static_cast<double>(RAND_MAX/(r-l))));
}

int main() {

    std::cout << "Hello, World!" << std::endl;
    return 0;
}
