#ifndef GEN_QNETWORKREPLY_H
#define GEN_QNETWORKREPLY_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QByteArray;
class QMetaObject;
class QNetworkAccessManager;
class QNetworkReply;
class QNetworkRequest;
class QSslConfiguration;
class QSslError;
class QSslPreSharedKeyAuthenticator;
class QUrl;
class QVariant;
#else
typedef struct QByteArray QByteArray;
typedef struct QMetaObject QMetaObject;
typedef struct QNetworkAccessManager QNetworkAccessManager;
typedef struct QNetworkReply QNetworkReply;
typedef struct QNetworkRequest QNetworkRequest;
typedef struct QSslConfiguration QSslConfiguration;
typedef struct QSslError QSslError;
typedef struct QSslPreSharedKeyAuthenticator QSslPreSharedKeyAuthenticator;
typedef struct QUrl QUrl;
typedef struct QVariant QVariant;
#endif

QMetaObject* QNetworkReply_MetaObject(const QNetworkReply* self);
void* QNetworkReply_Metacast(QNetworkReply* self, const char* param1);
struct miqt_string QNetworkReply_Tr(const char* s);
void QNetworkReply_Close(QNetworkReply* self);
bool QNetworkReply_IsSequential(const QNetworkReply* self);
long long QNetworkReply_ReadBufferSize(const QNetworkReply* self);
void QNetworkReply_SetReadBufferSize(QNetworkReply* self, long long size);
QNetworkAccessManager* QNetworkReply_Manager(const QNetworkReply* self);
int QNetworkReply_Operation(const QNetworkReply* self);
QNetworkRequest* QNetworkReply_Request(const QNetworkReply* self);
int QNetworkReply_Error(const QNetworkReply* self);
bool QNetworkReply_IsFinished(const QNetworkReply* self);
bool QNetworkReply_IsRunning(const QNetworkReply* self);
QUrl* QNetworkReply_Url(const QNetworkReply* self);
QVariant* QNetworkReply_Header(const QNetworkReply* self, int header);
bool QNetworkReply_HasRawHeader(const QNetworkReply* self, struct miqt_string headerName);
struct miqt_array QNetworkReply_RawHeaderList(const QNetworkReply* self);
struct miqt_string QNetworkReply_RawHeader(const QNetworkReply* self, struct miqt_string headerName);
QVariant* QNetworkReply_Attribute(const QNetworkReply* self, int code);
QSslConfiguration* QNetworkReply_SslConfiguration(const QNetworkReply* self);
void QNetworkReply_SetSslConfiguration(QNetworkReply* self, QSslConfiguration* configuration);
void QNetworkReply_IgnoreSslErrors(QNetworkReply* self, struct miqt_array /* of QSslError* */ errors);
void QNetworkReply_Abort(QNetworkReply* self);
void QNetworkReply_IgnoreSslErrors2(QNetworkReply* self);
void QNetworkReply_SocketStartedConnecting(QNetworkReply* self);
void QNetworkReply_connect_SocketStartedConnecting(QNetworkReply* self, intptr_t slot);
void QNetworkReply_RequestSent(QNetworkReply* self);
void QNetworkReply_connect_RequestSent(QNetworkReply* self, intptr_t slot);
void QNetworkReply_MetaDataChanged(QNetworkReply* self);
void QNetworkReply_connect_MetaDataChanged(QNetworkReply* self, intptr_t slot);
void QNetworkReply_Finished(QNetworkReply* self);
void QNetworkReply_connect_Finished(QNetworkReply* self, intptr_t slot);
void QNetworkReply_ErrorOccurred(QNetworkReply* self, int param1);
void QNetworkReply_connect_ErrorOccurred(QNetworkReply* self, intptr_t slot);
void QNetworkReply_Encrypted(QNetworkReply* self);
void QNetworkReply_connect_Encrypted(QNetworkReply* self, intptr_t slot);
void QNetworkReply_SslErrors(QNetworkReply* self, struct miqt_array /* of QSslError* */ errors);
void QNetworkReply_connect_SslErrors(QNetworkReply* self, intptr_t slot);
void QNetworkReply_PreSharedKeyAuthenticationRequired(QNetworkReply* self, QSslPreSharedKeyAuthenticator* authenticator);
void QNetworkReply_connect_PreSharedKeyAuthenticationRequired(QNetworkReply* self, intptr_t slot);
void QNetworkReply_Redirected(QNetworkReply* self, QUrl* url);
void QNetworkReply_connect_Redirected(QNetworkReply* self, intptr_t slot);
void QNetworkReply_RedirectAllowed(QNetworkReply* self);
void QNetworkReply_connect_RedirectAllowed(QNetworkReply* self, intptr_t slot);
void QNetworkReply_UploadProgress(QNetworkReply* self, long long bytesSent, long long bytesTotal);
void QNetworkReply_connect_UploadProgress(QNetworkReply* self, intptr_t slot);
void QNetworkReply_DownloadProgress(QNetworkReply* self, long long bytesReceived, long long bytesTotal);
void QNetworkReply_connect_DownloadProgress(QNetworkReply* self, intptr_t slot);
struct miqt_string QNetworkReply_Tr2(const char* s, const char* c);
struct miqt_string QNetworkReply_Tr3(const char* s, const char* c, int n);
void QNetworkReply_Delete(QNetworkReply* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
