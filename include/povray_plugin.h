#ifndef POVRAY_PLUGIN_H
#define POVRAY_PLUGIN_H

#ifdef __cplusplus
extern "C" {
#endif

typedef void povray_vector_fn(double* inputs, double* outputs);
typedef double povray_scalar_fn(double* inputs);
	
#ifdef __cplusplus
}
#endif

#endif

