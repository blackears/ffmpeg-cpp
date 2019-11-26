#ifndef FFMPEGCPP_GLOBAL_H
#define FFMPEGCPP_GLOBAL_H

#ifdef QT_HEADERS
//#ifdef QT_VERSION
//#if defined(QT_VERSION)

#  include <QtCore/qglobal.h>

#  if defined(FFMPEGCPP_LIBRARY)
#    define FFMPEGCPP_EXPORT Q_DECL_EXPORT
#  else
#    define FFMPEGCPP_EXPORT Q_DECL_IMPORT
#  endif

#else
#  define FFMPEGCPP_EXPORT
#endif

#endif // FFMPEGCPP_GLOBAL_H
