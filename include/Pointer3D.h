
#include "InterfacePointer3D.hpp"


class Pointer3D public: InterfacePointer3D{

public:
		
	/// create the interface implementing the virtual constructor
	Interface3DPointer *Create{ return new Pointer3D(); };
	~Pointer3D(){};





};