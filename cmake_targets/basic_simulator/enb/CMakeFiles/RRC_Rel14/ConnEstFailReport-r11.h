/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/enb/CMakeFiles/RRC_Rel14`
 */

#ifndef	_ConnEstFailReport_r11_H_
#define	_ConnEstFailReport_r11_H_


#include <asn_application.h>

/* Including external dependencies */
#include "CellGlobalIdEUTRA.h"
#include "NumberOfPreamblesSent-r11.h"
#include <BOOLEAN.h>
#include "TimeSinceFailure-r11.h"
#include "RSRP-Range.h"
#include "RSRQ-Range.h"
#include <constr_SEQUENCE.h>
#include "RSRQ-Range-v1250.h"
#include "RSRP-Range-v1360.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct LocationInfo_r10;
struct MeasResultList2EUTRA_v9e0;
struct MeasResultList2EUTRA_r9;
struct MeasResultList2UTRA_r9;
struct MeasResultListGERAN;
struct MeasResultList2CDMA2000_r9;
struct RSRQ_Type_r12;
struct MeasResultList2EUTRA_v1250;

/* ConnEstFailReport-r11 */
typedef struct ConnEstFailReport_r11 {
	CellGlobalIdEUTRA_t	 failedCellId_r11;
	struct LocationInfo_r10	*locationInfo_r11;	/* OPTIONAL */
	struct ConnEstFailReport_r11__measResultFailedCell_r11 {
		RSRP_Range_t	 rsrpResult_r11;
		RSRQ_Range_t	*rsrqResult_r11;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} measResultFailedCell_r11;
	struct ConnEstFailReport_r11__measResultNeighCells_r11 {
		struct MeasResultList2EUTRA_r9	*measResultListEUTRA_r11;	/* OPTIONAL */
		struct MeasResultList2UTRA_r9	*measResultListUTRA_r11;	/* OPTIONAL */
		struct MeasResultListGERAN	*measResultListGERAN_r11;	/* OPTIONAL */
		struct MeasResultList2CDMA2000_r9	*measResultsCDMA2000_r11;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *measResultNeighCells_r11;
	NumberOfPreamblesSent_r11_t	 numberOfPreamblesSent_r11;
	BOOLEAN_t	 contentionDetected_r11;
	BOOLEAN_t	 maxTxPowerReached_r11;
	TimeSinceFailure_r11_t	 timeSinceFailure_r11;
	struct MeasResultList2EUTRA_v9e0	*measResultListEUTRA_v1130;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct ConnEstFailReport_r11__ext1 {
		RSRQ_Range_v1250_t	*measResultFailedCell_v1250;	/* OPTIONAL */
		struct RSRQ_Type_r12	*failedCellRSRQ_Type_r12;	/* OPTIONAL */
		struct MeasResultList2EUTRA_v1250	*measResultListEUTRA_v1250;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	struct ConnEstFailReport_r11__ext2 {
		RSRP_Range_v1360_t	*measResultFailedCell_v1360;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext2;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ConnEstFailReport_r11_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ConnEstFailReport_r11;
extern asn_SEQUENCE_specifics_t asn_SPC_ConnEstFailReport_r11_specs_1;
extern asn_TYPE_member_t asn_MBR_ConnEstFailReport_r11_1[11];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LocationInfo-r10.h"
#include "MeasResultList2EUTRA-v9e0.h"
#include "MeasResultList2EUTRA-r9.h"
#include "MeasResultList2UTRA-r9.h"
#include "MeasResultListGERAN.h"
#include "MeasResultList2CDMA2000-r9.h"
#include "RSRQ-Type-r12.h"
#include "MeasResultList2EUTRA-v1250.h"

#endif	/* _ConnEstFailReport_r11_H_ */
#include <asn_internal.h>
