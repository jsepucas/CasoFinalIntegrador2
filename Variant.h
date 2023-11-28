#ifndef CASOFINALINTEGRADOR2_VARIANT_H
#define CASOFINALINTEGRADOR2_VARIANT_H

#include <string>
#include <vector>
#include <variant>
#include <functional>



class Variant {
public:
    using ProcType = std::function<Variant(const std::vector<Variant>&)>;
private:
    std::variant<int, float, std::string, std::vector<Variant>, ProcType> value;

};


#endif //CASOFINALINTEGRADOR2_VARIANT_H
