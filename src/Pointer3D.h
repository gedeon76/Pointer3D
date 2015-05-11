
#include "InterfacePointer3D.hpp"


class Pointer3D: public InterfacePointer3D{

public:
		
	/// create the interface implementing the virtual constructor
	InterfacePointer3D *Create() { return new Pointer3D(); };
	~Pointer3D(){};

	void Init(bool &init);
	
	void showPointer(bool &pointerShow);	
	void getXYZPoseFromPointer(cv::Point3d &positionXYZ);


private:

	/// show the 3D pointer or not
	/// get the XYZ position of the current cursor position
	

};