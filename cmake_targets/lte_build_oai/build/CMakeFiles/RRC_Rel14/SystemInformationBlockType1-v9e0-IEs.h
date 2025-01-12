/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_SystemInformationBlockType1_v9e0_IEs_H_
#define	_SystemInformationBlockType1_v9e0_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include "FreqBandIndicator-v9e0.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct MultiBandInfoList_v9e0;
struct SystemInformationBlockType1_v10j0_IEs;

/* SystemInformationBlockType1-v9e0-IEs */
typedef struct SystemInformationBlockType1_v9e0_IEs {
	FreqBandIndicator_v9e0_t	*freqBandIndicator_v9e0;	/* OPTIONAL */
	struct MultiBandInfoList_v9e0	*multiBandInfoList_v9e0;	/* OPTIONAL */
	struct SystemInformationBlockType1_v10j0_IEs	*nonCriticalExtension;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SystemInformationBlockType1_v9e0_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SystemInformationBlockType1_v9e0_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_SystemInformationBlockType1_v9e0_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_SystemInformationBlockType1_v9e0_IEs_1[3];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "MultiBandInfoList-v9e0.h"
#include "SystemInformationBlockType1-v10j0-IEs.h"

#endif	/* _SystemInformationBlockType1_v9e0_IEs_H_ */
#include <asn_internal.h>
