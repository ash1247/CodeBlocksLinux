/* Copyright of Ashikul Hosen
   Excercise of C++ Primer 11.23
 */

#include <iostream>
#include <vector>
#include <map>
#include <iterator>
#include <algorithm>

typedef std::multimap<std::string, std::vector<std::string>> family_type;

void add_families(family_type &families, const std::string &name) {
  families.insert({name, std::vector<std::string>()});
  // auto ret = families.insert({ name, std::vector<std::string>() });
  //  if (!ret.second )
  //   std::cerr << "Already has family" << std::endl;
}

void add_children(family_type &families,
                  const std::string &family_name,
                  const std::string &child_name) {
  auto it = families.find(family_name);
  if (it != families.end())
    it->second.push_back(child_name);
  else
    std::cerr << "Family named " << family_name <<
        " is not available for "  << child_name << std::endl;
}

int main() {
    family_type families;
    add_families(families, "Hosen");
    add_families(families, "Ahmed");
    add_families(families, "Iqbal");
    add_families(families, "Hosen");
    add_children(families, "Hosen", "Mashra");
    add_children(families, "Hosen", "Anisha");
    add_children(families, "Ahmed", "Noor");
    add_children(families, "Iqbal", "Kobra");
    add_children(families, "Iqbal", "Asma");

    for (const auto &family : families) {
      std::cout << family.first << "'s family." << std::endl;
      for (const auto &name : family.second)
        std::cout << family.first << " " << name << std::endl;
    }
    return 0;
}
