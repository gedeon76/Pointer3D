/*!  \brief

This class is the access door to the Pointer3D interface
following the factory method pattern design for the API access

the next lines shows an example of how to use this component
to get access to its functionalities

\code{.cpp}


//This project test the pointer3D Component
//created for the purpose of interact with a 3D scene using a haptic device
//the device is a phantom 1.5 6 d.o.f High Force

#include "Pointer3DAccess.h"

using namespace std;

int main(int argc, char ** argv)
{
// create the component using the factory method pattern
Pointer3DAccess AccessObject;
InterfacePointer3D *Pointer3DComponent = AccessObject.CreatePointer3D();

bool enablePointerShow = true;
cv::Point3d positionXYZ;

// Initialize component
bool init = true;
Pointer3DComponent->Init(init);

// call the methods from the Pointer3D Component
Pointer3DComponent->showPointer(enablePointerShow);

while(1){

 // get the haptic position
 Pointer3DComponent->getXYZPoseFromPointer(positionXYZ);
 cout << "X: " << positionXYZ.x << "Y: " <<positionXYZ.y << "Z: " << positionXYZ.z << "\n" << endl;

}

delete Pointer3DComponent;

return 0;
}

\endcode


*/


#include "Pointer3D.h"			// Interface API

class Pointer3DAccess
{

public:
	/// Create the Haptic component calling this factory method
	InterfacePointer3D *CreatePointer3D();

};