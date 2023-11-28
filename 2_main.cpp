#include "Variant.h"
#include <iostream>

int main() {
    Variant v;
    v.parse_json("{\"name\":\"Juan\",\"age\":29}");
    std::cout << v.to_json_string() << std::endl;
    return 0;
}