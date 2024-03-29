#ifndef SOURCECODE_INCLUDE_BASE_GKEXPORTS_H_H
#define SOURCECODE_INCLUDE_BASE_GKEXPORTS_H_H

// 关于函数导入导出
#define GISKOOK_IMPORT __declspec(dllimport)
#define GISKOOK_EXPORT __declspec(dllexport)

#ifdef BASE_EXPORTS
#define BASE_API GISKOOK_EXPORT 
#else
#define BASE_API GISKOOK_IMPORT
#endif

#ifdef ENGINE_EXPORTS
#define ENGINE_API GISKOOK_EXPORT
#else
#define ENGINE_API GISKOOK_IMPORT
#endif

#ifdef ENGINESQLITEDB_EXPORTS
#define ENGINESQLITEDB_API GISKOOK_EXPORT
#else
#define ENGINESQLITEDB_API GISKOOK_IMPORT
#endif

#ifdef GEOMETRY_EXPORTS 
#define GEOMETRY_API GISKOOK_EXPORT
#else
#define GEOMETRY_API GISKOOK_IMPORT
#endif

#ifdef TOOLKIT_EXPORTS
#define TOOLKIT_API GISKOOK_EXPORT
#else
#define TOOLKIT_API GISKOOK_IMPORT
#endif

#ifdef ENGINEPG_EXPORTS
#define ENGINEPG_API GISKOOK_EXPORT
#else
#define ENGINEPG_API GISKOOK_IMPORT
#endif

#ifdef FILEPARSE_EXPORTS
#define FILEPARSE_API GISKOOK_EXPORT
#else
#define FILEPARSE_API GISKOOK_IMPORT
#endif

#endif