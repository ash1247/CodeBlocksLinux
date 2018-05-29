#include <iostream>
#include <vector>
#include <map>
#include <iterator>
#include <algorithm>

typedef std::pair<std::string, std::string> pss;
typedef std::vector<pss> vpss;
typedef std::map<std::string, vpss> family_type;

void add_families(family_type &families, const std::string &name)
{
    auto ret = families.insert({ name, vpss() });
    if( !ret.second )
        std::cerr << "Already has family" << std::endl;
}

void add_children(family_type &families, 
        const std::string family_name, const std::string child_name, 
        const std::string birthday) {
        
    auto it = families.find(family_name);
    if( it != families.end() )
        it->second.push_back( {child_name, birthday} );
    else 
        std::cerr << "Family named " << family_name <<
        " is not available for "  << child_name <<  std::endl;
    
}

int main() {
    
    family_type families;
    
    add_families(families, "Hosen");
    add_families(families, "Ahmed");
    add_families(families, "Iqbal");
    add_families(families, "Hosen");
    
    add_children(families, "Hosen", "Mashra", "27th January");
    add_children(families, "Hosen", "Anisha", "23th October");
    add_children(families, "Ahmed", "Noor", "06th October");
    add_children(families, "Iqbal", "Kobra", "14th September");
    add_children(families, "Iqbal", "Sonia", "17th November");
    
    for(const auto &family : families)
        for(const auto &name : family.second)
            std::cout << family.first << " " << name.first << " "
                        << name.second << std::endl;
        
}
