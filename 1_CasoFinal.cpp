#include <variant>
#include <string>
#include <vector>
#include <functional>

using namespace std;

class Variant {
public:
    using ProcType = std::function<Variant(const vector<Variant>&)>;
};