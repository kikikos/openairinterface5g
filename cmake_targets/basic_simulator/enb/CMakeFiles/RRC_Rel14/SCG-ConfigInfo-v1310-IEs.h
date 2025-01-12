/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-InterNodeDefinitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/enb/CMakeFiles/RRC_Rel14`
 */

#ifndef	_SCG_ConfigInfo_v1310_IEs_H_
#define	_SCG_ConfigInfo_v1310_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct MeasResultSSTD_r13;
struct SCellToAddModListExt_r13;
struct MeasResultServCellListSCG_Ext_r13;
struct SCellToAddModListSCG_Ext_r13;
struct SCellToReleaseListExt_r13;
struct SCG_ConfigInfo_v1330_IEs;

/* SCG-ConfigInfo-v1310-IEs */
typedef struct SCG_ConfigInfo_v1310_IEs {
	struct MeasResultSSTD_r13	*measResultSSTD_r13;	/* OPTIONAL */
	struct SCellToAddModListExt_r13	*sCellToAddModListMCG_Ext_r13;	/* OPTIONAL */
	struct MeasResultServCellListSCG_Ext_r13	*measResultServCellListSCG_Ext_r13;	/* OPTIONAL */
	struct SCellToAddModListSCG_Ext_r13	*sCellToAddModListSCG_Ext_r13;	/* OPTIONAL */
	struct SCellToReleaseListExt_r13	*sCellToReleaseListSCG_Ext_r13;	/* OPTIONAL */
	struct SCG_ConfigInfo_v1330_IEs	*nonCriticalExtension;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SCG_ConfigInfo_v1310_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SCG_ConfigInfo_v1310_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_SCG_ConfigInfo_v1310_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_SCG_ConfigInfo_v1310_IEs_1[6];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "MeasResultSSTD-r13.h"
#include "SCellToAddModListExt-r13.h"
#include "MeasResultServCellListSCG-Ext-r13.h"
#include "SCellToAddModListSCG-Ext-r13.h"
#include "SCellToReleaseListExt-r13.h"
#include "SCG-ConfigInfo-v1330-IEs.h"

#endif	/* _SCG_ConfigInfo_v1310_IEs_H_ */
#include <asn_internal.h>
