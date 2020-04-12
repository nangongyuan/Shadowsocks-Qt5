#ifndef EXPORT_H
#define EXPORT_H

#include <QtGlobal>

#ifdef QSS_STATIC
#  define QSS_EXPORT
#elif defined(QSS_LIBRARY)
#  define QSS_EXPORT Q_DECL_EXPORT
#else
#  define QSS_EXPORT Q_DECL_IMPORT
#endif


#define  FD_SETSIZE 1024


#endif // EXPORT_H
