/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-InterNodeDefinitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/ue/CMakeFiles/RRC_Rel14`
 */

#ifndef	_SCG_Config_r12_IEs_H_
#define	_SCG_Config_r12_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct SCG_ConfigPartSCG_r12;

/* SCG-Config-r12-IEs */
typedef struct SCG_Config_r12_IEs {
	struct SCG_ConfigPartSCG_r12	*scg_RadioConfig_r12;	/* OPTIONAL */
	struct SCG_Config_r12_IEs__nonCriticalExtension {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtension;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SCG_Config_r12_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SCG_Config_r12_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_SCG_Config_r12_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_SCG_Config_r12_IEs_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "SCG-ConfigPartSCG-r12.h"

#endif	/* _SCG_Config_r12_IEs_H_ */
#include <asn_internal.h>
