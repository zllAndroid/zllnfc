//
// Created by 徐华 on 16/03/2018.
//

#ifndef NFCSDKTEST_UTIL_H
#define NFCSDKTEST_UTIL_H

#include "define.h"

#define LOGGER_INFO    0
#define LOGGER_ERROR    1
#define LOGGER_DEBUG   2

enum RecordType {
    RECORD_TYPE_ADDRESS = 13,
    RECORD_TYPE_APP = 4,
    RECORD_TYPE_BLUETOOTH = 14,
    RECORD_TYPE_CONTACT = 6,
    RECORD_TYPE_CUSTOM = 9,
    RECORD_TYPE_EMPTY = 11,
    RECORD_TYPE_FACEBOOK = 16,
    RECORD_TYPE_GEO = 12,
    RECORD_TYPE_GITHUB = 23,
    RECORD_TYPE_GOOGLEPLUS = 18,
    RECORD_TYPE_INSTAGRAM = 21,
    RECORD_TYPE_LINKEDIN = 19,
    RECORD_TYPE_MAIL = 5,
    RECORD_TYPE_MEDIA = 10,
    RECORD_TYPE_PINTEREST = 20,
    RECORD_TYPE_SMS = 8,
    RECORD_TYPE_TASK = 24,
    RECORD_TYPE_TEL = 7,
    RECORD_TYPE_TEXT = 2,
    RECORD_TYPE_TUMBLR = 22,
    RECORD_TYPE_TWITTER = 17,
    RECORD_TYPE_UNKNOW = 1,
    RECORD_TYPE_URI = 3,
    RECORD_TYPE_WIFI = 15,
};

enum RecordID {
    RECORD_ID_ADDRESS = 10,
    RECORD_ID_APP = 3,
    RECORD_ID_BLUETOOTH = 11,
    RECORD_ID_CONTACT = 5,
    RECORD_ID_CUSTOM = 8,
    RECORD_ID_CUSTOM_URI = 12,
    RECORD_ID_FACEBOOK = 15,
    RECORD_ID_GEO = 9,
    RECORD_ID_GITHUB = 22,
    RECORD_ID_GOOGLEPLUS = 17,
    RECORD_ID_INSTAGRAM = 20,
    RECORD_ID_LINKEDIN = 18,
    RECORD_ID_MAIL = 4,
    RECORD_ID_PINTEREST = 19,
    RECORD_ID_SMS = 7,
    RECORD_ID_SOCIAL = 14,
    RECORD_ID_TEL = 6,
    RECORD_ID_TEXT = 1,
    RECORD_ID_TUMBLR = 21,
    RECORD_ID_TWITTER = 16,
    RECORD_ID_UNKNOW = 0,
    RECORD_ID_URI = 2,
    RECORD_ID_WIFI = 13,
};

void Logger(int level,const char *fmt,...);

#endif //NFCSDKTEST_UTIL_H
