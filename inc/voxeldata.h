#ifndef voxeldata_h

#define voxeldata_h

#include "vector2.h"
#include "vector3.h"
#include "vector4.h"

/**
 * Stores all the neccessary data for drawing a
 * voxel. Used by the renderer. The equivalent in
 * OpenGL would be the input to the pixel/fragment shader.
 */
typedef struct
{
	Vector3 normal;
	Vector3 tangent;
	Vector4 pos;
	Vector2 texCoord;
	Vector3 eyeVec;
	Vector3 center;
} VoxelData;

#endif