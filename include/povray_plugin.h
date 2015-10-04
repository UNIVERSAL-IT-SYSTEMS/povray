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
	struct povray_point3d point[3];
	struct povray_point3d normal;
	struct povray_point2d uv[3];
};

typedef void povray_vector_fn(double* inputs, double* outputs);
typedef double povray_scalar_fn(double* inputs);
	
typedef void povray_free_triangles_fn(struct povray_triangle* triangle);
typedef void povray_mesh_fn(struct povray_triangle** triangles,
	int* count, povray_free_triangles_fn** freer);

#ifdef __cplusplus
}
#endif

#endif

