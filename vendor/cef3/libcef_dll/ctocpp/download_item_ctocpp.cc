// Copyright (c) 2014 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.
//
// ---------------------------------------------------------------------------
//
// This file was generated by the CEF translator tool. If making changes by
// hand only do so within the body of existing method and function
// implementations. See the translator.README.txt file in the tools directory
// for more information.
//

#include "libcef_dll/ctocpp/download_item_ctocpp.h"


// VIRTUAL METHODS - Body may be edited by hand.

bool CefDownloadItemCToCpp::IsValid() {
  if (CEF_MEMBER_MISSING(struct_, is_valid))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = struct_->is_valid(struct_);

  // Return type: bool
  return _retval?true:false;
}

bool CefDownloadItemCToCpp::IsInProgress() {
  if (CEF_MEMBER_MISSING(struct_, is_in_progress))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = struct_->is_in_progress(struct_);

  // Return type: bool
  return _retval?true:false;
}

bool CefDownloadItemCToCpp::IsComplete() {
  if (CEF_MEMBER_MISSING(struct_, is_complete))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = struct_->is_complete(struct_);

  // Return type: bool
  return _retval?true:false;
}

bool CefDownloadItemCToCpp::IsCanceled() {
  if (CEF_MEMBER_MISSING(struct_, is_canceled))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = struct_->is_canceled(struct_);

  // Return type: bool
  return _retval?true:false;
}

int64 CefDownloadItemCToCpp::GetCurrentSpeed() {
  if (CEF_MEMBER_MISSING(struct_, get_current_speed))
    return 0;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int64 _retval = struct_->get_current_speed(struct_);

  // Return type: simple
  return _retval;
}

int CefDownloadItemCToCpp::GetPercentComplete() {
  if (CEF_MEMBER_MISSING(struct_, get_percent_complete))
    return 0;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = struct_->get_percent_complete(struct_);

  // Return type: simple
  return _retval;
}

int64 CefDownloadItemCToCpp::GetTotalBytes() {
  if (CEF_MEMBER_MISSING(struct_, get_total_bytes))
    return 0;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int64 _retval = struct_->get_total_bytes(struct_);

  // Return type: simple
  return _retval;
}

int64 CefDownloadItemCToCpp::GetReceivedBytes() {
  if (CEF_MEMBER_MISSING(struct_, get_received_bytes))
    return 0;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int64 _retval = struct_->get_received_bytes(struct_);

  // Return type: simple
  return _retval;
}

CefTime CefDownloadItemCToCpp::GetStartTime() {
  if (CEF_MEMBER_MISSING(struct_, get_start_time))
    return CefTime();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_time_t _retval = struct_->get_start_time(struct_);

  // Return type: simple
  return _retval;
}

CefTime CefDownloadItemCToCpp::GetEndTime() {
  if (CEF_MEMBER_MISSING(struct_, get_end_time))
    return CefTime();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_time_t _retval = struct_->get_end_time(struct_);

  // Return type: simple
  return _retval;
}

CefString CefDownloadItemCToCpp::GetFullPath() {
  if (CEF_MEMBER_MISSING(struct_, get_full_path))
    return CefString();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_string_userfree_t _retval = struct_->get_full_path(struct_);

  // Return type: string
  CefString _retvalStr;
  _retvalStr.AttachToUserFree(_retval);
  return _retvalStr;
}

uint32 CefDownloadItemCToCpp::GetId() {
  if (CEF_MEMBER_MISSING(struct_, get_id))
    return 0;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  uint32 _retval = struct_->get_id(struct_);

  // Return type: simple
  return _retval;
}

CefString CefDownloadItemCToCpp::GetURL() {
  if (CEF_MEMBER_MISSING(struct_, get_url))
    return CefString();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_string_userfree_t _retval = struct_->get_url(struct_);

  // Return type: string
  CefString _retvalStr;
  _retvalStr.AttachToUserFree(_retval);
  return _retvalStr;
}

CefString CefDownloadItemCToCpp::GetSuggestedFileName() {
  if (CEF_MEMBER_MISSING(struct_, get_suggested_file_name))
    return CefString();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_string_userfree_t _retval = struct_->get_suggested_file_name(struct_);

  // Return type: string
  CefString _retvalStr;
  _retvalStr.AttachToUserFree(_retval);
  return _retvalStr;
}

CefString CefDownloadItemCToCpp::GetContentDisposition() {
  if (CEF_MEMBER_MISSING(struct_, get_content_disposition))
    return CefString();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_string_userfree_t _retval = struct_->get_content_disposition(struct_);

  // Return type: string
  CefString _retvalStr;
  _retvalStr.AttachToUserFree(_retval);
  return _retvalStr;
}

CefString CefDownloadItemCToCpp::GetMimeType() {
  if (CEF_MEMBER_MISSING(struct_, get_mime_type))
    return CefString();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_string_userfree_t _retval = struct_->get_mime_type(struct_);

  // Return type: string
  CefString _retvalStr;
  _retvalStr.AttachToUserFree(_retval);
  return _retvalStr;
}


#ifndef NDEBUG
template<> base::AtomicRefCount CefCToCpp<CefDownloadItemCToCpp,
    CefDownloadItem, cef_download_item_t>::DebugObjCt = 0;
#endif

