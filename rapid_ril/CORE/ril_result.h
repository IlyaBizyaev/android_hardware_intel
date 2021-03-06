////////////////////////////////////////////////////////////////////////////
// ril_result.h
//
// Copyright 2009 Intrinsyc Software International, Inc.  All rights reserved.
// Patents pending in the United States of America and other jurisdictions.
//
//
// Description:
// Enums, defines and functions to work with error types internally in RapidRIL
//
/////////////////////////////////////////////////////////////////////////////

#ifndef RIL_RESULT_H
#define RIL_RESULT_H

#include "rril.h"


// CME error codes are mapped to 3GPP spec
#define CME_ERROR_OPERATION_NOT_SUPPORTED                   4
#define CME_ERROR_SIM_NOT_INSERTED                          10
#define CME_ERROR_SIM_PIN_REQUIRED                          11
#define CME_ERROR_SIM_PUK_REQUIRED                          12
#define CME_ERROR_SIM_FAILURE                               13
#define CME_ERROR_SIM_NOT_READY                             14
#define CME_ERROR_SIM_WRONG                                 15
#define CME_ERROR_INCORRECT_PASSWORD                        16
#define CME_ERROR_SIM_PIN2_REQUIRED                         17
#define CME_ERROR_SIM_PUK2_REQUIRED                         18
#define CME_ERROR_NO_NETWORK_SERVICE                        30
#define CME_ERROR_NETWORK_PUK_REQUIRED                      41
#define CME_ERROR_UKNOWN_ERROR                              100
#define CME_ERROR_ILLEGAL_MS                                103
#define CME_ERROR_ILLEGAL_ME                                106
#define CME_ERROR_PLMN_NOT_ALLOWED                          111
#define CME_ERROR_LOCATION_NOT_ALLOWED                      112
#define CME_ERROR_ROAMING_NOT_ALLOWED                       113
#define CME_ERROR_UNSPECIFIED_GPRS_ERROR                    148


// CMS error codes are mapped to 3GPP spec
#define CMS_ERROR_NETWORK_FAILURE                           17
#define CMS_ERROR_MEMORY_CAPACITY_EXCEEDED                  211
#define CMS_ERROR_UNSPECIFIED_FAILURE_CAUSE                 255
#define CMS_ERROR_SIM_ABSENT                                310
#define CMS_ERROR_MEMORY_FULL                               322
#define CMS_ERROR_MO_SMS_REJECTED_BY_SIM_MO_SMS_CONTROL     540
#define CMS_ERROR_FDN_CHECK_FAILED                          543
#define CMS_ERROR_SCA_FDN_FAILED                            544
#define CMS_ERROR_DA_FDN_FAILED                             545
#define CMS_ERROR_NO_ROUTE_TO_DESTINATION                   548
#define CMS_ERROR_ACM_MAX                                   564
#define CMS_ERROR_CALLED_PARTY_BLACKLISTED                  581
#define CMS_ERROR_CM_SERVICE_REJECT_FROM_NETWORK            623
#define CMS_ERROR_TIMER_EXPIRY                              625
#define CMS_ERROR_IMSI_DETACH_INITIATED                     626
#define CMS_ERROR_NUMBER_INCORRECT                          680

///////////////////////////////////////////////////////////////////////////////
// CEER Error code defines
//
#define CEER_CAUSE_OPERATOR_DETERMINED_BARRING             8
#define CEER_CAUSE_INSUFFICIENT_RESOURCES                  126
#define CEER_CAUSE_MISSING_UNKNOWN_APN                     127
#define CEER_CAUSE_UNKNOWN_PDP_ADDRESS_TYPE                128
#define CEER_CAUSE_USER_AUTHENTICATION_FAILED              129
#define CEER_CAUSE_ACTIVATION_REJECTED_BY_GGSN             130
#define CEER_CAUSE_ACTIVATION_REJECT_UNSPECIFIED           131
#define CEER_CAUSE_OPTION_NOT_SUPPORTED                    132
#define CEER_CAUSE_OPTION_NOT_SUBSCRIBED                   133
#define CEER_CAUSE_OPTION_TEMP_OUT_OF_ORDER                134
#define CEER_CAUSE_NSPAI_ALREADY_USED                      135
#define CEER_CAUSE_PDP_AUTHENTICATION_FAILURE              149

#endif
