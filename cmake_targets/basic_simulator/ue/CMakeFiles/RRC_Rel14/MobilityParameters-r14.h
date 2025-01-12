/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/ue/CMakeFiles/RRC_Rel14`
 */

#ifndef	_MobilityParameters_r14_H_
#define	_MobilityParameters_r14_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MobilityParameters_r14__makeBeforeBreak_r14 {
	MobilityParameters_r14__makeBeforeBreak_r14_supported	= 0
} e_MobilityParameters_r14__makeBeforeBreak_r14;
typedef enum MobilityParameters_r14__rach_Less_r14 {
	MobilityParameters_r14__rach_Less_r14_supported	= 0
} e_MobilityParameters_r14__rach_Less_r14;

/* MobilityParameters-r14 */
typedef struct MobilityParameters_r14 {
	long	*makeBeforeBreak_r14;	/* OPTIONAL */
	long	*rach_Less_r14;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MobilityParameters_r14_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_makeBeforeBreak_r14_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_rach_Less_r14_4;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_MobilityParameters_r14;
extern asn_SEQUENCE_specifics_t asn_SPC_MobilityParameters_r14_specs_1;
extern asn_TYPE_member_t asn_MBR_MobilityParameters_r14_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _MobilityParameters_r14_H_ */
#include <asn_internal.h>
