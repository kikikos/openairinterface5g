/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-InterNodeDefinitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/enb/CMakeFiles/RRC_Rel14`
 */

#ifndef	_CandidateCellInfo_r10_H_
#define	_CandidateCellInfo_r10_H_


#include <asn_application.h>

/* Including external dependencies */
#include "PhysCellId.h"
#include "ARFCN-ValueEUTRA.h"
#include "RSRP-Range.h"
#include "RSRQ-Range.h"
#include "ARFCN-ValueEUTRA-v9e0.h"
#include <constr_SEQUENCE.h>
#include "RSRQ-Range-v1250.h"
#include "RS-SINR-Range-r13.h"

#ifdef __cplusplus
extern "C" {
#endif

/* CandidateCellInfo-r10 */
typedef struct CandidateCellInfo_r10 {
	PhysCellId_t	 physCellId_r10;
	ARFCN_ValueEUTRA_t	 dl_CarrierFreq_r10;
	RSRP_Range_t	*rsrpResult_r10;	/* OPTIONAL */
	RSRQ_Range_t	*rsrqResult_r10;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct CandidateCellInfo_r10__ext1 {
		ARFCN_ValueEUTRA_v9e0_t	*dl_CarrierFreq_v1090;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	struct CandidateCellInfo_r10__ext2 {
		RSRQ_Range_v1250_t	*rsrqResult_v1250;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext2;
	struct CandidateCellInfo_r10__ext3 {
		RS_SINR_Range_r13_t	*rs_sinr_Result_r13;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext3;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CandidateCellInfo_r10_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CandidateCellInfo_r10;
extern asn_SEQUENCE_specifics_t asn_SPC_CandidateCellInfo_r10_specs_1;
extern asn_TYPE_member_t asn_MBR_CandidateCellInfo_r10_1[7];

#ifdef __cplusplus
}
#endif

#endif	/* _CandidateCellInfo_r10_H_ */
#include <asn_internal.h>