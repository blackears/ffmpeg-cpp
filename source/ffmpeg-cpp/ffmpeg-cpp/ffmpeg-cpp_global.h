#ifndef FFMPEGCPP_GLOBAL_H
#define FFMPEGCPP_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(FFMPEGCPP_LIBRARY)
#  define FFMPEGCPP_EXPORT Q_DECL_EXPORT
#else
#  define FFMPEGCPP_EXPORT Q_DECL_IMPORT
#endif

#endif // FFMPEGCPP_GLOBAL_H
