/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_ThresholdUTRA_H_
#define	_ThresholdUTRA_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ThresholdUTRA_PR {
	ThresholdUTRA_PR_NOTHING,	/* No components present */
	ThresholdUTRA_PR_utra_RSCP,
	ThresholdUTRA_PR_utra_EcN0
} ThresholdUTRA_PR;

/* ThresholdUTRA */
typedef struct ThresholdUTRA {
	ThresholdUTRA_PR present;
	union ThresholdUTRA_u {
		long	 utra_RSCP;
		long	 utra_EcN0;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ThresholdUTRA_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ThresholdUTRA;
extern asn_CHOICE_specifics_t asn_SPC_ThresholdUTRA_specs_1;
extern asn_TYPE_member_t asn_MBR_ThresholdUTRA_1[2];
extern asn_per_constraints_t asn_PER_type_ThresholdUTRA_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _ThresholdUTRA_H_ */
#include <asn_internal.h>
