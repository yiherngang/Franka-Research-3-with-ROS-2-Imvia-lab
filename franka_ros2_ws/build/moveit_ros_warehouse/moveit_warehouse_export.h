
#ifndef MOVEIT_WAREHOUSE_EXPORT_H
#define MOVEIT_WAREHOUSE_EXPORT_H

#ifdef MOVEIT_WAREHOUSE_STATIC_DEFINE
#  define MOVEIT_WAREHOUSE_EXPORT
#  define MOVEIT_WAREHOUSE_NO_EXPORT
#else
#  ifndef MOVEIT_WAREHOUSE_EXPORT
#    ifdef moveit_warehouse_EXPORTS
        /* We are building this library */
#      define MOVEIT_WAREHOUSE_EXPORT __attribute__((visibility("default")))
#    else
        /* We are using this library */
#      define MOVEIT_WAREHOUSE_EXPORT __attribute__((visibility("default")))
#    endif
#  endif

#  ifndef MOVEIT_WAREHOUSE_NO_EXPORT
#    define MOVEIT_WAREHOUSE_NO_EXPORT __attribute__((visibility("hidden")))
#  endif
#endif

#ifndef MOVEIT_WAREHOUSE_DEPRECATED
#  define MOVEIT_WAREHOUSE_DEPRECATED __attribute__ ((__deprecated__))
#endif

#ifndef MOVEIT_WAREHOUSE_DEPRECATED_EXPORT
#  define MOVEIT_WAREHOUSE_DEPRECATED_EXPORT MOVEIT_WAREHOUSE_EXPORT MOVEIT_WAREHOUSE_DEPRECATED
#endif

#ifndef MOVEIT_WAREHOUSE_DEPRECATED_NO_EXPORT
#  define MOVEIT_WAREHOUSE_DEPRECATED_NO_EXPORT MOVEIT_WAREHOUSE_NO_EXPORT MOVEIT_WAREHOUSE_DEPRECATED
#endif

#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef MOVEIT_WAREHOUSE_NO_DEPRECATED
#    define MOVEIT_WAREHOUSE_NO_DEPRECATED
#  endif
#endif

#endif /* MOVEIT_WAREHOUSE_EXPORT_H */
