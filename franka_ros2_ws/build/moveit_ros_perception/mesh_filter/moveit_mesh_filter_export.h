
#ifndef MOVEIT_MESH_FILTER_EXPORT_H
#define MOVEIT_MESH_FILTER_EXPORT_H

#ifdef MOVEIT_MESH_FILTER_STATIC_DEFINE
#  define MOVEIT_MESH_FILTER_EXPORT
#  define MOVEIT_MESH_FILTER_NO_EXPORT
#else
#  ifndef MOVEIT_MESH_FILTER_EXPORT
#    ifdef moveit_mesh_filter_EXPORTS
        /* We are building this library */
#      define MOVEIT_MESH_FILTER_EXPORT __attribute__((visibility("default")))
#    else
        /* We are using this library */
#      define MOVEIT_MESH_FILTER_EXPORT __attribute__((visibility("default")))
#    endif
#  endif

#  ifndef MOVEIT_MESH_FILTER_NO_EXPORT
#    define MOVEIT_MESH_FILTER_NO_EXPORT __attribute__((visibility("hidden")))
#  endif
#endif

#ifndef MOVEIT_MESH_FILTER_DEPRECATED
#  define MOVEIT_MESH_FILTER_DEPRECATED __attribute__ ((__deprecated__))
#endif

#ifndef MOVEIT_MESH_FILTER_DEPRECATED_EXPORT
#  define MOVEIT_MESH_FILTER_DEPRECATED_EXPORT MOVEIT_MESH_FILTER_EXPORT MOVEIT_MESH_FILTER_DEPRECATED
#endif

#ifndef MOVEIT_MESH_FILTER_DEPRECATED_NO_EXPORT
#  define MOVEIT_MESH_FILTER_DEPRECATED_NO_EXPORT MOVEIT_MESH_FILTER_NO_EXPORT MOVEIT_MESH_FILTER_DEPRECATED
#endif

#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef MOVEIT_MESH_FILTER_NO_DEPRECATED
#    define MOVEIT_MESH_FILTER_NO_DEPRECATED
#  endif
#endif

#endif /* MOVEIT_MESH_FILTER_EXPORT_H */
