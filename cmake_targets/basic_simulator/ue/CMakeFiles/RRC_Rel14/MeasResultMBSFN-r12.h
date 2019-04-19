/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/ue/CMakeFiles/RRC_Rel14`
 */

#ifndef	_MeasResultMBSFN_r12_H_
#define	_MeasResultMBSFN_r12_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RSRP-Range.h"
#include "MBSFN-RSRQ-Range-r12.h"
#include "MBSFN-AreaId-r12.h"
#include "ARFCN-ValueEUTRA-r9.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct BLER_Result_r12;
struct DataBLER_MCH_ResultList_r12;

/* MeasResultMBSFN-r12 */
typedef struct MeasResultMBSFN_r12 {
	struct MeasResultMBSFN_r12__mbsfn_Area_r12 {
		MBSFN_AreaId_r12_t	 mbsfn_AreaId_r12;
		ARFCN_ValueEUTRA_r9_t	 carrierFreq_r12;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} mbsfn_Area_r12;
	RSRP_Range_t	 rsrpResultMBSFN_r12;
	MBSFN_RSRQ_Range_r12_t	 rsrqResultMBSFN_r12;
	struct BLER_Result_r12	*signallingBLER_Result_r12;	/* OPTIONAL */
	struct DataBLER_MCH_ResultList_r12	*dataBLER_MCH_ResultList_r12;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MeasResultMBSFN_r12_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MeasResultMBSFN_r12;
extern asn_SEQUENCE_specifics_t asn_SPC_MeasResultMBSFN_r12_specs_1;
extern asn_TYPE_member_t asn_MBR_MeasResultMBSFN_r12_1[5];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "BLER-Result-r12.h"
#include "DataBLER-MCH-ResultList-r12.h"

#endif	/* _MeasResultMBSFN_r12_H_ */
#include <asn_internal.h>