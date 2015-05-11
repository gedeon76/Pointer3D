/* \brief

This is the Interface for the 3DPointer virtual cursor that
serve as a exploration tool for robotic teleoperation tasks
it is important to note that this component will be the main
or gluer component for all the other developed components to
achieve the 3D virtual cursor correct working!

This is the Abstract Base Class that defines the interface for
this component

The API design uses the factory method software pattern
see : Chapter 3 Patterns of Book API C++ Design by M. Reedy 2011

some features are:

1. use of virtual constructors
2. use a factory method to enable the creation of the API class using a derived class
*/

/*
PROJECT:	3DPOINTER
COMPONENT:	3DPOINTER
DATE:		08.05.15
AUTHOR:		HENRY PORTILLA
SPECIAL
THANKS:		GOD

*/
#pragma once
#include "commonPointer3DComponent.h"

class Interface3DPointer{

public:

	/// Not default constructors instead use of virtual constructor
	virtual InterfacePointer3D* Create() = 0;
	virtual ~InterfacePointer3D(){};
	
	/// initializes the component
	virtual void Init(bool &init) = 0;

	/// Show Pointer or not
	/// @param[in,out] pointerShow boolean that enable or disable 3Dpointer showing
	virtual void showPointer(bool &pointerShow) = 0;

	/// get the real (X,Y,Z) position of the current explored position
	virtual void getXYZfromPointer(cv::Point3d &positionXYZ) = 0;



};