/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_BandCombinationParameters_v1380_H_
#define	_BandCombinationParameters_v1380_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct BandParameters_v1380;

/* BandCombinationParameters-v1380 */
typedef struct BandCombinationParameters_v1380 {
	struct BandCombinationParameters_v1380__bandParameterList_v1380 {
		A_SEQUENCE_OF(struct BandParameters_v1380) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *bandParameterList_v1380;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} BandCombinationParameters_v1380_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_BandCombinationParameters_v1380;
extern asn_SEQUENCE_specifics_t asn_SPC_BandCombinationParameters_v1380_specs_1;
extern asn_TYPE_member_t asn_MBR_BandCombinationParameters_v1380_1[1];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "BandParameters-v1380.h"

#endif	/* _BandCombinationParameters_v1380_H_ */
#include <asn_internal.h>
