#pragma once
class Vector3{
private:



public:
	float x, y, z;


	Vector3(float x = 0, float y = 0, float z = 0) : x(x), y(y), z(z) {}

	Vector3 operator+(const Vector3& Vec) const {
		return Vector3(x + Vec.x, y + Vec.y, z + Vec.z);
	}

	Vector3 operator-(const Vector3& Vec) const {
		return Vector3(x - Vec.x, y - Vec.y, z - Vec.z);
	}

	Vector3 operator==(const Vector3& Vec) const {
		return x == Vec.x, y == Vec.y, z == Vec.z;
	}

	


};

