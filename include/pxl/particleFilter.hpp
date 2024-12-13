#include <vector>
#include <tuple>

struct Particle{
    double x, y;
    double theta;
    double weight;

    // Define both less than ad greater than comparators for std::set (based on position and weight)
    bool operator<(const Particle &other) const {
        return std::tie(x, y, weight) < std::tie(other.x, other.y, other.weight);
    }

    bool operator>(const Particle &other) const {
        return std::tie(x, y, weight) > std::tie(other.x, other.y, other.weight);
    }
};

void particleFilter(std::vector<Particle>& particles);