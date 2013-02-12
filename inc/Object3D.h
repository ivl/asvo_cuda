#pragma once

#include <helper_cuda.h>

#include "BFSOctree.h"
#include "Matrix.h"

/**
 * Encapsulates the raw data representation of a 3D object (the BFSOctree)
 * in a model that is easier to handle. It provides basic transformation.
 */
class Object3D
{
public:

	Object3D();
	Object3D( BFSOctree * data, bool rhsCoordianteSystem );

	void assignTransform( Matrix const & transform );

	BFSOctree const * data() const;
	BFSOctree * data();
	Matrix const & transform() const;

private:

	std::shared_ptr< BFSOctree > m_data;
	Matrix m_transform;
	bool m_rhsCoordSystem;
};