#ifndef NAMESPACES_CAT_H
#define NAMESPACES_CAT_H

#include <iostream>
using namespace std;

namespace cats {

    const string CATNAME = "Freddy";

    class Cat {
    public:
        Cat();
        virtual ~Cat();
        void speak();
    };

}




#endif //NAMESPACES_CAT_H
