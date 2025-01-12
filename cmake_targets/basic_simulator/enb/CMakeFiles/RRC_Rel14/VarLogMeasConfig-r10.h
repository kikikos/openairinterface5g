/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-UE-Variables"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/enb/CMakeFiles/RRC_Rel14`
 */

#ifndef	_VarLogMeasConfig_r10_H_
#define	_VarLogMeasConfig_r10_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LoggingDuration-r10.h"
#include "LoggingInterval-r10.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct AreaConfiguration_r10;

/* VarLogMeasConfig-r10 */
typedef struct VarLogMeasConfig_r10 {
	struct AreaConfiguration_r10	*areaConfiguration_r10;	/* OPTIONAL */
	LoggingDuration_r10_t	 loggingDuration_r10;
	LoggingInterval_r10_t	 loggingInterval_r10;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} VarLogMeasConfig_r10_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_VarLogMeasConfig_r10;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "AreaConfiguration-r10.h"

#endif	/* _VarLogMeasConfig_r10_H_ */
#include <asn_internal.h>
