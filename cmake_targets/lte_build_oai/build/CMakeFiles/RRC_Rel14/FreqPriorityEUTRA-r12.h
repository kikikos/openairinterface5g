/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_FreqPriorityEUTRA_r12_H_
#define	_FreqPriorityEUTRA_r12_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ARFCN-ValueEUTRA-r9.h"
#include "CellReselectionPriority.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* FreqPriorityEUTRA-r12 */
typedef struct FreqPriorityEUTRA_r12 {
	ARFCN_ValueEUTRA_r9_t	 carrierFreq_r12;
	CellReselectionPriority_t	 cellReselectionPriority_r12;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} FreqPriorityEUTRA_r12_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_FreqPriorityEUTRA_r12;
extern asn_SEQUENCE_specifics_t asn_SPC_FreqPriorityEUTRA_r12_specs_1;
extern asn_TYPE_member_t asn_MBR_FreqPriorityEUTRA_r12_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _FreqPriorityEUTRA_r12_H_ */
#include <asn_internal.h>
