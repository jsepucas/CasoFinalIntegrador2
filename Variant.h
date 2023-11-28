#ifndef CASOFINALINTEGRADOR2_VARIANT_H
#define CASOFINALINTEGRADOR2_VARIANT_H

#include <string>
#include <vector>
#include <variant>
#include <functional>



class Variant {
public:

    using ProcType = std::function<Variant(const std::vector<Variant>&)>
            ;
private:

    std::variant<int, float, std::string, std::vector<Variant>, ProcType> value;

public:
    Variant();
    std::string to_string() const;
    std::string to_json_string() const;
    static Variant from_json_string(const std::string& json);
    void parse_json(const std::string& json);


};


#endif //CASOFINALINTEGRADOR2_VARIANT_H
