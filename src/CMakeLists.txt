cmake_minimum_required(VERSION 2.8)

include_directories(${CMAKE_CURRENT_BINARY_DIR} ${OpenCV_INCLUDE_DIRS} ${Boost_INCLUDE_DIRS} ${mt_INCLUDE_DIRS} ${OPENHAPTICS_INCLUDE_DIR} ${OPENHAPTICS_INCLUDE_UTILITIES_DIR}) 
link_directories(${OpenCV_LIB_DIR} ${Boost_LIBRARY_DIRS} ${OPENHAPTICS_LIBRARIES})
  

set(Pointer3DComponent_SRCS 
					InterfacePointer3D.hpp
					Pointer3DAccess.h
					commonPointer3DComponent.h		
					Pointer3D.h 
					Pointer3DAccess.cpp
					Pointer3D.cpp)


add_library(Pointer3DComponent STATIC ${Pointer3DComponent_SRCS})
set(LIBRARY_OUTPUT_PATH ${CMAKE_HOME_DIRECTORY}/lib )

# copy the interface header to the library
file(COPY	InterfacePointer3D.hpp 
			commonPointer3DComponent.h
			Pointer3DAccess.h 
			Pointer3D.h			
			DESTINATION ${CMAKE_HOME_DIRECTORY}/include)

message("output directory is: " ${LIBRARY_OUTPUT_PATH})

#add_executable(StereoCameraComponent ${StereoCameraComponent_SRCS})
#if (UNIX) 
#  target_link_libraries(StereoCameraComponent ${OpenCV_LIBS})
#endif (UNIX)
#if (WIN32)
#  target_link_libraries(StereoCameraComponent ${OpenCV_LIBS})
#endif (WIN32)