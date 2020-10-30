#ifndef NAMESPACES_ANIMALS_H
#define NAMESPACES_ANIMALS_H

#include <iostream>
using namespace std;

namespace jwp {

    const string CATNAME = "Tiddles";

    class Cat {
    public:
        Cat();
        virtual ~Cat();
        void speak();
    };

}


#endif //NAMESPACES_ANIMALS_H
