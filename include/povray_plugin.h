#ifndef POVRAY_PLUGIN_H
#define POVRAY_PLUGIN_H

#ifdef __cplusplus
extern "C" {
#endif

struct povray_point3d {
	double x, y, z;
};

struct povray_point2d {
	double x, y;
};

struct povray_triangle {
	int a, b, c;
};

struct povray_mesh {
	void (*freer)(struct povray_mesh*);

	int number_of_vertices;
	struct povray_point3d* vertices;

	int number_of_uvcoords;
	struct povray_point2d* uvcoords;

	int number_of_normals;
	struct povray_point3d* normals;

	int number_of_triangles;
	struct povray_triangle* triangles;
};

typedef void povray_vector_fn(double* inputs, double* outputs);
typedef double povray_scalar_fn(double* inputs);
	
typedef struct povray_mesh* povray_mesh_fn(void);

#ifdef __cplusplus
}
#endif

#endif

