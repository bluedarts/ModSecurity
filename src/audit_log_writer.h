/*
 * ModSecurity, http://www.modsecurity.org/
 * Copyright (c) 2015 Trustwave Holdings, Inc. (http://www.trustwave.com/)
 *
 * You may not use this file except in compliance with
 * the License.  You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * If any of the files related to licensing are missing or if you have any
 * other questions related to licensing please contact Trustwave Holdings, Inc.
 * directly using the email address security@modsecurity.org.
 *
 */

#ifndef SRC_AUDIT_LOG_WRITER_H_
#define SRC_AUDIT_LOG_WRITER_H_

#ifdef __cplusplus
#include <string>
#include <iostream>
#include <sstream>
#include <fstream>
#endif

#ifdef __cplusplus

namespace ModSecurity {

/** @ingroup ModSecurity_CPP_API */
class AuditLogWriter : public std::ofstream {
 public:
    AuditLogWriter() { }

    virtual bool close() { return true; }
    virtual bool init() { return true; }
    virtual bool write(const std::string& log);

    std::string file_name(const std::string& unique_id);
};

}  // namespace ModSecurity
#endif

#endif  // SRC_AUDIT_LOG_WRITER_H_
